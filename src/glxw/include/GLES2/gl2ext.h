#ifndef __gl2ext_h_
#define __gl2ext_h_ 1

#ifdef __cplusplus
extern "C" {
#endif

/*
** Copyright (c) 2013-2017 The Khronos Group Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and/or associated documentation files (the
** "Materials"), to deal in the Materials without restriction, including
** without limitation the rights to use, copy, modify, merge, publish,
** distribute, sublicense, and/or sell copies of the Materials, and to
** permit persons to whom the Materials are furnished to do so, subject to
** the following conditions:
**
** The above copyright notice and this permission notice shall be included
** in all copies or substantial portions of the Materials.
**
** THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
** CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
** TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
** MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
*/
/*
** This header is generated from the Khronos OpenGL / OpenGL ES XML
** API Registry. The current version of the Registry, generator scripts
** used to make the header, and the header can be found at
**   https://github.com/KhronosGroup/OpenGL-Registry
*/

#ifndef GL_APIENTRYP
#define GL_APIENTRYP GL_APIENTRY*
#endif

/* Generated on date 20170613 */

/* Generated C header for:
 * API: gles2
 * Profile: common
 * Versions considered: 2\.[0-9]
 * Versions emitted: _nomatch_^
 * Default extensions included: gles2
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

#ifndef GL_KHR_blend_equation_advanced
#define GL_KHR_blend_equation_advanced 1
#define GL_MULTIPLY_KHR                   0x9294
#define GL_SCREEN_KHR                     0x9295
#define GL_OVERLAY_KHR                    0x9296
#define GL_DARKEN_KHR                     0x9297
#define GL_LIGHTEN_KHR                    0x9298
#define GL_COLORDODGE_KHR                 0x9299
#define GL_COLORBURN_KHR                  0x929A
#define GL_HARDLIGHT_KHR                  0x929B
#define GL_SOFTLIGHT_KHR                  0x929C
#define GL_DIFFERENCE_KHR                 0x929E
#define GL_EXCLUSION_KHR                  0x92A0
#define GL_HSL_HUE_KHR                    0x92AD
#define GL_HSL_SATURATION_KHR             0x92AE
#define GL_HSL_COLOR_KHR                  0x92AF
#define GL_HSL_LUMINOSITY_KHR             0x92B0
typedef void (GL_APIENTRYP PFNGLBLENDBARRIERKHRPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBlendBarrierKHR (void);
#endif
#endif /* GL_KHR_blend_equation_advanced */

#ifndef GL_KHR_blend_equation_advanced_coherent
#define GL_KHR_blend_equation_advanced_coherent 1
#define GL_BLEND_ADVANCED_COHERENT_KHR    0x9285
#endif /* GL_KHR_blend_equation_advanced_coherent */

#ifndef GL_KHR_context_flush_control
#define GL_KHR_context_flush_control 1
#define GL_CONTEXT_RELEASE_BEHAVIOR_KHR   0x82FB
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR 0x82FC
#endif /* GL_KHR_context_flush_control */

#ifndef GL_KHR_debug
#define GL_KHR_debug 1
typedef void (GL_APIENTRY  *GLDEBUGPROCKHR)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
#define GL_SAMPLER                        0x82E6
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR   0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_KHR    0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_KHR  0x8245
#define GL_DEBUG_SOURCE_API_KHR           0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_KHR 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_KHR   0x8249
#define GL_DEBUG_SOURCE_APPLICATION_KHR   0x824A
#define GL_DEBUG_SOURCE_OTHER_KHR         0x824B
#define GL_DEBUG_TYPE_ERROR_KHR           0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR 0x824E
#define GL_DEBUG_TYPE_PORTABILITY_KHR     0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_KHR     0x8250
#define GL_DEBUG_TYPE_OTHER_KHR           0x8251
#define GL_DEBUG_TYPE_MARKER_KHR          0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP_KHR      0x8269
#define GL_DEBUG_TYPE_POP_GROUP_KHR       0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION_KHR 0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR 0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH_KHR    0x826D
#define GL_BUFFER_KHR                     0x82E0
#define GL_SHADER_KHR                     0x82E1
#define GL_PROGRAM_KHR                    0x82E2
#define GL_VERTEX_ARRAY_KHR               0x8074
#define GL_QUERY_KHR                      0x82E3
#define GL_PROGRAM_PIPELINE_KHR           0x82E4
#define GL_SAMPLER_KHR                    0x82E6
#define GL_MAX_LABEL_LENGTH_KHR           0x82E8
#define GL_MAX_DEBUG_MESSAGE_LENGTH_KHR   0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_KHR  0x9144
#define GL_DEBUG_LOGGED_MESSAGES_KHR      0x9145
#define GL_DEBUG_SEVERITY_HIGH_KHR        0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_KHR      0x9147
#define GL_DEBUG_SEVERITY_LOW_KHR         0x9148
#define GL_DEBUG_OUTPUT_KHR               0x92E0
#define GL_CONTEXT_FLAG_DEBUG_BIT_KHR     0x00000002
#define GL_STACK_OVERFLOW_KHR             0x0503
#define GL_STACK_UNDERFLOW_KHR            0x0504
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGECONTROLKHRPROC) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGEINSERTKHRPROC) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGECALLBACKKHRPROC) (GLDEBUGPROCKHR callback, const void *userParam);
typedef GLuint (GL_APIENTRYP PFNGLGETDEBUGMESSAGELOGKHRPROC) (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
typedef void (GL_APIENTRYP PFNGLPUSHDEBUGGROUPKHRPROC) (GLenum source, GLuint id, GLsizei length, const GLchar *message);
typedef void (GL_APIENTRYP PFNGLPOPDEBUGGROUPKHRPROC) (void);
typedef void (GL_APIENTRYP PFNGLOBJECTLABELKHRPROC) (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTLABELKHRPROC) (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (GL_APIENTRYP PFNGLOBJECTPTRLABELKHRPROC) (const void *ptr, GLsizei length, const GLchar *label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTPTRLABELKHRPROC) (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (GL_APIENTRYP PFNGLGETPOINTERVKHRPROC) (GLenum pname, void **params);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDebugMessageControlKHR (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
GL_APICALL void GL_APIENTRY glDebugMessageInsertKHR (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
GL_APICALL void GL_APIENTRY glDebugMessageCallbackKHR (GLDEBUGPROCKHR callback, const void *userParam);
GL_APICALL GLuint GL_APIENTRY glGetDebugMessageLogKHR (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
GL_APICALL void GL_APIENTRY glPushDebugGroupKHR (GLenum source, GLuint id, GLsizei length, const GLchar *message);
GL_APICALL void GL_APIENTRY glPopDebugGroupKHR (void);
GL_APICALL void GL_APIENTRY glObjectLabelKHR (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
GL_APICALL void GL_APIENTRY glGetObjectLabelKHR (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
GL_APICALL void GL_APIENTRY glObjectPtrLabelKHR (const void *ptr, GLsizei length, const GLchar *label);
GL_APICALL void GL_APIENTRY glGetObjectPtrLabelKHR (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
GL_APICALL void GL_APIENTRY glGetPointervKHR (GLenum pname, void **params);
#endif
#endif /* GL_KHR_debug */

#ifndef GL_KHR_no_error
#define GL_KHR_no_error 1
#define GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR  0x00000008
#endif /* GL_KHR_no_error */

#ifndef GL_KHR_robust_buffer_access_behavior
#define GL_KHR_robust_buffer_access_behavior 1
#endif /* GL_KHR_robust_buffer_access_behavior */

#ifndef GL_KHR_robustness
#define GL_KHR_robustness 1
#define GL_CONTEXT_ROBUST_ACCESS_KHR      0x90F3
#define GL_LOSE_CONTEXT_ON_RESET_KHR      0x8252
#define GL_GUILTY_CONTEXT_RESET_KHR       0x8253
#define GL_INNOCENT_CONTEXT_RESET_KHR     0x8254
#define GL_UNKNOWN_CONTEXT_RESET_KHR      0x8255
#define GL_RESET_NOTIFICATION_STRATEGY_KHR 0x8256
#define GL_NO_RESET_NOTIFICATION_KHR      0x8261
#define GL_CONTEXT_LOST_KHR               0x0507
typedef GLenum (GL_APIENTRYP PFNGLGETGRAPHICSRESETSTATUSKHRPROC) (void);
typedef void (GL_APIENTRYP PFNGLREADNPIXELSKHRPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMFVKHRPROC) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMIVKHRPROC) (GLuint program, GLint location, GLsizei bufSize, GLint *params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMUIVKHRPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL GLenum GL_APIENTRY glGetGraphicsResetStatusKHR (void);
GL_APICALL void GL_APIENTRY glReadnPixelsKHR (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
GL_APICALL void GL_APIENTRY glGetnUniformfvKHR (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
GL_APICALL void GL_APIENTRY glGetnUniformivKHR (GLuint program, GLint location, GLsizei bufSize, GLint *params);
GL_APICALL void GL_APIENTRY glGetnUniformuivKHR (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
#endif
#endif /* GL_KHR_robustness */

#ifndef GL_KHR_texture_compression_astc_hdr
#define GL_KHR_texture_compression_astc_hdr 1
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR   0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR   0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR   0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR   0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR   0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR   0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR   0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR   0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR  0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR  0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR  0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR 0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR 0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR 0x93BD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR 0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR 0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR 0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR 0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR 0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR 0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR 0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR 0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR 0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR 0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR 0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR 0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR 0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR 0x93DD
#endif /* GL_KHR_texture_compression_astc_hdr */

#ifndef GL_KHR_texture_compression_astc_ldr
#define GL_KHR_texture_compression_astc_ldr 1
#endif /* GL_KHR_texture_compression_astc_ldr */

#ifndef GL_KHR_texture_compression_astc_sliced_3d
#define GL_KHR_texture_compression_astc_sliced_3d 1
#endif /* GL_KHR_texture_compression_astc_sliced_3d */

#ifndef GL_OES_EGL_image
#define GL_OES_EGL_image 1
typedef void *GLeglImageOES;
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETTEXTURE2DOESPROC) (GLenum target, GLeglImageOES image);
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC) (GLenum target, GLeglImageOES image);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glEGLImageTargetTexture2DOES (GLenum target, GLeglImageOES image);
GL_APICALL void GL_APIENTRY glEGLImageTargetRenderbufferStorageOES (GLenum target, GLeglImageOES image);
#endif
#endif /* GL_OES_EGL_image */

#ifndef GL_OES_EGL_image_external
#define GL_OES_EGL_image_external 1
#define GL_TEXTURE_EXTERNAL_OES           0x8D65
#define GL_TEXTURE_BINDING_EXTERNAL_OES   0x8D67
#define GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES 0x8D68
#define GL_SAMPLER_EXTERNAL_OES           0x8D66
#endif /* GL_OES_EGL_image_external */

#ifndef GL_OES_EGL_image_external_essl3
#define GL_OES_EGL_image_external_essl3 1
#endif /* GL_OES_EGL_image_external_essl3 */

#ifndef GL_OES_compressed_ETC1_RGB8_sub_texture
#define GL_OES_compressed_ETC1_RGB8_sub_texture 1
#endif /* GL_OES_compressed_ETC1_RGB8_sub_texture */

#ifndef GL_OES_compressed_ETC1_RGB8_texture
#define GL_OES_compressed_ETC1_RGB8_texture 1
#define GL_ETC1_RGB8_OES                  0x8D64
#endif /* GL_OES_compressed_ETC1_RGB8_texture */

#ifndef GL_OES_compressed_paletted_texture
#define GL_OES_compressed_paletted_texture 1
#define GL_PALETTE4_RGB8_OES              0x8B90
#define GL_PALETTE4_RGBA8_OES             0x8B91
#define GL_PALETTE4_R5_G6_B5_OES          0x8B92
#define GL_PALETTE4_RGBA4_OES             0x8B93
#define GL_PALETTE4_RGB5_A1_OES           0x8B94
#define GL_PALETTE8_RGB8_OES              0x8B95
#define GL_PALETTE8_RGBA8_OES             0x8B96
#define GL_PALETTE8_R5_G6_B5_OES          0x8B97
#define GL_PALETTE8_RGBA4_OES             0x8B98
#define GL_PALETTE8_RGB5_A1_OES           0x8B99
#endif /* GL_OES_compressed_paletted_texture */

#ifndef GL_OES_copy_image
#define GL_OES_copy_image 1
typedef void (GL_APIENTRYP PFNGLCOPYIMAGESUBDATAOESPROC) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glCopyImageSubDataOES (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
#endif
#endif /* GL_OES_copy_image */

#ifndef GL_OES_depth24
#define GL_OES_depth24 1
#define GL_DEPTH_COMPONENT24_OES          0x81A6
#endif /* GL_OES_depth24 */

#ifndef GL_OES_depth32
#define GL_OES_depth32 1
#define GL_DEPTH_COMPONENT32_OES          0x81A7
#endif /* GL_OES_depth32 */

#ifndef GL_OES_depth_texture
#define GL_OES_depth_texture 1
#endif /* GL_OES_depth_texture */

#ifndef GL_OES_draw_buffers_indexed
#define GL_OES_draw_buffers_indexed 1
#define GL_MIN                            0x8007
#define GL_MAX                            0x8008
typedef void (GL_APIENTRYP PFNGLENABLEIOESPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDISABLEIOESPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONIOESPROC) (GLuint buf, GLenum mode);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONSEPARATEIOESPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCIOESPROC) (GLuint buf, GLenum src, GLenum dst);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCSEPARATEIOESPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GL_APIENTRYP PFNGLCOLORMASKIOESPROC) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDIOESPROC) (GLenum target, GLuint index);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glEnableiOES (GLenum target, GLuint index);
GL_APICALL void GL_APIENTRY glDisableiOES (GLenum target, GLuint index);
GL_APICALL void GL_APIENTRY glBlendEquationiOES (GLuint buf, GLenum mode);
GL_APICALL void GL_APIENTRY glBlendEquationSeparateiOES (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
GL_APICALL void GL_APIENTRY glBlendFunciOES (GLuint buf, GLenum src, GLenum dst);
GL_APICALL void GL_APIENTRY glBlendFuncSeparateiOES (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
GL_APICALL void GL_APIENTRY glColorMaskiOES (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
GL_APICALL GLboolean GL_APIENTRY glIsEnablediOES (GLenum target, GLuint index);
#endif
#endif /* GL_OES_draw_buffers_indexed */

#ifndef GL_OES_draw_elements_base_vertex
#define GL_OES_draw_elements_base_vertex 1
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXOESPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXOESPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount, const GLint *basevertex);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDrawElementsBaseVertexOES (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
GL_APICALL void GL_APIENTRY glDrawRangeElementsBaseVertexOES (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
GL_APICALL void GL_APIENTRY glDrawElementsInstancedBaseVertexOES (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
GL_APICALL void GL_APIENTRY glMultiDrawElementsBaseVertexOES (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount, const GLint *basevertex);
#endif
#endif /* GL_OES_draw_elements_base_vertex */

#ifndef GL_OES_element_index_uint
#define GL_OES_element_index_uint 1
#endif /* GL_OES_element_index_uint */

#ifndef GL_OES_fbo_render_mipmap
#define GL_OES_fbo_render_mipmap 1
#endif /* GL_OES_fbo_render_mipmap */

#ifndef GL_OES_fragment_precision_high
#define GL_OES_fragment_precision_high 1
#endif /* GL_OES_fragment_precision_high */

#ifndef GL_OES_geometry_point_size
#define GL_OES_geometry_point_size 1
#endif /* GL_OES_geometry_point_size */

#ifndef GL_OES_geometry_shader
#define GL_OES_geometry_shader 1
#define GL_GEOMETRY_SHADER_OES            0x8DD9
#define GL_GEOMETRY_SHADER_BIT_OES        0x00000004
#define GL_GEOMETRY_LINKED_VERTICES_OUT_OES 0x8916
#define GL_GEOMETRY_LINKED_INPUT_TYPE_OES 0x8917
#define GL_GEOMETRY_LINKED_OUTPUT_TYPE_OES 0x8918
#define GL_GEOMETRY_SHADER_INVOCATIONS_OES 0x887F
#define GL_LAYER_PROVOKING_VERTEX_OES     0x825E
#define GL_LINES_ADJACENCY_OES            0x000A
#define GL_LINE_STRIP_ADJACENCY_OES       0x000B
#define GL_TRIANGLES_ADJACENCY_OES        0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_OES   0x000D
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_OES 0x8DDF
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS_OES 0x8A2C
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_OES 0x8A32
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS_OES 0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_OES 0x9124
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_OES 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_OES 0x8DE1
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS_OES 0x8E5A
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_OES 0x8C29
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_OES 0x92CF
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS_OES 0x92D5
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS_OES 0x90CD
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_OES 0x90D7
#define GL_FIRST_VERTEX_CONVENTION_OES    0x8E4D
#define GL_LAST_VERTEX_CONVENTION_OES     0x8E4E
#define GL_UNDEFINED_VERTEX_OES           0x8260
#define GL_PRIMITIVES_GENERATED_OES       0x8C87
#define GL_FRAMEBUFFER_DEFAULT_LAYERS_OES 0x9312
#define GL_MAX_FRAMEBUFFER_LAYERS_OES     0x9317
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_OES 0x8DA8
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES 0x8DA7
#define GL_REFERENCED_BY_GEOMETRY_SHADER_OES 0x9309
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREOESPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glFramebufferTextureOES (GLenum target, GLenum attachment, GLuint texture, GLint level);
#endif
#endif /* GL_OES_geometry_shader */

#ifndef GL_OES_get_program_binary
#define GL_OES_get_program_binary 1
#define GL_PROGRAM_BINARY_LENGTH_OES      0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS_OES 0x87FE
#define GL_PROGRAM_BINARY_FORMATS_OES     0x87FF
typedef void (GL_APIENTRYP PFNGLGETPROGRAMBINARYOESPROC) (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
typedef void (GL_APIENTRYP PFNGLPROGRAMBINARYOESPROC) (GLuint program, GLenum binaryFormat, const void *binary, GLint length);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glGetProgramBinaryOES (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
GL_APICALL void GL_APIENTRY glProgramBinaryOES (GLuint program, GLenum binaryFormat, const void *binary, GLint length);
#endif
#endif /* GL_OES_get_program_binary */

#ifndef GL_OES_gpu_shader5
#define GL_OES_gpu_shader5 1
#endif /* GL_OES_gpu_shader5 */

#ifndef GL_OES_mapbuffer
#define GL_OES_mapbuffer 1
#define GL_WRITE_ONLY_OES                 0x88B9
#define GL_BUFFER_ACCESS_OES              0x88BB
#define GL_BUFFER_MAPPED_OES              0x88BC
#define GL_BUFFER_MAP_POINTER_OES         0x88BD
typedef void *(GL_APIENTRYP PFNGLMAPBUFFEROESPROC) (GLenum target, GLenum access);
typedef GLboolean (GL_APIENTRYP PFNGLUNMAPBUFFEROESPROC) (GLenum target);
typedef void (GL_APIENTRYP PFNGLGETBUFFERPOINTERVOESPROC) (GLenum target, GLenum pname, void **params);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void *GL_APIENTRY glMapBufferOES (GLenum target, GLenum access);
GL_APICALL GLboolean GL_APIENTRY glUnmapBufferOES (GLenum target);
GL_APICALL void GL_APIENTRY glGetBufferPointervOES (GLenum target, GLenum pname, void **params);
#endif
#endif /* GL_OES_mapbuffer */

#ifndef GL_OES_packed_depth_stencil
#define GL_OES_packed_depth_stencil 1
#define GL_DEPTH_STENCIL_OES              0x84F9
#define GL_UNSIGNED_INT_24_8_OES          0x84FA
#define GL_DEPTH24_STENCIL8_OES           0x88F0
#endif /* GL_OES_packed_depth_stencil */

#ifndef GL_OES_primitive_bounding_box
#define GL_OES_primitive_bounding_box 1
#define GL_PRIMITIVE_BOUNDING_BOX_OES     0x92BE
typedef void (GL_APIENTRYP PFNGLPRIMITIVEBOUNDINGBOXOESPROC) (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glPrimitiveBoundingBoxOES (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
#endif
#endif /* GL_OES_primitive_bounding_box */

#ifndef GL_OES_required_internalformat
#define GL_OES_required_internalformat 1
#define GL_ALPHA8_OES                     0x803C
#define GL_DEPTH_COMPONENT16_OES          0x81A5
#define GL_LUMINANCE4_ALPHA4_OES          0x8043
#define GL_LUMINANCE8_ALPHA8_OES          0x8045
#define GL_LUMINANCE8_OES                 0x8040
#define GL_RGBA4_OES                      0x8056
#define GL_RGB5_A1_OES                    0x8057
#define GL_RGB565_OES                     0x8D62
#define GL_RGB8_OES                       0x8051
#define GL_RGBA8_OES                      0x8058
#define GL_RGB10_EXT                      0x8052
#define GL_RGB10_A2_EXT                   0x8059
#endif /* GL_OES_required_internalformat */

#ifndef GL_OES_rgb8_rgba8
#define GL_OES_rgb8_rgba8 1
#endif /* GL_OES_rgb8_rgba8 */

#ifndef GL_OES_sample_shading
#define GL_OES_sample_shading 1
#define GL_SAMPLE_SHADING_OES             0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_OES   0x8C37
typedef void (GL_APIENTRYP PFNGLMINSAMPLESHADINGOESPROC) (GLfloat value);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glMinSampleShadingOES (GLfloat value);
#endif
#endif /* GL_OES_sample_shading */

#ifndef GL_OES_sample_variables
#define GL_OES_sample_variables 1
#endif /* GL_OES_sample_variables */

#ifndef GL_OES_shader_image_atomic
#define GL_OES_shader_image_atomic 1
#endif /* GL_OES_shader_image_atomic */

#ifndef GL_OES_shader_io_blocks
#define GL_OES_shader_io_blocks 1
#endif /* GL_OES_shader_io_blocks */

#ifndef GL_OES_shader_multisample_interpolation
#define GL_OES_shader_multisample_interpolation 1
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES 0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES 0x8E5D
#endif /* GL_OES_shader_multisample_interpolation */

#ifndef GL_OES_standard_derivatives
#define GL_OES_standard_derivatives 1
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES 0x8B8B
#endif /* GL_OES_standard_derivatives */

#ifndef GL_OES_stencil1
#define GL_OES_stencil1 1
#define GL_STENCIL_INDEX1_OES             0x8D46
#endif /* GL_OES_stencil1 */

#ifndef GL_OES_stencil4
#define GL_OES_stencil4 1
#define GL_STENCIL_INDEX4_OES             0x8D47
#endif /* GL_OES_stencil4 */

#ifndef GL_OES_surfaceless_context
#define GL_OES_surfaceless_context 1
#define GL_FRAMEBUFFER_UNDEFINED_OES      0x8219
#endif /* GL_OES_surfaceless_context */

#ifndef GL_OES_tessellation_point_size
#define GL_OES_tessellation_point_size 1
#endif /* GL_OES_tessellation_point_size */

#ifndef GL_OES_tessellation_shader
#define GL_OES_tessellation_shader 1
#define GL_PATCHES_OES                    0x000E
#define GL_PATCH_VERTICES_OES             0x8E72
#define GL_TESS_CONTROL_OUTPUT_VERTICES_OES 0x8E75
#define GL_TESS_GEN_MODE_OES              0x8E76
#define GL_TESS_GEN_SPACING_OES           0x8E77
#define GL_TESS_GEN_VERTEX_ORDER_OES      0x8E78
#define GL_TESS_GEN_POINT_MODE_OES        0x8E79
#define GL_ISOLINES_OES                   0x8E7A
#define GL_QUADS_OES                      0x0007
#define GL_FRACTIONAL_ODD_OES             0x8E7B
#define GL_FRACTIONAL_EVEN_OES            0x8E7C
#define GL_MAX_PATCH_VERTICES_OES         0x8E7D
#define GL_MAX_TESS_GEN_LEVEL_OES         0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_OES 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_OES 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_OES 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_OES 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_OES 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS_OES  0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_OES 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_OES 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_OES 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_OES 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_OES 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_OES 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_OES 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_OES 0x8E1F
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_OES 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_OES 0x92CE
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_OES 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_OES 0x92D4
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_OES 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_OES 0x90CC
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_OES 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_OES 0x90D9
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_OES 0x8221
#define GL_IS_PER_PATCH_OES               0x92E7
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER_OES 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER_OES 0x9308
#define GL_TESS_CONTROL_SHADER_OES        0x8E88
#define GL_TESS_EVALUATION_SHADER_OES     0x8E87
#define GL_TESS_CONTROL_SHADER_BIT_OES    0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT_OES 0x00000010
typedef void (GL_APIENTRYP PFNGLPATCHPARAMETERIOESPROC) (GLenum pname, GLint value);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glPatchParameteriOES (GLenum pname, GLint value);
#endif
#endif /* GL_OES_tessellation_shader */

#ifndef GL_OES_texture_3D
#define GL_OES_texture_3D 1
#define GL_TEXTURE_WRAP_R_OES             0x8072
#define GL_TEXTURE_3D_OES                 0x806F
#define GL_TEXTURE_BINDING_3D_OES         0x806A
#define GL_MAX_3D_TEXTURE_SIZE_OES        0x8073
#define GL_SAMPLER_3D_OES                 0x8B5F
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES 0x8CD4
typedef void (GL_APIENTRYP PFNGLTEXIMAGE3DOESPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (GL_APIENTRYP PFNGLTEXSUBIMAGE3DOESPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (GL_APIENTRYP PFNGLCOPYTEXSUBIMAGE3DOESPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXIMAGE3DOESPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE3DOESPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
GL_APICALL void GL_APIENTRY glTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
GL_APICALL void GL_APIENTRY glCopyTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GL_APICALL void GL_APIENTRY glCompressedTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
GL_APICALL void GL_APIENTRY glCompressedTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
GL_APICALL void GL_APIENTRY glFramebufferTexture3DOES (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
#endif
#endif /* GL_OES_texture_3D */

#ifndef GL_OES_texture_border_clamp
#define GL_OES_texture_border_clamp 1
#define GL_TEXTURE_BORDER_COLOR_OES       0x1004
#define GL_CLAMP_TO_BORDER_OES            0x812D
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIIVOESPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIUIVOESPROC) (GLenum target, GLenum pname, const GLuint *params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIIVOESPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIUIVOESPROC) (GLenum target, GLenum pname, GLuint *params);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIIVOESPROC) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIUIVOESPROC) (GLuint sampler, GLenum pname, const GLuint *param);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIIVOESPROC) (GLuint sampler, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVOESPROC) (GLuint sampler, GLenum pname, GLuint *params);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTexParameterIivOES (GLenum target, GLenum pname, const GLint *params);
GL_APICALL void GL_APIENTRY glTexParameterIuivOES (GLenum target, GLenum pname, const GLuint *params);
GL_APICALL void GL_APIENTRY glGetTexParameterIivOES (GLenum target, GLenum pname, GLint *params);
GL_APICALL void GL_APIENTRY glGetTexParameterIuivOES (GLenum target, GLenum pname, GLuint *params);
GL_APICALL void GL_APIENTRY glSamplerParameterIivOES (GLuint sampler, GLenum pname, const GLint *param);
GL_APICALL void GL_APIENTRY glSamplerParameterIuivOES (GLuint sampler, GLenum pname, const GLuint *param);
GL_APICALL void GL_APIENTRY glGetSamplerParameterIivOES (GLuint sampler, GLenum pname, GLint *params);
GL_APICALL void GL_APIENTRY glGetSamplerParameterIuivOES (GLuint sampler, GLenum pname, GLuint *params);
#endif
#endif /* GL_OES_texture_border_clamp */

#ifndef GL_OES_texture_buffer
#define GL_OES_texture_buffer 1
#define GL_TEXTURE_BUFFER_OES             0x8C2A
#define GL_TEXTURE_BUFFER_BINDING_OES     0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_OES    0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_OES     0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_OES 0x8C2D
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_OES 0x919F
#define GL_SAMPLER_BUFFER_OES             0x8DC2
#define GL_INT_SAMPLER_BUFFER_OES         0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_OES 0x8DD8
#define GL_IMAGE_BUFFER_OES               0x9051
#define GL_INT_IMAGE_BUFFER_OES           0x905C
#define GL_UNSIGNED_INT_IMAGE_BUFFER_OES  0x9067
#define GL_TEXTURE_BUFFER_OFFSET_OES      0x919D
#define GL_TEXTURE_BUFFER_SIZE_OES        0x919E
typedef void (GL_APIENTRYP PFNGLTEXBUFFEROESPROC) (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GL_APIENTRYP PFNGLTEXBUFFERRANGEOESPROC) (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTexBufferOES (GLenum target, GLenum internalformat, GLuint buffer);
GL_APICALL void GL_APIENTRY glTexBufferRangeOES (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
#endif
#endif /* GL_OES_texture_buffer */

#ifndef GL_OES_texture_compression_astc
#define GL_OES_texture_compression_astc 1
#define GL_COMPRESSED_RGBA_ASTC_3x3x3_OES 0x93C0
#define GL_COMPRESSED_RGBA_ASTC_4x3x3_OES 0x93C1
#define GL_COMPRESSED_RGBA_ASTC_4x4x3_OES 0x93C2
#define GL_COMPRESSED_RGBA_ASTC_4x4x4_OES 0x93C3
#define GL_COMPRESSED_RGBA_ASTC_5x4x4_OES 0x93C4
#define GL_COMPRESSED_RGBA_ASTC_5x5x4_OES 0x93C5
#define GL_COMPRESSED_RGBA_ASTC_5x5x5_OES 0x93C6
#define GL_COMPRESSED_RGBA_ASTC_6x5x5_OES 0x93C7
#define GL_COMPRESSED_RGBA_ASTC_6x6x5_OES 0x93C8
#define GL_COMPRESSED_RGBA_ASTC_6x6x6_OES 0x93C9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES 0x93E0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES 0x93E1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES 0x93E2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES 0x93E3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES 0x93E4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES 0x93E5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES 0x93E6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES 0x93E7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES 0x93E8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES 0x93E9
#endif /* GL_OES_texture_compression_astc */

#ifndef GL_OES_texture_cube_map_array
#define GL_OES_texture_cube_map_array 1
#define GL_TEXTURE_CUBE_MAP_ARRAY_OES     0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_OES 0x900A
#define GL_SAMPLER_CUBE_MAP_ARRAY_OES     0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_OES 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_OES 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_OES 0x900F
#define GL_IMAGE_CUBE_MAP_ARRAY_OES       0x9054
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_OES   0x905F
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_OES 0x906A
#endif /* GL_OES_texture_cube_map_array */

#ifndef GL_OES_texture_float
#define GL_OES_texture_float 1
#endif /* GL_OES_texture_float */

#ifndef GL_OES_texture_float_linear
#define GL_OES_texture_float_linear 1
#endif /* GL_OES_texture_float_linear */

#ifndef GL_OES_texture_half_float
#define GL_OES_texture_half_float 1
#define GL_HALF_FLOAT_OES                 0x8D61
#endif /* GL_OES_texture_half_float */

#ifndef GL_OES_texture_half_float_linear
#define GL_OES_texture_half_float_linear 1
#endif /* GL_OES_texture_half_float_linear */

#ifndef GL_OES_texture_npot
#define GL_OES_texture_npot 1
#endif /* GL_OES_texture_npot */

#ifndef GL_OES_texture_stencil8
#define GL_OES_texture_stencil8 1
#define GL_STENCIL_INDEX_OES              0x1901
#define GL_STENCIL_INDEX8_OES             0x8D48
#endif /* GL_OES_texture_stencil8 */

#ifndef GL_OES_texture_storage_multisample_2d_array
#define GL_OES_texture_storage_multisample_2d_array 1
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES 0x9102
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES 0x9105
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES 0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES 0x910D
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTexStorage3DMultisampleOES (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
#endif
#endif /* GL_OES_texture_storage_multisample_2d_array */

#ifndef GL_OES_texture_view
#define GL_OES_texture_view 1
#define GL_TEXTURE_VIEW_MIN_LEVEL_OES     0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS_OES    0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER_OES     0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS_OES    0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS       0x82DF
typedef void (GL_APIENTRYP PFNGLTEXTUREVIEWOESPROC) (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glTextureViewOES (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
#endif
#endif /* GL_OES_texture_view */

#ifndef GL_OES_vertex_array_object
#define GL_OES_vertex_array_object 1
#define GL_VERTEX_ARRAY_BINDING_OES       0x85B5
typedef void (GL_APIENTRYP PFNGLBINDVERTEXARRAYOESPROC) (GLuint array);
typedef void (GL_APIENTRYP PFNGLDELETEVERTEXARRAYSOESPROC) (GLsizei n, const GLuint *arrays);
typedef void (GL_APIENTRYP PFNGLGENVERTEXARRAYSOESPROC) (GLsizei n, GLuint *arrays);
typedef GLboolean (GL_APIENTRYP PFNGLISVERTEXARRAYOESPROC) (GLuint array);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBindVertexArrayOES (GLuint array);
GL_APICALL void GL_APIENTRY glDeleteVertexArraysOES (GLsizei n, const GLuint *arrays);
GL_APICALL void GL_APIENTRY glGenVertexArraysOES (GLsizei n, GLuint *arrays);
GL_APICALL GLboolean GL_APIENTRY glIsVertexArrayOES (GLuint array);
#endif
#endif /* GL_OES_vertex_array_object */

#ifndef GL_OES_vertex_half_float
#define GL_OES_vertex_half_float 1
#endif /* GL_OES_vertex_half_float */

#ifndef GL_OES_vertex_type_10_10_10_2
#define GL_OES_vertex_type_10_10_10_2 1
#define GL_UNSIGNED_INT_10_10_10_2_OES    0x8DF6
#define GL_INT_10_10_10_2_OES             0x8DF7
#endif /* GL_OES_vertex_type_10_10_10_2 */

#ifndef GL_OES_viewport_array
#define GL_OES_viewport_array 1
#define GL_MAX_VIEWPORTS_OES              0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS_OES     0x825C
#define GL_VIEWPORT_BOUNDS_RANGE_OES      0x825D
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX_OES 0x825F
typedef void (GL_APIENTRYP PFNGLVIEWPORTARRAYVOESPROC) (GLuint first, GLsizei count, const GLfloat *v);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFOESPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFVOESPROC) (GLuint index, const GLfloat *v);
typedef void (GL_APIENTRYP PFNGLSCISSORARRAYVOESPROC) (GLuint first, GLsizei count, const GLint *v);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDOESPROC) (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDVOESPROC) (GLuint index, const GLint *v);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEARRAYFVOESPROC) (GLuint first, GLsizei count, const GLfloat *v);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEINDEXEDFOESPROC) (GLuint index, GLfloat n, GLfloat f);
typedef void (GL_APIENTRYP PFNGLGETFLOATI_VOESPROC) (GLenum target, GLuint index, GLfloat *data);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glViewportArrayvOES (GLuint first, GLsizei count, const GLfloat *v);
GL_APICALL void GL_APIENTRY glViewportIndexedfOES (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
GL_APICALL void GL_APIENTRY glViewportIndexedfvOES (GLuint index, const GLfloat *v);
GL_APICALL void GL_APIENTRY glScissorArrayvOES (GLuint first, GLsizei count, const GLint *v);
GL_APICALL void GL_APIENTRY glScissorIndexedOES (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
GL_APICALL void GL_APIENTRY glScissorIndexedvOES (GLuint index, const GLint *v);
GL_APICALL void GL_APIENTRY glDepthRangeArrayfvOES (GLuint first, GLsizei count, const GLfloat *v);
GL_APICALL void GL_APIENTRY glDepthRangeIndexedfOES (GLuint index, GLfloat n, GLfloat f);
GL_APICALL void GL_APIENTRY glGetFloati_vOES (GLenum target, GLuint index, GLfloat *data);
#endif
#endif /* GL_OES_viewport_array */

#ifndef GL_AMD_compressed_3DC_texture
#define GL_AMD_compressed_3DC_texture 1
#define GL_3DC_X_AMD                      0x87F9
#define GL_3DC_XY_AMD                     0x87FA
#endif /* GL_AMD_compressed_3DC_texture */

#ifndef GL_AMD_compressed_ATC_texture
#define GL_AMD_compressed_ATC_texture 1
#define GL_ATC_RGB_AMD                    0x8C92
#define GL_ATC_RGBA_EXPLICIT_ALPHA_AMD    0x8C93
#define GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD 0x87EE
#endif /* GL_AMD_compressed_ATC_texture */

#ifndef GL_AMD_performance_monitor
#define GL_AMD_performance_monitor 1
#define GL_COUNTER_TYPE_AMD               0x8BC0
#define GL_COUNTER_RANGE_AMD              0x8BC1
#define GL_UNSIGNED_INT64_AMD             0x8BC2
#define GL_PERCENTAGE_AMD                 0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD   0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD        0x8BC5
#define GL_PERFMON_RESULT_AMD             0x8BC6
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORGROUPSAMDPROC) (GLint *numGroups, GLsizei groupsSize, GLuint *groups);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERSAMDPROC) (GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) (GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) (GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) (GLuint group, GLuint counter, GLenum pname, void *data);
typedef void (GL_APIENTRYP PFNGLGENPERFMONITORSAMDPROC) (GLsizei n, GLuint *monitors);
typedef void (GL_APIENTRYP PFNGLDELETEPERFMONITORSAMDPROC) (GLsizei n, GLuint *monitors);
typedef void (GL_APIENTRYP PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
typedef void (GL_APIENTRYP PFNGLBEGINPERFMONITORAMDPROC) (GLuint monitor);
typedef void (GL_APIENTRYP PFNGLENDPERFMONITORAMDPROC) (GLuint monitor);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glGetPerfMonitorGroupsAMD (GLint *numGroups, GLsizei groupsSize, GLuint *groups);
GL_APICALL void GL_APIENTRY glGetPerfMonitorCountersAMD (GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
GL_APICALL void GL_APIENTRY glGetPerfMonitorGroupStringAMD (GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
GL_APICALL void GL_APIENTRY glGetPerfMonitorCounterStringAMD (GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
GL_APICALL void GL_APIENTRY glGetPerfMonitorCounterInfoAMD (GLuint group, GLuint counter, GLenum pname, void *data);
GL_APICALL void GL_APIENTRY glGenPerfMonitorsAMD (GLsizei n, GLuint *monitors);
GL_APICALL void GL_APIENTRY glDeletePerfMonitorsAMD (GLsizei n, GLuint *monitors);
GL_APICALL void GL_APIENTRY glSelectPerfMonitorCountersAMD (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
GL_APICALL void GL_APIENTRY glBeginPerfMonitorAMD (GLuint monitor);
GL_APICALL void GL_APIENTRY glEndPerfMonitorAMD (GLuint monitor);
GL_APICALL void GL_APIENTRY glGetPerfMonitorCounterDataAMD (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
#endif
#endif /* GL_AMD_performance_monitor */

#ifndef GL_AMD_program_binary_Z400
#define GL_AMD_program_binary_Z400 1
#define GL_Z400_BINARY_AMD                0x8740
#endif /* GL_AMD_program_binary_Z400 */

#ifndef GL_ANDROID_extension_pack_es31a
#define GL_ANDROID_extension_pack_es31a 1
#endif /* GL_ANDROID_extension_pack_es31a */

#ifndef GL_ANGLE_depth_texture
#define GL_ANGLE_depth_texture 1
#endif /* GL_ANGLE_depth_texture */

#ifndef GL_ANGLE_framebuffer_blit
#define GL_ANGLE_framebuffer_blit 1
#define GL_READ_FRAMEBUFFER_ANGLE         0x8CA8
#define GL_DRAW_FRAMEBUFFER_ANGLE         0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_ANGLE 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_ANGLE 0x8CAA
typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERANGLEPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBlitFramebufferANGLE (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
#endif
#endif /* GL_ANGLE_framebuffer_blit */

#ifndef GL_ANGLE_framebuffer_multisample
#define GL_ANGLE_framebuffer_multisample 1
#define GL_RENDERBUFFER_SAMPLES_ANGLE     0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE 0x8D56
#define GL_MAX_SAMPLES_ANGLE              0x8D57
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleANGLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
#endif
#endif /* GL_ANGLE_framebuffer_multisample */

#ifndef GL_ANGLE_instanced_arrays
#define GL_ANGLE_instanced_arrays 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE 0x88FE
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDANGLEPROC) (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDANGLEPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISORANGLEPROC) (GLuint index, GLuint divisor);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDrawArraysInstancedANGLE (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
GL_APICALL void GL_APIENTRY glDrawElementsInstancedANGLE (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
GL_APICALL void GL_APIENTRY glVertexAttribDivisorANGLE (GLuint index, GLuint divisor);
#endif
#endif /* GL_ANGLE_instanced_arrays */

#ifndef GL_ANGLE_pack_reverse_row_order
#define GL_ANGLE_pack_reverse_row_order 1
#define GL_PACK_REVERSE_ROW_ORDER_ANGLE   0x93A4
#endif /* GL_ANGLE_pack_reverse_row_order */

#ifndef GL_ANGLE_program_binary
#define GL_ANGLE_program_binary 1
#define GL_PROGRAM_BINARY_ANGLE           0x93A6
#endif /* GL_ANGLE_program_binary */

#ifndef GL_ANGLE_texture_compression_dxt3
#define GL_ANGLE_texture_compression_dxt3 1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE 0x83F2
#endif /* GL_ANGLE_texture_compression_dxt3 */

#ifndef GL_ANGLE_texture_compression_dxt5
#define GL_ANGLE_texture_compression_dxt5 1
#define GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE 0x83F3
#endif /* GL_ANGLE_texture_compression_dxt5 */

#ifndef GL_ANGLE_texture_usage
#define GL_ANGLE_texture_usage 1
#define GL_TEXTURE_USAGE_ANGLE            0x93A2
#define GL_FRAMEBUFFER_ATTACHMENT_ANGLE   0x93A3
#endif /* GL_ANGLE_texture_usage */

#ifndef GL_ANGLE_translated_shader_source
#define GL_ANGLE_translated_shader_source 1
#define GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE 0x93A0
typedef void (GL_APIENTRYP PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC) (GLuint shader, GLsizei bufsize, GLsizei *length, GLchar *source);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glGetTranslatedShaderSourceANGLE (GLuint shader, GLsizei bufsize, GLsizei *length, GLchar *source);
#endif
#endif /* GL_ANGLE_translated_shader_source */

#ifndef GL_APPLE_clip_distance
#define GL_APPLE_clip_distance 1
#define GL_MAX_CLIP_DISTANCES_APPLE       0x0D32
#define GL_CLIP_DISTANCE0_APPLE           0x3000
#define GL_CLIP_DISTANCE1_APPLE           0x3001
#define GL_CLIP_DISTANCE2_APPLE           0x3002
#define GL_CLIP_DISTANCE3_APPLE           0x3003
#define GL_CLIP_DISTANCE4_APPLE           0x3004
#define GL_CLIP_DISTANCE5_APPLE           0x3005
#define GL_CLIP_DISTANCE6_APPLE           0x3006
#define GL_CLIP_DISTANCE7_APPLE           0x3007
#endif /* GL_APPLE_clip_distance */

#ifndef GL_APPLE_color_buffer_packed_float
#define GL_APPLE_color_buffer_packed_float 1
#endif /* GL_APPLE_color_buffer_packed_float */

#ifndef GL_APPLE_copy_texture_levels
#define GL_APPLE_copy_texture_levels 1
typedef void (GL_APIENTRYP PFNGLCOPYTEXTURELEVELSAPPLEPROC) (GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glCopyTextureLevelsAPPLE (GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount);
#endif
#endif /* GL_APPLE_copy_texture_levels */

#ifndef GL_APPLE_framebuffer_multisample
#define GL_APPLE_framebuffer_multisample 1
#define GL_RENDERBUFFER_SAMPLES_APPLE     0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE 0x8D56
#define GL_MAX_SAMPLES_APPLE              0x8D57
#define GL_READ_FRAMEBUFFER_APPLE         0x8CA8
#define GL_DRAW_FRAMEBUFFER_APPLE         0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_APPLE 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_APPLE 0x8CAA
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleAPPLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GL_APICALL void GL_APIENTRY glResolveMultisampleFramebufferAPPLE (void);
#endif
#endif /* GL_APPLE_framebuffer_multisample */

#ifndef GL_APPLE_rgb_422
#define GL_APPLE_rgb_422 1
#define GL_RGB_422_APPLE                  0x8A1F
#define GL_UNSIGNED_SHORT_8_8_APPLE       0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE   0x85BB
#define GL_RGB_RAW_422_APPLE              0x8A51
#endif /* GL_APPLE_rgb_422 */

#ifndef GL_APPLE_sync
#define GL_APPLE_sync 1
#define GL_SYNC_OBJECT_APPLE              0x8A53
#define GL_MAX_SERVER_WAIT_TIMEOUT_APPLE  0x9111
#define GL_OBJECT_TYPE_APPLE              0x9112
#define GL_SYNC_CONDITION_APPLE           0x9113
#define GL_SYNC_STATUS_APPLE              0x9114
#define GL_SYNC_FLAGS_APPLE               0x9115
#define GL_SYNC_FENCE_APPLE               0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE 0x9117
#define GL_UNSIGNALED_APPLE               0x9118
#define GL_SIGNALED_APPLE                 0x9119
#define GL_ALREADY_SIGNALED_APPLE         0x911A
#define GL_TIMEOUT_EXPIRED_APPLE          0x911B
#define GL_CONDITION_SATISFIED_APPLE      0x911C
#define GL_WAIT_FAILED_APPLE              0x911D
#define GL_SYNC_FLUSH_COMMANDS_BIT_APPLE  0x00000001
#define GL_TIMEOUT_IGNORED_APPLE          0xFFFFFFFFFFFFFFFFull
typedef GLsync (GL_APIENTRYP PFNGLFENCESYNCAPPLEPROC) (GLenum condition, GLbitfield flags);
typedef GLboolean (GL_APIENTRYP PFNGLISSYNCAPPLEPROC) (GLsync sync);
typedef void (GL_APIENTRYP PFNGLDELETESYNCAPPLEPROC) (GLsync sync);
typedef GLenum (GL_APIENTRYP PFNGLCLIENTWAITSYNCAPPLEPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GL_APIENTRYP PFNGLWAITSYNCAPPLEPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GL_APIENTRYP PFNGLGETINTEGER64VAPPLEPROC) (GLenum pname, GLint64 *params);
typedef void (GL_APIENTRYP PFNGLGETSYNCIVAPPLEPROC) (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL GLsync GL_APIENTRY glFenceSyncAPPLE (GLenum condition, GLbitfield flags);
GL_APICALL GLboolean GL_APIENTRY glIsSyncAPPLE (GLsync sync);
GL_APICALL void GL_APIENTRY glDeleteSyncAPPLE (GLsync sync);
GL_APICALL GLenum GL_APIENTRY glClientWaitSyncAPPLE (GLsync sync, GLbitfield flags, GLuint64 timeout);
GL_APICALL void GL_APIENTRY glWaitSyncAPPLE (GLsync sync, GLbitfield flags, GLuint64 timeout);
GL_APICALL void GL_APIENTRY glGetInteger64vAPPLE (GLenum pname, GLint64 *params);
GL_APICALL void GL_APIENTRY glGetSyncivAPPLE (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
#endif
#endif /* GL_APPLE_sync */

#ifndef GL_APPLE_texture_format_BGRA8888
#define GL_APPLE_texture_format_BGRA8888 1
#define GL_BGRA_EXT                       0x80E1
#define GL_BGRA8_EXT                      0x93A1
#endif /* GL_APPLE_texture_format_BGRA8888 */

#ifndef GL_APPLE_texture_max_level
#define GL_APPLE_texture_max_level 1
#define GL_TEXTURE_MAX_LEVEL_APPLE        0x813D
#endif /* GL_APPLE_texture_max_level */

#ifndef GL_APPLE_texture_packed_float
#define GL_APPLE_texture_packed_float 1
#define GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE 0x8C3B
#define GL_UNSIGNED_INT_5_9_9_9_REV_APPLE 0x8C3E
#define GL_R11F_G11F_B10F_APPLE           0x8C3A
#define GL_RGB9_E5_APPLE                  0x8C3D
#endif /* GL_APPLE_texture_packed_float */

#ifndef GL_ARM_mali_program_binary
#define GL_ARM_mali_program_binary 1
#define GL_MALI_PROGRAM_BINARY_ARM        0x8F61
#endif /* GL_ARM_mali_program_binary */

#ifndef GL_ARM_mali_shader_binary
#define GL_ARM_mali_shader_binary 1
#define GL_MALI_SHADER_BINARY_ARM         0x8F60
#endif /* GL_ARM_mali_shader_binary */

#ifndef GL_ARM_rgba8
#define GL_ARM_rgba8 1
#endif /* GL_ARM_rgba8 */

#ifndef GL_ARM_shader_framebuffer_fetch
#define GL_ARM_shader_framebuffer_fetch 1
#define GL_FETCH_PER_SAMPLE_ARM           0x8F65
#define GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM 0x8F66
#endif /* GL_ARM_shader_framebuffer_fetch */

#ifndef GL_ARM_shader_framebuffer_fetch_depth_stencil
#define GL_ARM_shader_framebuffer_fetch_depth_stencil 1
#endif /* GL_ARM_shader_framebuffer_fetch_depth_stencil */

#ifndef GL_DMP_program_binary
#define GL_DMP_program_binary 1
#define GL_SMAPHS30_PROGRAM_BINARY_DMP    0x9251
#define GL_SMAPHS_PROGRAM_BINARY_DMP      0x9252
#define GL_DMP_PROGRAM_BINARY_DMP         0x9253
#endif /* GL_DMP_program_binary */

#ifndef GL_DMP_shader_binary
#define GL_DMP_shader_binary 1
#define GL_SHADER_BINARY_DMP              0x9250
#endif /* GL_DMP_shader_binary */

#ifndef GL_EXT_EGL_image_array
#define GL_EXT_EGL_image_array 1
#endif /* GL_EXT_EGL_image_array */

#ifndef GL_EXT_YUV_target
#define GL_EXT_YUV_target 1
#define GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT    0x8BE7
#endif /* GL_EXT_YUV_target */

#ifndef GL_EXT_base_instance
#define GL_EXT_base_instance 1
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDrawArraysInstancedBaseInstanceEXT (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
GL_APICALL void GL_APIENTRY glDrawElementsInstancedBaseInstanceEXT (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
GL_APICALL void GL_APIENTRY glDrawElementsInstancedBaseVertexBaseInstanceEXT (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
#endif
#endif /* GL_EXT_base_instance */

#ifndef GL_EXT_blend_func_extended
#define GL_EXT_blend_func_extended 1
#define GL_SRC1_COLOR_EXT                 0x88F9
#define GL_SRC1_ALPHA_EXT                 0x8589
#define GL_ONE_MINUS_SRC1_COLOR_EXT       0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA_EXT       0x88FB
#define GL_SRC_ALPHA_SATURATE_EXT         0x0308
#define GL_LOCATION_INDEX_EXT             0x930F
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT 0x88FC
typedef void (GL_APIENTRYP PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC) (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
typedef void (GL_APIENTRYP PFNGLBINDFRAGDATALOCATIONEXTPROC) (GLuint program, GLuint color, const GLchar *name);
typedef GLint (GL_APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC) (GLuint program, GLenum programInterface, const GLchar *name);
typedef GLint (GL_APIENTRYP PFNGLGETFRAGDATAINDEXEXTPROC) (GLuint program, const GLchar *name);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBindFragDataLocationIndexedEXT (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
GL_APICALL void GL_APIENTRY glBindFragDataLocationEXT (GLuint program, GLuint color, const GLchar *name);
GL_APICALL GLint GL_APIENTRY glGetProgramResourceLocationIndexEXT (GLuint program, GLenum programInterface, const GLchar *name);
GL_APICALL GLint GL_APIENTRY glGetFragDataIndexEXT (GLuint program, const GLchar *name);
#endif
#endif /* GL_EXT_blend_func_extended */

#ifndef GL_EXT_blend_minmax
#define GL_EXT_blend_minmax 1
#define GL_MIN_EXT                        0x8007
#define GL_MAX_EXT                        0x8008
#endif /* GL_EXT_blend_minmax */

#ifndef GL_EXT_buffer_storage
#define GL_EXT_buffer_storage 1
#define GL_MAP_READ_BIT                   0x0001
#define GL_MAP_WRITE_BIT                  0x0002
#define GL_MAP_PERSISTENT_BIT_EXT         0x0040
#define GL_MAP_COHERENT_BIT_EXT           0x0080
#define GL_DYNAMIC_STORAGE_BIT_EXT        0x0100
#define GL_CLIENT_STORAGE_BIT_EXT         0x0200
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT 0x00004000
#define GL_BUFFER_IMMUTABLE_STORAGE_EXT   0x821F
#define GL_BUFFER_STORAGE_FLAGS_EXT       0x8220
typedef void (GL_APIENTRYP PFNGLBUFFERSTORAGEEXTPROC) (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBufferStorageEXT (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
#endif
#endif /* GL_EXT_buffer_storage */

#ifndef GL_EXT_clear_texture
#define GL_EXT_clear_texture 1
typedef void (GL_APIENTRYP PFNGLCLEARTEXIMAGEEXTPROC) (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
typedef void (GL_APIENTRYP PFNGLCLEARTEXSUBIMAGEEXTPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glClearTexImageEXT (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
GL_APICALL void GL_APIENTRY glClearTexSubImageEXT (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
#endif
#endif /* GL_EXT_clear_texture */

#ifndef GL_EXT_clip_cull_distance
#define GL_EXT_clip_cull_distance 1
#define GL_MAX_CLIP_DISTANCES_EXT         0x0D32
#define GL_MAX_CULL_DISTANCES_EXT         0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES_EXT 0x82FA
#define GL_CLIP_DISTANCE0_EXT             0x3000
#define GL_CLIP_DISTANCE1_EXT             0x3001
#define GL_CLIP_DISTANCE2_EXT             0x3002
#define GL_CLIP_DISTANCE3_EXT             0x3003
#define GL_CLIP_DISTANCE4_EXT             0x3004
#define GL_CLIP_DISTANCE5_EXT             0x3005
#define GL_CLIP_DISTANCE6_EXT             0x3006
#define GL_CLIP_DISTANCE7_EXT             0x3007
#endif /* GL_EXT_clip_cull_distance */

#ifndef GL_EXT_color_buffer_float
#define GL_EXT_color_buffer_float 1
#endif /* GL_EXT_color_buffer_float */

#ifndef GL_EXT_color_buffer_half_float
#define GL_EXT_color_buffer_half_float 1
#define GL_RGBA16F_EXT                    0x881A
#define GL_RGB16F_EXT                     0x881B
#define GL_RG16F_EXT                      0x822F
#define GL_R16F_EXT                       0x822D
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT 0x8211
#define GL_UNSIGNED_NORMALIZED_EXT        0x8C17
#endif /* GL_EXT_color_buffer_half_float */

#ifndef GL_EXT_conservative_depth
#define GL_EXT_conservative_depth 1
#endif /* GL_EXT_conservative_depth */

#ifndef GL_EXT_copy_image
#define GL_EXT_copy_image 1
typedef void (GL_APIENTRYP PFNGLCOPYIMAGESUBDATAEXTPROC) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glCopyImageSubDataEXT (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
#endif
#endif /* GL_EXT_copy_image */

#ifndef GL_EXT_debug_label
#define GL_EXT_debug_label 1
#define GL_PROGRAM_PIPELINE_OBJECT_EXT    0x8A4F
#define GL_PROGRAM_OBJECT_EXT             0x8B40
#define GL_SHADER_OBJECT_EXT              0x8B48
#define GL_BUFFER_OBJECT_EXT              0x9151
#define GL_QUERY_OBJECT_EXT               0x9153
#define GL_VERTEX_ARRAY_OBJECT_EXT        0x9154
#define GL_TRANSFORM_FEEDBACK             0x8E22
typedef void (GL_APIENTRYP PFNGLLABELOBJECTEXTPROC) (GLenum type, GLuint object, GLsizei length, const GLchar *label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTLABELEXTPROC) (GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glLabelObjectEXT (GLenum type, GLuint object, GLsizei length, const GLchar *label);
GL_APICALL void GL_APIENTRY glGetObjectLabelEXT (GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
#endif
#endif /* GL_EXT_debug_label */

#ifndef GL_EXT_debug_marker
#define GL_EXT_debug_marker 1
typedef void (GL_APIENTRYP PFNGLINSERTEVENTMARKEREXTPROC) (GLsizei length, const GLchar *marker);
typedef void (GL_APIENTRYP PFNGLPUSHGROUPMARKEREXTPROC) (GLsizei length, const GLchar *marker);
typedef void (GL_APIENTRYP PFNGLPOPGROUPMARKEREXTPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glInsertEventMarkerEXT (GLsizei length, const GLchar *marker);
GL_APICALL void GL_APIENTRY glPushGroupMarkerEXT (GLsizei length, const GLchar *marker);
GL_APICALL void GL_APIENTRY glPopGroupMarkerEXT (void);
#endif
#endif /* GL_EXT_debug_marker */

#ifndef GL_EXT_discard_framebuffer
#define GL_EXT_discard_framebuffer 1
#define GL_COLOR_EXT                      0x1800
#define GL_DEPTH_EXT                      0x1801
#define GL_STENCIL_EXT                    0x1802
typedef void (GL_APIENTRYP PFNGLDISCARDFRAMEBUFFEREXTPROC) (GLenum target, GLsizei numAttachments, const GLenum *attachments);
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glDiscardFramebufferEXT (GLenum target, GLsizei numAttachments, const GLenum *attachments);
#endif
#endif /* GL_EXT_discard_framebuffer */

#ifndef GL_EXT_disjoint_timer_query
#define GL_EXT_disjoint_timer_query 1
#define GL_QUERY_COUNTER_BITS_EXT         0x8864
#define GL_CURRENT_QUERY_EXT              0x8865
#define GL_QUERY_RESULT_EXT               0x8866
#define GL_QUERY_RESULT_AVAILABLE_EXT     0x8867
#define GL_TIME_ELAPSED_EXT               0x88BF
#define GL_TIMESTAMP_EXT                  0x8