#include <GLXW/glxw_es2.h>

#include <EGL/egl.h>

static void* open_libgl() { return (void*)1; }
static void close_libgl(void *libgl) { (void)libgl; }
static void *get_proc(void *libgl, const char *proc)
{
    (void)libgl;
    return eglGetProcAddress(proc);
}

static void load_procs(void *libgl, struct glxw_es2 *ctx);
struct glxw_es2 *glxw_es2 = 0;

int glxwInitCtx(struct glxw_es2 *ctx)
{
    void *libgl;
    if((libgl = open_libgl()))
    {
        load_procs(libgl, ctx);
        close_libgl(libgl);
        return 0;
    }
    return -1;
}

int glxwInit(void)
{
    static struct glxw_es2 ctx;
    if(glxw_es2 || glxwInitCtx(&ctx) == 0)
    {
        glxw_es2 = &ctx;
        return 0;
    }

    return -1;
}

static void load_procs(void *libgl, struct glxw_es2 *ctx)
{
ctx->_glBlendBarrierKHR = (PFNGLBLENDBARRIERKHRPROC)get_proc(libgl, "glBlendBarrierKHR");
ctx->_glDebugMessageControlKHR = (PFNGLDEBUGMESSAGECONTROLKHRPROC)get_proc(libgl, "glDebugMessageControlKHR");
ctx->_glDebugMessageInsertKHR = (PFNGLDEBUGMESSAGEINSERTKHRPROC)get_proc(libgl, "glDebugMessageInsertKHR");
ctx->_glDebugMessageCallbackKHR = (PFNGLDEBUGMESSAGECALLBACKKHRPROC)get_proc(libgl, "glDebugMessageCallbackKHR");
ctx->_glGetDebugMessageLogKHR = (PFNGLGETDEBUGMESSAGELOGKHRPROC)get_proc(libgl, "glGetDebugMessageLogKHR");
ctx->_glPushDebugGroupKHR = (PFNGLPUSHDEBUGGROUPKHRPROC)get_proc(libgl, "glPushDebugGroupKHR");
ctx->_glPopDebugGroupKHR = (PFNGLPOPDEBUGGROUPKHRPROC)get_proc(libgl, "glPopDebugGroupKHR");
ctx->_glObjectLabelKHR = (PFNGLOBJECTLABELKHRPROC)get_proc(libgl, "glObjectLabelKHR");
ctx->_glGetObjectLabelKHR = (PFNGLGETOBJECTLABELKHRPROC)get_proc(libgl, "glGetObjectLabelKHR");
ctx->_glObjectPtrLabelKHR = (PFNGLOBJECTPTRLABELKHRPROC)get_proc(libgl, "glObjectPtrLabelKHR");
ctx->_glGetObjectPtrLabelKHR = (PFNGLGETOBJECTPTRLABELKHRPROC)get_proc(libgl, "glGetObjectPtrLabelKHR");
ctx->_glGetPointervKHR = (PFNGLGETPOINTERVKHRPROC)get_proc(libgl, "glGetPointervKHR");
ctx->_glGetGraphicsResetStatusKHR = (PFNGLGETGRAPHICSRESETSTATUSKHRPROC)get_proc(libgl, "glGetGraphicsResetStatusKHR");
ctx->_glReadnPixelsKHR = (PFNGLREADNPIXELSKHRPROC)get_proc(libgl, "glReadnPixelsKHR");
ctx->_glGetnUniformfvKHR = (PFNGLGETNUNIFORMFVKHRPROC)get_proc(libgl, "glGetnUniformfvKHR");
ctx->_glGetnUniformivKHR = (PFNGLGETNUNIFORMIVKHRPROC)get_proc(libgl, "glGetnUniformivKHR");
ctx->_glGetnUniformuivKHR = (PFNGLGETNUNIFORMUIVKHRPROC)get_proc(libgl, "glGetnUniformuivKHR");
ctx->_glEGLImageTargetTexture2DOES = (PFNGLEGLIMAGETARGETTEXTURE2DOESPROC)get_proc(libgl, "glEGLImageTargetTexture2DOES");
ctx->_glEGLImageTargetRenderbufferStorageOES = (PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC)get_proc(libgl, "glEGLImageTargetRenderbufferStorageOES");
ctx->_glCopyImageSubDataOES = (PFNGLCOPYIMAGESUBDATAOESPROC)get_proc(libgl, "glCopyImageSubDataOES");
ctx->_glEnableiOES = (PFNGLENABLEIOESPROC)get_proc(libgl, "glEnableiOES");
ctx->_glDisableiOES = (PFNGLDISABLEIOESPROC)get_proc(libgl, "glDisableiOES");
ctx->_glBlendEquationiOES = (PFNGLBLENDEQUATIONIOESPROC)get_proc(libgl, "glBlendEquationiOES");
ctx->_glBlendEquationSeparateiOES = (PFNGLBLENDEQUATIONSEPARATEIOESPROC)get_proc(libgl, "glBlendEquationSeparateiOES");
ctx->_glBlendFunciOES = (PFNGLBLENDFUNCIOESPROC)get_proc(libgl, "glBlendFunciOES");
ctx->_glBlendFuncSeparateiOES = (PFNGLBLENDFUNCSEPARATEIOESPROC)get_proc(libgl, "glBlendFuncSeparateiOES");
ctx->_glColorMaskiOES = (PFNGLCOLORMASKIOESPROC)get_proc(libgl, "glColorMaskiOES");
ctx->_glIsEnablediOES = (PFNGLISENABLEDIOESPROC)get_proc(libgl, "glIsEnablediOES");
ctx->_glDrawElementsBaseVertexOES = (PFNGLDRAWELEMENTSBASEVERTEXOESPROC)get_proc(libgl, "glDrawElementsBaseVertexOES");
ctx->_glDrawRangeElementsBaseVertexOES = (PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC)get_proc(libgl, "glDrawRangeElementsBaseVertexOES");
ctx->_glDrawElementsInstancedBaseVertexOES = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC)get_proc(libgl, "glDrawElementsInstancedBaseVertexOES");
ctx->_glMultiDrawElementsBaseVertexOES = (PFNGLMULTIDRAWELEMENTSBASEVERTEXOESPROC)get_proc(libgl, "glMultiDrawElementsBaseVertexOES");
ctx->_glFramebufferTextureOES = (PFNGLFRAMEBUFFERTEXTUREOESPROC)get_proc(libgl, "glFramebufferTextureOES");
ctx->_glGetProgramBinaryOES = (PFNGLGETPROGRAMBINARYOESPROC)get_proc(libgl, "glGetProgramBinaryOES");
ctx->_glProgramBinaryOES = (PFNGLPROGRAMBINARYOESPROC)get_proc(libgl, "glProgramBinaryOES");
ctx->_glMapBufferOES = (PFNGLMAPBUFFEROESPROC)get_proc(libgl, "glMapBufferOES");
ctx->_glUnmapBufferOES = (PFNGLUNMAPBUFFEROESPROC)get_proc(libgl, "glUnmapBufferOES");
ctx->_glGetBufferPointervOES = (PFNGLGETBUFFERPOINTERVOESPROC)get_proc(libgl, "glGetBufferPointervOES");
ctx->_glPrimitiveBoundingBoxOES = (PFNGLPRIMITIVEBOUNDINGBOXOESPROC)get_proc(libgl, "glPrimitiveBoundingBoxOES");
ctx->_glMinSampleShadingOES = (PFNGLMINSAMPLESHADINGOESPROC)get_proc(libgl, "glMinSampleShadingOES");
ctx->_glPatchParameteriOES = (PFNGLPATCHPARAMETERIOESPROC)get_proc(libgl, "glPatchParameteriOES");
ctx->_glTexImage3DOES = (PFNGLTEXIMAGE3DOESPROC)get_proc(libgl, "glTexImage3DOES");
ctx->_glTexSubImage3DOES = (PFNGLTEXSUBIMAGE3DOESPROC)get_proc(libgl, "glTexSubImage3DOES");
ctx->_glCopyTexSubImage3DOES = (PFNGLCOPYTEXSUBIMAGE3DOESPROC)get_proc(libgl, "glCopyTexSubImage3DOES");
ctx->_glCompressedTexImage3DOES = (PFNGLCOMPRESSEDTEXIMAGE3DOESPROC)get_proc(libgl, "glCompressedTexImage3DOES");
ctx->_glCompressedTexSubImage3DOES = (PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC)get_proc(libgl, "glCompressedTexSubImage3DOES");
ctx->_glFramebufferTexture3DOES = (PFNGLFRAMEBUFFERTEXTURE3DOESPROC)get_proc(libgl, "glFramebufferTexture3DOES");
ctx->_glTexParameterIivOES = (PFNGLTEXPARAMETERIIVOESPROC)get_proc(libgl, "glTexParameterIivOES");
ctx->_glTexParameterIuivOES = (PFNGLTEXPARAMETERIUIVOESPROC)get_proc(libgl, "glTexParameterIuivOES");
ctx->_glGetTexParameterIivOES = (PFNGLGETTEXPARAMETERIIVOESPROC)get_proc(libgl, "glGetTexParameterIivOES");
ctx->_glGetTexParameterIuivOES = (PFNGLGETTEXPARAMETERIUIVOESPROC)get_proc(libgl, "glGetTexParameterIuivOES");
ctx->_glSamplerParameterIivOES = (PFNGLSAMPLERPARAMETERIIVOESPROC)get_proc(libgl, "glSamplerParameterIivOES");
ctx->_glSamplerParameterIuivOES = (PFNGLSAMPLERPARAMETERIUIVOESPROC)get_proc(libgl, "glSamplerParameterIuivOES");
ctx->_glGetSamplerParameterIivOES = (PFNGLGETSAMPLERPARAMETERIIVOESPROC)get_proc(libgl, "glGetSamplerParameterIivOES");
ctx->_glGetSamplerParameterIuivOES = (PFNGLGETSAMPLERPARAMETERIUIVOESPROC)get_proc(libgl, "glGetSamplerParameterIuivOES");
ctx->_glTexBufferOES = (PFNGLTEXBUFFEROESPROC)get_proc(libgl, "glTexBufferOES");
ctx->_glTexBufferRangeOES = (PFNGLTEXBUFFERRANGEOESPROC)get_proc(libgl, "glTexBufferRangeOES");
ctx->_glTexStorage3DMultisampleOES = (PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC)get_proc(libgl, "glTexStorage3DMultisampleOES");
ctx->_glTextureViewOES = (PFNGLTEXTUREVIEWOESPROC)get_proc(libgl, "glTextureViewOES");
ctx->_glBindVertexArrayOES = (PFNGLBINDVERTEXARRAYOESPROC)get_proc(libgl, "glBindVertexArrayOES");
ctx->_glDeleteVertexArraysOES = (PFNGLDELETEVERTEXARRAYSOESPROC)get_proc(libgl, "glDeleteVertexArraysOES");
ctx->_glGenVertexArraysOES = (PFNGLGENVERTEXARRAYSOESPROC)get_proc(libgl, "glGenVertexArraysOES");
ctx->_glIsVertexArrayOES = (PFNGLISVERTEXARRAYOESPROC)get_proc(libgl, "glIsVertexArrayOES");
ctx->_glViewportArrayvOES = (PFNGLVIEWPORTARRAYVOESPROC)get_proc(libgl, "glViewportArrayvOES");
ctx->_glViewportIndexedfOES = (PFNGLVIEWPORTINDEXEDFOESPROC)get_proc(libgl, "glViewportIndexedfOES");
ctx->_glViewportIndexedfvOES = (PFNGLVIEWPORTINDEXEDFVOESPROC)get_proc(libgl, "glViewportIndexedfvOES");
ctx->_glScissorArrayvOES = (PFNGLSCISSORARRAYVOESPROC)get_proc(libgl, "glScissorArrayvOES");
ctx->_glScissorIndexedOES = (PFNGLSCISSORINDEXEDOESPROC)get_proc(libgl, "glScissorIndexedOES");
ctx->_glScissorIndexedvOES = (PFNGLSCISSORINDEXEDVOESPROC)get_proc(libgl, "glScissorIndexedvOES");
ctx->_glDepthRangeArrayfvOES = (PFNGLDEPTHRANGEARRAYFVOESPROC)get_proc(libgl, "glDepthRangeArrayfvOES");
ctx->_glDepthRangeIndexedfOES = (PFNGLDEPTHRANGEINDEXEDFOESPROC)get_proc(libgl, "glDepthRangeIndexedfOES");
ctx->_glGetFloati_vOES = (PFNGLGETFLOATI_VOESPROC)get_proc(libgl, "glGetFloati_vOES");
ctx->_glGetPerfMonitorGroupsAMD = (PFNGLGETPERFMONITORGROUPSAMDPROC)get_proc(libgl, "glGetPerfMonitorGroupsAMD");
ctx->_glGetPerfMonitorCountersAMD = (PFNGLGETPERFMONITORCOUNTERSAMDPROC)get_proc(libgl, "glGetPerfMonitorCountersAMD");
ctx->_glGetPerfMonitorGroupStringAMD = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)get_proc(libgl, "glGetPerfMonitorGroupStringAMD");
ctx->_glGetPerfMonitorCounterStringAMD = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)get_proc(libgl, "glGetPerfMonitorCounterStringAMD");
ctx->_glGetPerfMonitorCounterInfoAMD = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)get_proc(libgl, "glGetPerfMonitorCounterInfoAMD");
ctx->_glGenPerfMonitorsAMD = (PFNGLGENPERFMONITORSAMDPROC)get_proc(libgl, "glGenPerfMonitorsAMD");
ctx->_glDeletePerfMonitorsAMD = (PFNGLDELETEPERFMONITORSAMDPROC)get_proc(libgl, "glDeletePerfMonitorsAMD");
ctx->_glSelectPerfMonitorCountersAMD = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)get_proc(libgl, "glSelectPerfMonitorCountersAMD");
ctx->_glBeginPerfMonitorAMD = (PFNGLBEGINPERFMONITORAMDPROC)get_proc(libgl, "glBeginPerfMonitorAMD");
ctx->_glEndPerfMonitorAMD = (PFNGLENDPERFMONITORAMDPROC)get_proc(libgl, "glEndPerfMonitorAMD");
ctx->_glGetPerfMonitorCounterDataAMD = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)get_proc(libgl, "glGetPerfMonitorCounterDataAMD");
ctx->_glBlitFramebufferANGLE = (PFNGLBLITFRAMEBUFFERANGLEPROC)get_proc(libgl, "glBlitFramebufferANGLE");
ctx->_glRenderbufferStorageMultisampleANGLE = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC)get_proc(libgl, "glRenderbufferStorageMultisampleANGLE");
ctx->_glDrawArraysInstancedANGLE = (PFNGLDRAWARRAYSINSTANCEDANGLEPROC)get_proc(libgl, "glDrawArraysInstancedANGLE");
ctx->_glDrawElementsInstancedANGLE = (PFNGLDRAWELEMENTSINSTANCEDANGLEPROC)get_proc(libgl, "glDrawElementsInstancedANGLE");
ctx->_glVertexAttribDivisorANGLE = (PFNGLVERTEXATTRIBDIVISORANGLEPROC)get_proc(libgl, "glVertexAttribDivisorANGLE");
ctx->_glGetTranslatedShaderSourceANGLE = (PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC)get_proc(libgl, "glGetTranslatedShaderSourceANGLE");
ctx->_glCopyTextureLevelsAPPLE = (PFNGLCOPYTEXTURELEVELSAPPLEPROC)get_proc(libgl, "glCopyTextureLevelsAPPLE");
ctx->_glRenderbufferStorageMultisampleAPPLE = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC)get_proc(libgl, "glRenderbufferStorageMultisampleAPPLE");
ctx->_glResolveMultisampleFramebufferAPPLE = (PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC)get_proc(libgl, "glResolveMultisampleFramebufferAPPLE");
ctx->_glFenceSyncAPPLE = (PFNGLFENCESYNCAPPLEPROC)get_proc(libgl, "glFenceSyncAPPLE");
ctx->_glIsSyncAPPLE = (PFNGLISSYNCAPPLEPROC)get_proc(libgl, "glIsSyncAPPLE");
ctx->_glDeleteSyncAPPLE = (PFNGLDELETESYNCAPPLEPROC)get_proc(libgl, "glDeleteSyncAPPLE");
ctx->_glClientWaitSyncAPPLE = (PFNGLCLIENTWAITSYNCAPPLEPROC)get_proc(libgl, "glClientWaitSyncAPPLE");
ctx->_glWaitSyncAPPLE = (PFNGLWAITSYNCAPPLEPROC)get_proc(libgl, "glWaitSyncAPPLE");
ctx->_glGetInteger64vAPPLE = (PFNGLGETINTEGER64VAPPLEPROC)get_proc(libgl, "glGetInteger64vAPPLE");
ctx->_glGetSyncivAPPLE = (PFNGLGETSYNCIVAPPLEPROC)get_proc(libgl, "glGetSyncivAPPLE");
ctx->_glDrawArraysInstancedBaseInstanceEXT = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC)get_proc(libgl, "glDrawArraysInstancedBaseInstanceEXT");
ctx->_glDrawElementsInstancedBaseInstanceEXT = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC)get_proc(libgl, "glDrawElementsInstancedBaseInstanceEXT");
ctx->_glDrawElementsInstancedBaseVertexBaseInstanceEXT = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC)get_proc(libgl, "glDrawElementsInstancedBaseVertexBaseInstanceEXT");
ctx->_glBindFragDataLocationIndexedEXT = (PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC)get_proc(libgl, "glBindFragDataLocationIndexedEXT");
ctx->_glBindFragDataLocationEXT = (PFNGLBINDFRAGDATALOCATIONEXTPROC)get_proc(libgl, "glBindFragDataLocationEXT");
ctx->_glGetProgramResourceLocationIndexEXT = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC)get_proc(libgl, "glGetProgramResourceLocationIndexEXT");
ctx->_glGetFragDataIndexEXT = (PFNGLGETFRAGDATAINDEXEXTPROC)get_proc(libgl, "glGetFragDataIndexEXT");
ctx->_glBufferStorageEXT = (PFNGLBUFFERSTORAGEEXTPROC)get_proc(libgl, "glBufferStorageEXT");
ctx->_glClearTexImageEXT = (PFNGLCLEARTEXIMAGEEXTPROC)get_proc(libgl, "glClearTexImageEXT");
ctx->_glClearTexSubImageEXT = (PFNGLCLEARTEXSUBIMAGEEXTPROC)get_proc(libgl, "glClearTexSubImageEXT");
ctx->_glCopyImageSubDataEXT = (PFNGLCOPYIMAGESUBDATAEXTPROC)get_proc(libgl, "glCopyImageSubDataEXT");
ctx->_glLabelObjectEXT = (PFNGLLABELOBJECTEXTPROC)get_proc(libgl, "glLabelObjectEXT");
ctx->_glGetObjectLabelEXT = (PFNGLGETOBJECTLABELEXTPROC)get_proc(libgl, "glGetObjectLabelEXT");
ctx->_glInsertEventMarkerEXT = (PFNGLINSERTEVENTMARKEREXTPROC)get_proc(libgl, "glInsertEventMarkerEXT");
ctx->_glPushGroupMarkerEXT = (PFNGLPUSHGROUPMARKEREXTPROC)get_proc(libgl, "glPushGroupMarkerEXT");
ctx->_glPopGroupMarkerEXT = (PFNGLPOPGROUPMARKEREXTPROC)get_proc(libgl, "glPopGroupMarkerEXT");
ctx->_glDiscardFramebufferEXT = (PFNGLDISCARDFRAMEBUFFEREXTPROC)get_proc(libgl, "glDiscardFramebufferEXT");
}
