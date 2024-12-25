/* This file is generated by venus-protocol.  See vn_protocol_driver.h. */

/*
 * Copyright 2020 Google LLC
 * SPDX-License-Identifier: MIT
 */

#ifndef VN_PROTOCOL_DRIVER_INFO_H
#define VN_PROTOCOL_DRIVER_INFO_H

#include "vn_protocol_driver_defines.h"

#define VN_INFO_EXTENSION_MAX_NUMBER (500)

struct vn_info_extension {
   const char *name;
   uint32_t number;
   uint32_t spec_version;
};

/* sorted by extension names for bsearch */
static const uint32_t _vn_info_extension_count = 110;
static const struct vn_info_extension _vn_info_extensions[110] = {
   { "VK_EXT_4444_formats", 341, 1 },
   { "VK_EXT_border_color_swizzle", 412, 1 },
   { "VK_EXT_calibrated_timestamps", 185, 2 },
   { "VK_EXT_color_write_enable", 382, 1 },
   { "VK_EXT_command_serialization", 384, 1 },
   { "VK_EXT_conditional_rendering", 82, 2 },
   { "VK_EXT_conservative_rasterization", 102, 1 },
   { "VK_EXT_custom_border_color", 288, 12 },
   { "VK_EXT_depth_clip_control", 356, 1 },
   { "VK_EXT_depth_clip_enable", 103, 1 },
   { "VK_EXT_descriptor_indexing", 162, 2 },
   { "VK_EXT_dynamic_rendering_unused_attachments", 500, 1 },
   { "VK_EXT_extended_dynamic_state", 268, 1 },
   { "VK_EXT_extended_dynamic_state2", 378, 1 },
   { "VK_EXT_external_memory_dma_buf", 126, 1 },
   { "VK_EXT_fragment_shader_interlock", 252, 1 },
   { "VK_EXT_host_query_reset", 262, 1 },
   { "VK_EXT_image_2d_view_of_3d", 394, 1 },
   { "VK_EXT_image_drm_format_modifier", 159, 2 },
   { "VK_EXT_image_robustness", 336, 1 },
   { "VK_EXT_image_view_min_lod", 392, 1 },
   { "VK_EXT_index_type_uint8", 266, 1 },
   { "VK_EXT_inline_uniform_block", 139, 1 },
   { "VK_EXT_line_rasterization", 260, 1 },
   { "VK_EXT_load_store_op_none", 401, 1 },
   { "VK_EXT_memory_budget", 238, 1 },
   { "VK_EXT_multi_draw", 393, 1 },
   { "VK_EXT_mutable_descriptor_type", 495, 1 },
   { "VK_EXT_non_seamless_cube_map", 423, 1 },
   { "VK_EXT_pci_bus_info", 213, 2 },
   { "VK_EXT_pipeline_creation_cache_control", 298, 3 },
   { "VK_EXT_pipeline_creation_feedback", 193, 1 },
   { "VK_EXT_primitive_topology_list_restart", 357, 1 },
   { "VK_EXT_primitives_generated_query", 383, 1 },
   { "VK_EXT_private_data", 296, 1 },
   { "VK_EXT_provoking_vertex", 255, 1 },
   { "VK_EXT_queue_family_foreign", 127, 1 },
   { "VK_EXT_rasterization_order_attachment_access", 464, 1 },
   { "VK_EXT_robustness2", 287, 1 },
   { "VK_EXT_sampler_filter_minmax", 131, 2 },
   { "VK_EXT_scalar_block_layout", 222, 1 },
   { "VK_EXT_separate_stencil_usage", 247, 1 },
   { "VK_EXT_shader_demote_to_helper_invocation", 277, 1 },
   { "VK_EXT_shader_stencil_export", 141, 1 },
   { "VK_EXT_shader_subgroup_ballot", 65, 1 },
   { "VK_EXT_shader_viewport_index_layer", 163, 1 },
   { "VK_EXT_subgroup_size_control", 226, 2 },
   { "VK_EXT_texel_buffer_alignment", 282, 1 },
   { "VK_EXT_texture_compression_astc_hdr", 67, 1 },
   { "VK_EXT_tooling_info", 246, 1 },
   { "VK_EXT_transform_feedback", 29, 1 },
   { "VK_EXT_vertex_attribute_divisor", 191, 3 },
   { "VK_EXT_ycbcr_2plane_444_formats", 331, 1 },
   { "VK_KHR_16bit_storage", 84, 1 },
   { "VK_KHR_8bit_storage", 178, 1 },
   { "VK_KHR_bind_memory2", 158, 1 },
   { "VK_KHR_buffer_device_address", 258, 1 },
   { "VK_KHR_copy_commands2", 338, 1 },
   { "VK_KHR_create_renderpass2", 110, 1 },
   { "VK_KHR_dedicated_allocation", 128, 3 },
   { "VK_KHR_depth_stencil_resolve", 200, 1 },
   { "VK_KHR_descriptor_update_template", 86, 1 },
   { "VK_KHR_device_group", 61, 4 },
   { "VK_KHR_device_group_creation", 71, 1 },
   { "VK_KHR_draw_indirect_count", 170, 1 },
   { "VK_KHR_driver_properties", 197, 1 },
   { "VK_KHR_dynamic_rendering", 45, 1 },
   { "VK_KHR_external_fence", 114, 1 },
   { "VK_KHR_external_fence_capabilities", 113, 1 },
   { "VK_KHR_external_fence_fd", 116, 1 },
   { "VK_KHR_external_memory", 73, 1 },
   { "VK_KHR_external_memory_capabilities", 72, 1 },
   { "VK_KHR_external_memory_fd", 75, 1 },
   { "VK_KHR_external_semaphore", 78, 1 },
   { "VK_KHR_external_semaphore_capabilities", 77, 1 },
   { "VK_KHR_external_semaphore_fd", 80, 1 },
   { "VK_KHR_format_feature_flags2", 361, 2 },
   { "VK_KHR_get_memory_requirements2", 147, 1 },
   { "VK_KHR_get_physical_device_properties2", 60, 2 },
   { "VK_KHR_image_format_list", 148, 1 },
   { "VK_KHR_imageless_framebuffer", 109, 1 },
   { "VK_KHR_maintenance1", 70, 2 },
   { "VK_KHR_maintenance2", 118, 1 },
   { "VK_KHR_maintenance3", 169, 1 },
   { "VK_KHR_maintenance4", 414, 2 },
   { "VK_KHR_multiview", 54, 1 },
   { "VK_KHR_push_descriptor", 81, 2 },
   { "VK_KHR_relaxed_block_layout", 145, 1 },
   { "VK_KHR_sampler_mirror_clamp_to_edge", 15, 3 },
   { "VK_KHR_sampler_ycbcr_conversion", 157, 14 },
   { "VK_KHR_separate_depth_stencil_layouts", 242, 1 },
   { "VK_KHR_shader_atomic_int64", 181, 1 },
   { "VK_KHR_shader_clock", 182, 1 },
   { "VK_KHR_shader_draw_parameters", 64, 1 },
   { "VK_KHR_shader_float16_int8", 83, 1 },
   { "VK_KHR_shader_float_controls", 198, 4 },
   { "VK_KHR_shader_integer_dot_product", 281, 1 },
   { "VK_KHR_shader_non_semantic_info", 294, 1 },
   { "VK_KHR_shader_subgroup_extended_types", 176, 1 },
   { "VK_KHR_shader_terminate_invocation", 216, 1 },
   { "VK_KHR_spirv_1_4", 237, 1 },
   { "VK_KHR_storage_buffer_storage_class", 132, 1 },
   { "VK_KHR_synchronization2", 315, 1 },
   { "VK_KHR_timeline_semaphore", 208, 2 },
   { "VK_KHR_uniform_buffer_standard_layout", 254, 1 },
   { "VK_KHR_variable_pointers", 121, 1 },
   { "VK_KHR_vulkan_memory_model", 212, 3 },
   { "VK_KHR_zero_initialize_workgroup_memory", 326, 1 },
   { "VK_MESA_venus_protocol", 385, 1 },
   { "VK_VALVE_mutable_descriptor_type", 352, 1 },
};

static inline uint32_t
vn_info_wire_format_version(void)
{
    return 1;
}

static inline uint32_t
vn_info_vk_xml_version(void)
{
    return VK_MAKE_API_VERSION(0, 1, 3, 252);
}

static inline int
vn_info_extension_compare(const void *name, const void *ext)
{
   return strcmp(name, ((const struct vn_info_extension *)ext)->name);
}

static inline int32_t
vn_info_extension_index(const char *name)
{
   const struct vn_info_extension *ext = bsearch(name, _vn_info_extensions,
      _vn_info_extension_count, sizeof(*_vn_info_extensions),
      vn_info_extension_compare);
   return ext ? ext - _vn_info_extensions : -1;
}

static inline const struct vn_info_extension *
vn_info_extension_get(int32_t index)
{
   assert(index >= 0 && (uint32_t)index < _vn_info_extension_count);
   return &_vn_info_extensions[index];
}

static inline bool
vn_info_extension_mask_test(const uint32_t *mask, uint32_t ext_number)
{
   return mask[ext_number / 32] & (1 << (ext_number % 32));
}

#endif /* VN_PROTOCOL_DRIVER_INFO_H */
