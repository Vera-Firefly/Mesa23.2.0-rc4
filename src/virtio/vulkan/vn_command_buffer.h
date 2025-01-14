/*
 * Copyright 2019 Google LLC
 * SPDX-License-Identifier: MIT
 *
 * based in part on anv and radv which are:
 * Copyright © 2015 Intel Corporation
 * Copyright © 2016 Red Hat.
 * Copyright © 2016 Bas Nieuwenhuizen
 */

#ifndef VN_COMMAND_BUFFER_H
#define VN_COMMAND_BUFFER_H

#include "vn_common.h"

#include "vn_cs.h"

struct vn_command_pool {
   struct vn_object_base base;

   VkAllocationCallbacks allocator;
   struct vn_device *device;
   uint32_t queue_family_index;

   struct list_head command_buffers;

   struct list_head free_query_batches;
};
VK_DEFINE_NONDISP_HANDLE_CASTS(vn_command_pool,
                               base.base,
                               VkCommandPool,
                               VK_OBJECT_TYPE_COMMAND_POOL)

enum vn_command_buffer_state {
   VN_COMMAND_BUFFER_STATE_INITIAL,
   VN_COMMAND_BUFFER_STATE_RECORDING,
   VN_COMMAND_BUFFER_STATE_EXECUTABLE,
   VN_COMMAND_BUFFER_STATE_INVALID,
};

struct vn_command_buffer_builder {
   /* Temporary storage for scrubbing VK_IMAGE_LAYOUT_PRESENT_SRC_KHR. The
    * storage's lifetime is the command buffer's lifetime. We increase the
    * storage as needed, but never shrink it.
    */
   struct {
      void *data;
      size_t size;
   } tmp;

   const struct vn_render_pass *render_pass;
   const struct vn_framebuffer *framebuffer;
   const struct vn_image **present_src_images;
};

struct vn_command_buffer {
   struct vn_object_base base;

   struct vn_command_pool *pool;

   VkCommandBufferLevel level;
   uint32_t queue_family_index;

   struct list_head head;

   struct vn_command_buffer_builder builder;

   enum vn_command_buffer_state state;
   struct vn_cs_encoder cs;

   uint32_t draw_cmd_batched;

   /* For batching query feedback in render passes */
   /* in_render_pass remains true when a render pass is suspended */
   bool in_render_pass;
   bool suspends;
   /* viewMask is stored per subpass for legacy render pass */
   const struct vn_render_pass *render_pass;
   uint32_t subpass_index;
   /* view_mask is set when passed in by dynamic rendering/secondary cmd
    * buffers or on each subpass iteration for legacy render pass with
    * the above variables.
    */
   uint32_t view_mask;
   struct list_head query_batches;
};
VK_DEFINE_HANDLE_CASTS(vn_command_buffer,
                       base.base,
                       VkCommandBuffer,
                       VK_OBJECT_TYPE_COMMAND_BUFFER)

#endif /* VN_COMMAND_BUFFER_H */
