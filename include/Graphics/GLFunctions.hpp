//include guard begin
#ifndef INCLUDE_GRAPHICS_GLFUNCTIONS_HPP_
#define INCLUDE_GRAPHICS_GLFUNCTIONS_HPP_

#include "Tools/Types.hpp"

//function typedefs for OpenGL
typedef void (GLAPIENTRY *Engine_GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (GLAPIENTRY *Engine_GLDEBUGPROCARB)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (GLAPIENTRY *Engine_GLDEBUGPROCKHR)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (GLAPIENTRY *Engine_GLDEBUGPROCAMD)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
typedef void (GLAPIENTRY *Engine_GLVULKANPROCNV)(void);

#ifdef GL_VERSION_1_0
typedef void (GLAPIENTRY *Engine_glCullFace) (GLenum mode);
typedef void (GLAPIENTRY *Engine_glFrontFace) (GLenum mode);
typedef void (GLAPIENTRY *Engine_glHint) (GLenum target, GLenum mode);
typedef void (GLAPIENTRY *Engine_glLineWidth) (GLfloat width);
typedef void (GLAPIENTRY *Engine_glPointSize) (GLfloat size);
typedef void (GLAPIENTRY *Engine_glPolygonMode) (GLenum face, GLenum mode);
typedef void (GLAPIENTRY *Engine_glScissor) (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glTexParameterf) (GLenum target, GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *Engine_glTexParameterfv) (GLenum target, GLenum pname, const GLfloat *params);
typedef void (GLAPIENTRY *Engine_glTexParameteri) (GLenum target, GLenum pname, GLint param);
typedef void (GLAPIENTRY *Engine_glTexParameteriv) (GLenum target, GLenum pname, const GLint *params);
typedef void (GLAPIENTRY *Engine_glTexImage1D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (GLAPIENTRY *Engine_glTexImage2D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (GLAPIENTRY *Engine_glDrawBuffer) (GLenum buf);
typedef void (GLAPIENTRY *Engine_glClear) (GLbitfield mask);
typedef void (GLAPIENTRY *Engine_glClearColor) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GLAPIENTRY *Engine_glClearStencil) (GLint s);
typedef void (GLAPIENTRY *Engine_glClearDepth) (GLdouble depth);
typedef void (GLAPIENTRY *Engine_glStencilMask) (GLuint mask);
typedef void (GLAPIENTRY *Engine_glColorMask) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (GLAPIENTRY *Engine_glDepthMask) (GLboolean flag);
typedef void (GLAPIENTRY *Engine_glDisable) (GLenum cap);
typedef void (GLAPIENTRY *Engine_glEnable) (GLenum cap);
typedef void (GLAPIENTRY *Engine_glFinish) (void);
typedef void (GLAPIENTRY *Engine_glFlush) (void);
typedef void (GLAPIENTRY *Engine_glBlendFunc) (GLenum sfactor, GLenum dfactor);
typedef void (GLAPIENTRY *Engine_glLogicOp) (GLenum opcode);
typedef void (GLAPIENTRY *Engine_glStencilFunc) (GLenum func, GLint ref, GLuint mask);
typedef void (GLAPIENTRY *Engine_glStencilOp) (GLenum fail, GLenum zfail, GLenum zpass);
typedef void (GLAPIENTRY *Engine_glDepthFunc) (GLenum func);
typedef void (GLAPIENTRY *Engine_glPixelStoref) (GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *Engine_glPixelStorei) (GLenum pname, GLint param);
typedef void (GLAPIENTRY *Engine_glReadBuffer) (GLenum src);
typedef void (GLAPIENTRY *Engine_glReadPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
typedef void (GLAPIENTRY *Engine_glGetBooleanv) (GLenum pname, GLboolean *data);
typedef void (GLAPIENTRY *Engine_glGetDoublev) (GLenum pname, GLdouble *data);
typedef GLenum (GLAPIENTRY *Engine_glGetError) (void);
typedef void (GLAPIENTRY *Engine_glGetFloatv) (GLenum pname, GLfloat *data);
typedef void (GLAPIENTRY *Engine_glGetIntegerv) (GLenum pname, GLint *data);
typedef const GLubyte * (GLAPIENTRY *Engine_glGetString) (GLenum name);
typedef void (GLAPIENTRY *Engine_glGetTexImage) (GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
typedef void (GLAPIENTRY *Engine_glGetTexParameterfv) (GLenum target, GLenum pname, GLfloat *params);
typedef void (GLAPIENTRY *Engine_glGetTexParameteriv) (GLenum target, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetTexLevelParameterfv) (GLenum target, GLint level, GLenum pname, GLfloat *params);
typedef void (GLAPIENTRY *Engine_glGetTexLevelParameteriv) (GLenum target, GLint level, GLenum pname, GLint *params);
typedef GLboolean (GLAPIENTRY *Engine_glIsEnabled) (GLenum cap);
typedef void (GLAPIENTRY *Engine_glDepthRange) (GLdouble near, GLdouble far);
typedef void (GLAPIENTRY *Engine_glViewport) (GLint x, GLint y, GLsizei width, GLsizei height);
#endif
#ifdef GL_VERSION_1_1
typedef void (GLAPIENTRY *Engine_glDrawArrays) (GLenum mode, GLint first, GLsizei count);
typedef void (GLAPIENTRY *Engine_glDrawElements) (GLenum mode, GLsizei count, GLenum type, const void *indices);
typedef void (GLAPIENTRY *Engine_glPolygonOffset) (GLfloat factor, GLfloat units);
typedef void (GLAPIENTRY *Engine_glCopyTexImage1D) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (GLAPIENTRY *Engine_glCopyTexImage2D) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (GLAPIENTRY *Engine_glCopyTexSubImage1D) (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (GLAPIENTRY *Engine_glCopyTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glTexSubImage1D) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
typedef void (GLAPIENTRY *Engine_glTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (GLAPIENTRY *Engine_glBindTexture) (GLenum target, GLuint texture);
typedef void (GLAPIENTRY *Engine_glDeleteTextures) (GLsizei n, const GLuint *textures);
typedef void (GLAPIENTRY *Engine_glGenTextures) (GLsizei n, GLuint *textures);
typedef GLboolean (GLAPIENTRY *Engine_glIsTexture) (GLuint texture);
#endif
#ifdef GL_VERSION_1_2
typedef void (GLAPIENTRY *Engine_glDrawRangeElements) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
typedef void (GLAPIENTRY *Engine_glTexImage3D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (GLAPIENTRY *Engine_glTexSubImage3D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (GLAPIENTRY *Engine_glCopyTexSubImage3D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
#endif
#ifdef GL_VERSION_1_3
typedef void (GLAPIENTRY *Engine_glActiveTexture) (GLenum texture);
typedef void (GLAPIENTRY *Engine_glSampleCoverage) (GLfloat value, GLboolean invert);
typedef void (GLAPIENTRY *Engine_glCompressedTexImage3D) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
typedef void (GLAPIENTRY *Engine_glCompressedTexImage2D) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
typedef void (GLAPIENTRY *Engine_glCompressedTexImage1D) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
typedef void (GLAPIENTRY *Engine_glCompressedTexSubImage3D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (GLAPIENTRY *Engine_glCompressedTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (GLAPIENTRY *Engine_glCompressedTexSubImage1D) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
typedef void (GLAPIENTRY *Engine_glGetCompressedTexImage) (GLenum target, GLint level, void *img);
#endif
#ifdef GL_VERSION_1_4
typedef void (GLAPIENTRY *Engine_glBlendFuncSeparate) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (GLAPIENTRY *Engine_glMultiDrawArrays) (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
typedef void (GLAPIENTRY *Engine_glMultiDrawElements) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
typedef void (GLAPIENTRY *Engine_glPointParameterf) (GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *Engine_glPointParameterfv) (GLenum pname, const GLfloat *params);
typedef void (GLAPIENTRY *Engine_glPointParameteri) (GLenum pname, GLint param);
typedef void (GLAPIENTRY *Engine_glPointParameteriv) (GLenum pname, const GLint *params);
typedef void (GLAPIENTRY *Engine_glBlendColor) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GLAPIENTRY *Engine_glBlendEquation) (GLenum mode);
#endif
#ifdef GL_VERSION_1_5
typedef void (GLAPIENTRY *Engine_glGenQueries) (GLsizei n, GLuint *ids);
typedef void (GLAPIENTRY *Engine_glDeleteQueries) (GLsizei n, const GLuint *ids);
typedef GLboolean (GLAPIENTRY *Engine_glIsQuery) (GLuint id);
typedef void (GLAPIENTRY *Engine_glBeginQuery) (GLenum target, GLuint id);
typedef void (GLAPIENTRY *Engine_glEndQuery) (GLenum target);
typedef void (GLAPIENTRY *Engine_glGetQueryiv) (GLenum target, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetQueryObjectiv) (GLuint id, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetQueryObjectuiv) (GLuint id, GLenum pname, GLuint *params);
typedef void (GLAPIENTRY *Engine_glBindBuffer) (GLenum target, GLuint buffer);
typedef void (GLAPIENTRY *Engine_glDeleteBuffers) (GLsizei n, const GLuint *buffers);
typedef void (GLAPIENTRY *Engine_glGenBuffers) (GLsizei n, GLuint *buffers);
typedef GLboolean (GLAPIENTRY *Engine_glIsBuffer) (GLuint buffer);
typedef void (GLAPIENTRY *Engine_glBufferData) (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
typedef void (GLAPIENTRY *Engine_glBufferSubData) (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
typedef void (GLAPIENTRY *Engine_glGetBufferSubData) (GLenum target, GLintptr offset, GLsizeiptr size, void *data);
typedef void * (GLAPIENTRY *Engine_glMapBuffer) (GLenum target, GLenum access);
typedef GLboolean (GLAPIENTRY *Engine_glUnmapBuffer) (GLenum target);
typedef void (GLAPIENTRY *Engine_glGetBufferParameteriv) (GLenum target, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetBufferPointerv) (GLenum target, GLenum pname, void **params);
#endif
#ifdef GL_VERSION_2_0
typedef void (GLAPIENTRY *Engine_glBlendEquationSeparate) (GLenum modeRGB, GLenum modeAlpha);
typedef void (GLAPIENTRY *Engine_glDrawBuffers) (GLsizei n, const GLenum *bufs);
typedef void (GLAPIENTRY *Engine_glStencilOpSeparate) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (GLAPIENTRY *Engine_glStencilFuncSeparate) (GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (GLAPIENTRY *Engine_glStencilMaskSeparate) (GLenum face, GLuint mask);
typedef void (GLAPIENTRY *Engine_glAttachShader) (GLuint program, GLuint shader);
typedef void (GLAPIENTRY *Engine_glBindAttribLocation) (GLuint program, GLuint index, const GLchar *name);
typedef void (GLAPIENTRY *Engine_glCompileShader) (GLuint shader);
typedef GLuint (GLAPIENTRY *Engine_glCreateProgram) (void);
typedef GLuint (GLAPIENTRY *Engine_glCreateShader) (GLenum type);
typedef void (GLAPIENTRY *Engine_glDeleteProgram) (GLuint program);
typedef void (GLAPIENTRY *Engine_glDeleteShader) (GLuint shader);
typedef void (GLAPIENTRY *Engine_glDetachShader) (GLuint program, GLuint shader);
typedef void (GLAPIENTRY *Engine_glDisableVertexAttribArray) (GLuint index);
typedef void (GLAPIENTRY *Engine_glEnableVertexAttribArray) (GLuint index);
typedef void (GLAPIENTRY *Engine_glGetActiveAttrib) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (GLAPIENTRY *Engine_glGetActiveUniform) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (GLAPIENTRY *Engine_glGetAttachedShaders) (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
typedef GLint (GLAPIENTRY *Engine_glGetAttribLocation) (GLuint program, const GLchar *name);
typedef void (GLAPIENTRY *Engine_glGetProgramiv) (GLuint program, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetProgramInfoLog) (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (GLAPIENTRY *Engine_glGetShaderiv) (GLuint shader, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetShaderInfoLog) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (GLAPIENTRY *Engine_glGetShaderSource) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
typedef GLint (GLAPIENTRY *Engine_glGetUniformLocation) (GLuint program, const GLchar *name);
typedef void (GLAPIENTRY *Engine_glGetUniformfv) (GLuint program, GLint location, GLfloat *params);
typedef void (GLAPIENTRY *Engine_glGetUniformiv) (GLuint program, GLint location, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetVertexAttribdv) (GLuint index, GLenum pname, GLdouble *params);
typedef void (GLAPIENTRY *Engine_glGetVertexAttribfv) (GLuint index, GLenum pname, GLfloat *params);
typedef void (GLAPIENTRY *Engine_glGetVertexAttribiv) (GLuint index, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetVertexAttribPointerv) (GLuint index, GLenum pname, void **pointer);
typedef GLboolean (GLAPIENTRY *Engine_glIsProgram) (GLuint program);
typedef GLboolean (GLAPIENTRY *Engine_glIsShader) (GLuint shader);
typedef void (GLAPIENTRY *Engine_glLinkProgram) (GLuint program);
typedef void (GLAPIENTRY *Engine_glShaderSource) (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
typedef void (GLAPIENTRY *Engine_glUseProgram) (GLuint program);
typedef void (GLAPIENTRY *Engine_glUniform1f) (GLint location, GLfloat v0);
typedef void (GLAPIENTRY *Engine_glUniform2f) (GLint location, GLfloat v0, GLfloat v1);
typedef void (GLAPIENTRY *Engine_glUniform3f) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GLAPIENTRY *Engine_glUniform4f) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GLAPIENTRY *Engine_glUniform1i) (GLint location, GLint v0);
typedef void (GLAPIENTRY *Engine_glUniform2i) (GLint location, GLint v0, GLint v1);
typedef void (GLAPIENTRY *Engine_glUniform3i) (GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GLAPIENTRY *Engine_glUniform4i) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GLAPIENTRY *Engine_glUniform1fv) (GLint location, GLsizei count, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glUniform2fv) (GLint location, GLsizei count, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glUniform3fv) (GLint location, GLsizei count, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glUniform4fv) (GLint location, GLsizei count, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glUniform1iv) (GLint location, GLsizei count, const GLint *value);
typedef void (GLAPIENTRY *Engine_glUniform2iv) (GLint location, GLsizei count, const GLint *value);
typedef void (GLAPIENTRY *Engine_glUniform3iv) (GLint location, GLsizei count, const GLint *value);
typedef void (GLAPIENTRY *Engine_glUniform4iv) (GLint location, GLsizei count, const GLint *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix2fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix3fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix4fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glValidateProgram) (GLuint program);
typedef void (GLAPIENTRY *Engine_glVertexAttrib1d) (GLuint index, GLdouble x);
typedef void (GLAPIENTRY *Engine_glVertexAttrib1dv) (GLuint index, const GLdouble *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib1f) (GLuint index, GLfloat x);
typedef void (GLAPIENTRY *Engine_glVertexAttrib1fv) (GLuint index, const GLfloat *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib1s) (GLuint index, GLshort x);
typedef void (GLAPIENTRY *Engine_glVertexAttrib1sv) (GLuint index, const GLshort *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib2d) (GLuint index, GLdouble x, GLdouble y);
typedef void (GLAPIENTRY *Engine_glVertexAttrib2dv) (GLuint index, const GLdouble *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib2f) (GLuint index, GLfloat x, GLfloat y);
typedef void (GLAPIENTRY *Engine_glVertexAttrib2fv) (GLuint index, const GLfloat *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib2s) (GLuint index, GLshort x, GLshort y);
typedef void (GLAPIENTRY *Engine_glVertexAttrib2sv) (GLuint index, const GLshort *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib3d) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLAPIENTRY *Engine_glVertexAttrib3dv) (GLuint index, const GLdouble *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib3f) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLAPIENTRY *Engine_glVertexAttrib3fv) (GLuint index, const GLfloat *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib3s) (GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (GLAPIENTRY *Engine_glVertexAttrib3sv) (GLuint index, const GLshort *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4Nbv) (GLuint index, const GLbyte *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4Niv) (GLuint index, const GLint *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4Nsv) (GLuint index, const GLshort *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4Nub) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4Nubv) (GLuint index, const GLubyte *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4Nuiv) (GLuint index, const GLuint *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4Nusv) (GLuint index, const GLushort *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4bv) (GLuint index, const GLbyte *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4d) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4dv) (GLuint index, const GLdouble *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4f) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4fv) (GLuint index, const GLfloat *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4iv) (GLuint index, const GLint *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4s) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4sv) (GLuint index, const GLshort *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4ubv) (GLuint index, const GLubyte *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4uiv) (GLuint index, const GLuint *v);
typedef void (GLAPIENTRY *Engine_glVertexAttrib4usv) (GLuint index, const GLushort *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribPointer) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
#endif
#ifdef GL_VERSION_2_1
typedef void (GLAPIENTRY *Engine_glUniformMatrix2x3fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix3x2fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix2x4fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix4x2fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix3x4fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix4x3fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#endif
#ifdef GL_VERSION_3_0
typedef void (GLAPIENTRY *Engine_glColorMaski) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef void (GLAPIENTRY *Engine_glGetBooleani_v) (GLenum target, GLuint index, GLboolean *data);
typedef void (GLAPIENTRY *Engine_glGetIntegeri_v) (GLenum target, GLuint index, GLint *data);
typedef void (GLAPIENTRY *Engine_glEnablei) (GLenum target, GLuint index);
typedef void (GLAPIENTRY *Engine_glDisablei) (GLenum target, GLuint index);
typedef GLboolean (GLAPIENTRY *Engine_glIsEnabledi) (GLenum target, GLuint index);
typedef void (GLAPIENTRY *Engine_glBeginTransformFeedback) (GLenum primitiveMode);
typedef void (GLAPIENTRY *Engine_glEndTransformFeedback) (void);
typedef void (GLAPIENTRY *Engine_glBindBufferRange) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLAPIENTRY *Engine_glBindBufferBase) (GLenum target, GLuint index, GLuint buffer);
typedef void (GLAPIENTRY *Engine_glTransformFeedbackVaryings) (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
typedef void (GLAPIENTRY *Engine_glGetTransformFeedbackVarying) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
typedef void (GLAPIENTRY *Engine_glClampColor) (GLenum target, GLenum clamp);
typedef void (GLAPIENTRY *Engine_glBeginConditionalRender) (GLuint id, GLenum mode);
typedef void (GLAPIENTRY *Engine_glEndConditionalRender) (void);
typedef void (GLAPIENTRY *Engine_glVertexAttribIPointer) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (GLAPIENTRY *Engine_glGetVertexAttribIiv) (GLuint index, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetVertexAttribIuiv) (GLuint index, GLenum pname, GLuint *params);
typedef void (GLAPIENTRY *Engine_glVertexAttribI1i) (GLuint index, GLint x);
typedef void (GLAPIENTRY *Engine_glVertexAttribI2i) (GLuint index, GLint x, GLint y);
typedef void (GLAPIENTRY *Engine_glVertexAttribI3i) (GLuint index, GLint x, GLint y, GLint z);
typedef void (GLAPIENTRY *Engine_glVertexAttribI4i) (GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (GLAPIENTRY *Engine_glVertexAttribI1ui) (GLuint index, GLuint x);
typedef void (GLAPIENTRY *Engine_glVertexAttribI2ui) (GLuint index, GLuint x, GLuint y);
typedef void (GLAPIENTRY *Engine_glVertexAttribI3ui) (GLuint index, GLuint x, GLuint y, GLuint z);
typedef void (GLAPIENTRY *Engine_glVertexAttribI4ui) (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (GLAPIENTRY *Engine_glVertexAttribI1iv) (GLuint index, const GLint *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribI2iv) (GLuint index, const GLint *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribI3iv) (GLuint index, const GLint *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribI4iv) (GLuint index, const GLint *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribI1uiv) (GLuint index, const GLuint *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribI2uiv) (GLuint index, const GLuint *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribI3uiv) (GLuint index, const GLuint *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribI4uiv) (GLuint index, const GLuint *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribI4bv) (GLuint index, const GLbyte *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribI4sv) (GLuint index, const GLshort *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribI4ubv) (GLuint index, const GLubyte *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribI4usv) (GLuint index, const GLushort *v);
typedef void (GLAPIENTRY *Engine_glGetUniformuiv) (GLuint program, GLint location, GLuint *params);
typedef void (GLAPIENTRY *Engine_glBindFragDataLocation) (GLuint program, GLuint color, const GLchar *name);
typedef GLint (GLAPIENTRY *Engine_glGetFragDataLocation) (GLuint program, const GLchar *name);
typedef void (GLAPIENTRY *Engine_glUniform1ui) (GLint location, GLuint v0);
typedef void (GLAPIENTRY *Engine_glUniform2ui) (GLint location, GLuint v0, GLuint v1);
typedef void (GLAPIENTRY *Engine_glUniform3ui) (GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GLAPIENTRY *Engine_glUniform4ui) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GLAPIENTRY *Engine_glUniform1uiv) (GLint location, GLsizei count, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glUniform2uiv) (GLint location, GLsizei count, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glUniform3uiv) (GLint location, GLsizei count, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glUniform4uiv) (GLint location, GLsizei count, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glTexParameterIiv) (GLenum target, GLenum pname, const GLint *params);
typedef void (GLAPIENTRY *Engine_glTexParameterIuiv) (GLenum target, GLenum pname, const GLuint *params);
typedef void (GLAPIENTRY *Engine_glGetTexParameterIiv) (GLenum target, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetTexParameterIuiv) (GLenum target, GLenum pname, GLuint *params);
typedef void (GLAPIENTRY *Engine_glClearBufferiv) (GLenum buffer, GLint drawbuffer, const GLint *value);
typedef void (GLAPIENTRY *Engine_glClearBufferuiv) (GLenum buffer, GLint drawbuffer, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glClearBufferfv) (GLenum buffer, GLint drawbuffer, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glClearBufferfi) (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef const GLubyte * (GLAPIENTRY *Engine_glGetStringi) (GLenum name, GLuint index);
typedef GLboolean (GLAPIENTRY *Engine_glIsRenderbuffer) (GLuint renderbuffer);
typedef void (GLAPIENTRY *Engine_glBindRenderbuffer) (GLenum target, GLuint renderbuffer);
typedef void (GLAPIENTRY *Engine_glDeleteRenderbuffers) (GLsizei n, const GLuint *renderbuffers);
typedef void (GLAPIENTRY *Engine_glGenRenderbuffers) (GLsizei n, GLuint *renderbuffers);
typedef void (GLAPIENTRY *Engine_glRenderbufferStorage) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glGetRenderbufferParameteriv) (GLenum target, GLenum pname, GLint *params);
typedef GLboolean (GLAPIENTRY *Engine_glIsFramebuffer) (GLuint framebuffer);
typedef void (GLAPIENTRY *Engine_glBindFramebuffer) (GLenum target, GLuint framebuffer);
typedef void (GLAPIENTRY *Engine_glDeleteFramebuffers) (GLsizei n, const GLuint *framebuffers);
typedef void (GLAPIENTRY *Engine_glGenFramebuffers) (GLsizei n, GLuint *framebuffers);
typedef GLenum (GLAPIENTRY *Engine_glCheckFramebufferStatus) (GLenum target);
typedef void (GLAPIENTRY *Engine_glFramebufferTexture1D) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GLAPIENTRY *Engine_glFramebufferTexture2D) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GLAPIENTRY *Engine_glFramebufferTexture3D) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (GLAPIENTRY *Engine_glFramebufferRenderbuffer) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (GLAPIENTRY *Engine_glGetFramebufferAttachmentParameteriv) (GLenum target, GLenum attachment, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGenerateMipmap) (GLenum target);
typedef void (GLAPIENTRY *Engine_glBlitFramebuffer) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (GLAPIENTRY *Engine_glRenderbufferStorageMultisample) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glFramebufferTextureLayer) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void * (GLAPIENTRY *Engine_glMapBufferRange) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GLAPIENTRY *Engine_glFlushMappedBufferRange) (GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (GLAPIENTRY *Engine_glBindVertexArray) (GLuint array);
typedef void (GLAPIENTRY *Engine_glDeleteVertexArrays) (GLsizei n, const GLuint *arrays);
typedef void (GLAPIENTRY *Engine_glGenVertexArrays) (GLsizei n, GLuint *arrays);
typedef GLboolean (GLAPIENTRY *Engine_glIsVertexArray) (GLuint array);
#endif
#ifdef GL_VERSION_3_1
typedef void (GLAPIENTRY *Engine_glDrawArraysInstanced) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
typedef void (GLAPIENTRY *Engine_glDrawElementsInstanced) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
typedef void (GLAPIENTRY *Engine_glTexBuffer) (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GLAPIENTRY *Engine_glPrimitiveRestartIndex) (GLuint index);
typedef void (GLAPIENTRY *Engine_glCopyBufferSubData) (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GLAPIENTRY *Engine_glGetUniformIndices) (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
typedef void (GLAPIENTRY *Engine_glGetActiveUniformsiv) (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetActiveUniformName) (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
typedef GLuint (GLAPIENTRY *Engine_glGetUniformBlockIndex) (GLuint program, const GLchar *uniformBlockName);
typedef void (GLAPIENTRY *Engine_glGetActiveUniformBlockiv) (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetActiveUniformBlockName) (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
typedef void (GLAPIENTRY *Engine_glUniformBlockBinding) (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
#endif
#ifdef GL_VERSION_3_2
typedef void (GLAPIENTRY *Engine_glDrawElementsBaseVertex) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (GLAPIENTRY *Engine_glDrawRangeElementsBaseVertex) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (GLAPIENTRY *Engine_glDrawElementsInstancedBaseVertex) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
typedef void (GLAPIENTRY *Engine_glMultiDrawElementsBaseVertex) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
typedef void (GLAPIENTRY *Engine_glProvokingVertex) (GLenum mode);
typedef GLsync (GLAPIENTRY *Engine_glFenceSync) (GLenum condition, GLbitfield flags);
typedef GLboolean (GLAPIENTRY *Engine_glIsSync) (GLsync sync);
typedef void (GLAPIENTRY *Engine_glDeleteSync) (GLsync sync);
typedef GLenum (GLAPIENTRY *Engine_glClientWaitSync) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GLAPIENTRY *Engine_glWaitSync) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GLAPIENTRY *Engine_glGetInteger64v) (GLenum pname, GLint64 *data);
typedef void (GLAPIENTRY *Engine_glGetSynciv) (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
typedef void (GLAPIENTRY *Engine_glGetInteger64i_v) (GLenum target, GLuint index, GLint64 *data);
typedef void (GLAPIENTRY *Engine_glGetBufferParameteri64v) (GLenum target, GLenum pname, GLint64 *params);
typedef void (GLAPIENTRY *Engine_glFramebufferTexture) (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (GLAPIENTRY *Engine_glTexImage2DMultisample) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *Engine_glTexImage3DMultisample) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *Engine_glGetMultisamplefv) (GLenum pname, GLuint index, GLfloat *val);
typedef void (GLAPIENTRY *Engine_glSampleMaski) (GLuint maskNumber, GLbitfield mask);
#endif
#ifdef GL_VERSION_3_3
typedef void (GLAPIENTRY *Engine_glBindFragDataLocationIndexed) (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
typedef GLint (GLAPIENTRY *Engine_glGetFragDataIndex) (GLuint program, const GLchar *name);
typedef void (GLAPIENTRY *Engine_glGenSamplers) (GLsizei count, GLuint *samplers);
typedef void (GLAPIENTRY *Engine_glDeleteSamplers) (GLsizei count, const GLuint *samplers);
typedef GLboolean (GLAPIENTRY *Engine_glIsSampler) (GLuint sampler);
typedef void (GLAPIENTRY *Engine_glBindSampler) (GLuint unit, GLuint sampler);
typedef void (GLAPIENTRY *Engine_glSamplerParameteri) (GLuint sampler, GLenum pname, GLint param);
typedef void (GLAPIENTRY *Engine_glSamplerParameteriv) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (GLAPIENTRY *Engine_glSamplerParameterf) (GLuint sampler, GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *Engine_glSamplerParameterfv) (GLuint sampler, GLenum pname, const GLfloat *param);
typedef void (GLAPIENTRY *Engine_glSamplerParameterIiv) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (GLAPIENTRY *Engine_glSamplerParameterIuiv) (GLuint sampler, GLenum pname, const GLuint *param);
typedef void (GLAPIENTRY *Engine_glGetSamplerParameteriv) (GLuint sampler, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetSamplerParameterIiv) (GLuint sampler, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetSamplerParameterfv) (GLuint sampler, GLenum pname, GLfloat *params);
typedef void (GLAPIENTRY *Engine_glGetSamplerParameterIuiv) (GLuint sampler, GLenum pname, GLuint *params);
typedef void (GLAPIENTRY *Engine_glQueryCounter) (GLuint id, GLenum target);
typedef void (GLAPIENTRY *Engine_glGetQueryObjecti64v) (GLuint id, GLenum pname, GLint64 *params);
typedef void (GLAPIENTRY *Engine_glGetQueryObjectui64v) (GLuint id, GLenum pname, GLuint64 *params);
typedef void (GLAPIENTRY *Engine_glVertexAttribDivisor) (GLuint index, GLuint divisor);
typedef void (GLAPIENTRY *Engine_glVertexAttribP1ui) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (GLAPIENTRY *Engine_glVertexAttribP1uiv) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glVertexAttribP2ui) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (GLAPIENTRY *Engine_glVertexAttribP2uiv) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glVertexAttribP3ui) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (GLAPIENTRY *Engine_glVertexAttribP3uiv) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glVertexAttribP4ui) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (GLAPIENTRY *Engine_glVertexAttribP4uiv) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glVertexP2ui) (GLenum type, GLuint value);
typedef void (GLAPIENTRY *Engine_glVertexP2uiv) (GLenum type, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glVertexP3ui) (GLenum type, GLuint value);
typedef void (GLAPIENTRY *Engine_glVertexP3uiv) (GLenum type, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glVertexP4ui) (GLenum type, GLuint value);
typedef void (GLAPIENTRY *Engine_glVertexP4uiv) (GLenum type, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glTexCoordP1ui) (GLenum type, GLuint coords);
typedef void (GLAPIENTRY *Engine_glTexCoordP1uiv) (GLenum type, const GLuint *coords);
typedef void (GLAPIENTRY *Engine_glTexCoordP2ui) (GLenum type, GLuint coords);
typedef void (GLAPIENTRY *Engine_glTexCoordP2uiv) (GLenum type, const GLuint *coords);
typedef void (GLAPIENTRY *Engine_glTexCoordP3ui) (GLenum type, GLuint coords);
typedef void (GLAPIENTRY *Engine_glTexCoordP3uiv) (GLenum type, const GLuint *coords);
typedef void (GLAPIENTRY *Engine_glTexCoordP4ui) (GLenum type, GLuint coords);
typedef void (GLAPIENTRY *Engine_glTexCoordP4uiv) (GLenum type, const GLuint *coords);
typedef void (GLAPIENTRY *Engine_glMultiTexCoordP1ui) (GLenum texture, GLenum type, GLuint coords);
typedef void (GLAPIENTRY *Engine_glMultiTexCoordP1uiv) (GLenum texture, GLenum type, const GLuint *coords);
typedef void (GLAPIENTRY *Engine_glMultiTexCoordP2ui) (GLenum texture, GLenum type, GLuint coords);
typedef void (GLAPIENTRY *Engine_glMultiTexCoordP2uiv) (GLenum texture, GLenum type, const GLuint *coords);
typedef void (GLAPIENTRY *Engine_glMultiTexCoordP3ui) (GLenum texture, GLenum type, GLuint coords);
typedef void (GLAPIENTRY *Engine_glMultiTexCoordP3uiv) (GLenum texture, GLenum type, const GLuint *coords);
typedef void (GLAPIENTRY *Engine_glMultiTexCoordP4ui) (GLenum texture, GLenum type, GLuint coords);
typedef void (GLAPIENTRY *Engine_glMultiTexCoordP4uiv) (GLenum texture, GLenum type, const GLuint *coords);
typedef void (GLAPIENTRY *Engine_glNormalP3ui) (GLenum type, GLuint coords);
typedef void (GLAPIENTRY *Engine_glNormalP3uiv) (GLenum type, const GLuint *coords);
typedef void (GLAPIENTRY *Engine_glColorP3ui) (GLenum type, GLuint color);
typedef void (GLAPIENTRY *Engine_glColorP3uiv) (GLenum type, const GLuint *color);
typedef void (GLAPIENTRY *Engine_glColorP4ui) (GLenum type, GLuint color);
typedef void (GLAPIENTRY *Engine_glColorP4uiv) (GLenum type, const GLuint *color);
typedef void (GLAPIENTRY *Engine_glSecondaryColorP3ui) (GLenum type, GLuint color);
typedef void (GLAPIENTRY *Engine_glSecondaryColorP3uiv) (GLenum type, const GLuint *color);
#endif
#ifdef GL_VERSION_4_0
typedef void (GLAPIENTRY *Engine_glMinSampleShading) (GLfloat value);
typedef void (GLAPIENTRY *Engine_glBlendEquationi) (GLuint buf, GLenum mode);
typedef void (GLAPIENTRY *Engine_glBlendEquationSeparatei) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GLAPIENTRY *Engine_glBlendFunci) (GLuint buf, GLenum src, GLenum dst);
typedef void (GLAPIENTRY *Engine_glBlendFuncSeparatei) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GLAPIENTRY *Engine_glDrawArraysIndirect) (GLenum mode, const void *indirect);
typedef void (GLAPIENTRY *Engine_glDrawElementsIndirect) (GLenum mode, GLenum type, const void *indirect);
typedef void (GLAPIENTRY *Engine_glUniform1d) (GLint location, GLdouble x);
typedef void (GLAPIENTRY *Engine_glUniform2d) (GLint location, GLdouble x, GLdouble y);
typedef void (GLAPIENTRY *Engine_glUniform3d) (GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLAPIENTRY *Engine_glUniform4d) (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLAPIENTRY *Engine_glUniform1dv) (GLint location, GLsizei count, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glUniform2dv) (GLint location, GLsizei count, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glUniform3dv) (GLint location, GLsizei count, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glUniform4dv) (GLint location, GLsizei count, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix2dv) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix3dv) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix4dv) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix2x3dv) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix2x4dv) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix3x2dv) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix3x4dv) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix4x2dv) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glUniformMatrix4x3dv) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glGetUniformdv) (GLuint program, GLint location, GLdouble *params);
typedef GLint (GLAPIENTRY *Engine_glGetSubroutineUniformLocation) (GLuint program, GLenum shadertype, const GLchar *name);
typedef GLuint (GLAPIENTRY *Engine_glGetSubroutineIndex) (GLuint program, GLenum shadertype, const GLchar *name);
typedef void (GLAPIENTRY *Engine_glGetActiveSubroutineUniformiv) (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
typedef void (GLAPIENTRY *Engine_glGetActiveSubroutineUniformName) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
typedef void (GLAPIENTRY *Engine_glGetActiveSubroutineName) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
typedef void (GLAPIENTRY *Engine_glUniformSubroutinesuiv) (GLenum shadertype, GLsizei count, const GLuint *indices);
typedef void (GLAPIENTRY *Engine_glGetUniformSubroutineuiv) (GLenum shadertype, GLint location, GLuint *params);
typedef void (GLAPIENTRY *Engine_glGetProgramStageiv) (GLuint program, GLenum shadertype, GLenum pname, GLint *values);
typedef void (GLAPIENTRY *Engine_glPatchParameteri) (GLenum pname, GLint value);
typedef void (GLAPIENTRY *Engine_glPatchParameterfv) (GLenum pname, const GLfloat *values);
typedef void (GLAPIENTRY *Engine_glBindTransformFeedback) (GLenum target, GLuint id);
typedef void (GLAPIENTRY *Engine_glDeleteTransformFeedbacks) (GLsizei n, const GLuint *ids);
typedef void (GLAPIENTRY *Engine_glGenTransformFeedbacks) (GLsizei n, GLuint *ids);
typedef GLboolean (GLAPIENTRY *Engine_glIsTransformFeedback) (GLuint id);
typedef void (GLAPIENTRY *Engine_glPauseTransformFeedback) (void);
typedef void (GLAPIENTRY *Engine_glResumeTransformFeedback) (void);
typedef void (GLAPIENTRY *Engine_glDrawTransformFeedback) (GLenum mode, GLuint id);
typedef void (GLAPIENTRY *Engine_glDrawTransformFeedbackStream) (GLenum mode, GLuint id, GLuint stream);
typedef void (GLAPIENTRY *Engine_glBeginQueryIndexed) (GLenum target, GLuint index, GLuint id);
typedef void (GLAPIENTRY *Engine_glEndQueryIndexed) (GLenum target, GLuint index);
typedef void (GLAPIENTRY *Engine_glGetQueryIndexediv) (GLenum target, GLuint index, GLenum pname, GLint *params);
#endif
#ifdef GL_VERSION_4_1
typedef void (GLAPIENTRY *Engine_glReleaseShaderCompiler) (void);
typedef void (GLAPIENTRY *Engine_glShaderBinary) (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
typedef void (GLAPIENTRY *Engine_glGetShaderPrecisionFormat) (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
typedef void (GLAPIENTRY *Engine_glDepthRangef) (GLfloat n, GLfloat f);
typedef void (GLAPIENTRY *Engine_glClearDepthf) (GLfloat d);
typedef void (GLAPIENTRY *Engine_glGetProgramBinary) (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
typedef void (GLAPIENTRY *Engine_glProgramBinary) (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
typedef void (GLAPIENTRY *Engine_glProgramParameteri) (GLuint program, GLenum pname, GLint value);
typedef void (GLAPIENTRY *Engine_glUseProgramStages) (GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (GLAPIENTRY *Engine_glActiveShaderProgram) (GLuint pipeline, GLuint program);
typedef GLuint (GLAPIENTRY *Engine_glCreateShaderProgramv) (GLenum type, GLsizei count, const GLchar *const*strings);
typedef void (GLAPIENTRY *Engine_glBindProgramPipeline) (GLuint pipeline);
typedef void (GLAPIENTRY *Engine_glDeleteProgramPipelines) (GLsizei n, const GLuint *pipelines);
typedef void (GLAPIENTRY *Engine_glGenProgramPipelines) (GLsizei n, GLuint *pipelines);
typedef GLboolean (GLAPIENTRY *Engine_glIsProgramPipeline) (GLuint pipeline);
typedef void (GLAPIENTRY *Engine_glGetProgramPipelineiv) (GLuint pipeline, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glProgramUniform1i) (GLuint program, GLint location, GLint v0);
typedef void (GLAPIENTRY *Engine_glProgramUniform1iv) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform1f) (GLuint program, GLint location, GLfloat v0);
typedef void (GLAPIENTRY *Engine_glProgramUniform1fv) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform1d) (GLuint program, GLint location, GLdouble v0);
typedef void (GLAPIENTRY *Engine_glProgramUniform1dv) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform1ui) (GLuint program, GLint location, GLuint v0);
typedef void (GLAPIENTRY *Engine_glProgramUniform1uiv) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform2i) (GLuint program, GLint location, GLint v0, GLint v1);
typedef void (GLAPIENTRY *Engine_glProgramUniform2iv) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform2f) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (GLAPIENTRY *Engine_glProgramUniform2fv) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform2d) (GLuint program, GLint location, GLdouble v0, GLdouble v1);
typedef void (GLAPIENTRY *Engine_glProgramUniform2dv) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform2ui) (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (GLAPIENTRY *Engine_glProgramUniform2uiv) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform3i) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GLAPIENTRY *Engine_glProgramUniform3iv) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform3f) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GLAPIENTRY *Engine_glProgramUniform3fv) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform3d) (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
typedef void (GLAPIENTRY *Engine_glProgramUniform3dv) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform3ui) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GLAPIENTRY *Engine_glProgramUniform3uiv) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform4i) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GLAPIENTRY *Engine_glProgramUniform4iv) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform4f) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GLAPIENTRY *Engine_glProgramUniform4fv) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform4d) (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
typedef void (GLAPIENTRY *Engine_glProgramUniform4dv) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glProgramUniform4ui) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GLAPIENTRY *Engine_glProgramUniform4uiv) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix2fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix3fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix4fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix2dv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix3dv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix4dv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix2x3fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix3x2fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix2x4fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix4x2fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix3x4fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix4x3fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix2x3dv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix3x2dv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix2x4dv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix4x2dv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix3x4dv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glProgramUniformMatrix4x3dv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (GLAPIENTRY *Engine_glValidateProgramPipeline) (GLuint pipeline);
typedef void (GLAPIENTRY *Engine_glGetProgramPipelineInfoLog) (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (GLAPIENTRY *Engine_glVertexAttribL1d) (GLuint index, GLdouble x);
typedef void (GLAPIENTRY *Engine_glVertexAttribL2d) (GLuint index, GLdouble x, GLdouble y);
typedef void (GLAPIENTRY *Engine_glVertexAttribL3d) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLAPIENTRY *Engine_glVertexAttribL4d) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLAPIENTRY *Engine_glVertexAttribL1dv) (GLuint index, const GLdouble *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribL2dv) (GLuint index, const GLdouble *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribL3dv) (GLuint index, const GLdouble *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribL4dv) (GLuint index, const GLdouble *v);
typedef void (GLAPIENTRY *Engine_glVertexAttribLPointer) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (GLAPIENTRY *Engine_glGetVertexAttribLdv) (GLuint index, GLenum pname, GLdouble *params);
typedef void (GLAPIENTRY *Engine_glViewportArrayv) (GLuint first, GLsizei count, const GLfloat *v);
typedef void (GLAPIENTRY *Engine_glViewportIndexedf) (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (GLAPIENTRY *Engine_glViewportIndexedfv) (GLuint index, const GLfloat *v);
typedef void (GLAPIENTRY *Engine_glScissorArrayv) (GLuint first, GLsizei count, const GLint *v);
typedef void (GLAPIENTRY *Engine_glScissorIndexed) (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glScissorIndexedv) (GLuint index, const GLint *v);
typedef void (GLAPIENTRY *Engine_glDepthRangeArrayv) (GLuint first, GLsizei count, const GLdouble *v);
typedef void (GLAPIENTRY *Engine_glDepthRangeIndexed) (GLuint index, GLdouble n, GLdouble f);
typedef void (GLAPIENTRY *Engine_glGetFloati_v) (GLenum target, GLuint index, GLfloat *data);
typedef void (GLAPIENTRY *Engine_glGetDoublei_v) (GLenum target, GLuint index, GLdouble *data);
#endif
#ifdef GL_VERSION_4_2
typedef void (GLAPIENTRY *Engine_glDrawArraysInstancedBaseInstance) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (GLAPIENTRY *Engine_glDrawElementsInstancedBaseInstance) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
typedef void (GLAPIENTRY *Engine_glDrawElementsInstancedBaseVertexBaseInstance) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
typedef void (GLAPIENTRY *Engine_glGetInternalformativ) (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetActiveAtomicCounterBufferiv) (GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glBindImageTexture) (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef void (GLAPIENTRY *Engine_glMemoryBarrier) (GLbitfield barriers);
typedef void (GLAPIENTRY *Engine_glTexStorage1D) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GLAPIENTRY *Engine_glTexStorage2D) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glTexStorage3D) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GLAPIENTRY *Engine_glDrawTransformFeedbackInstanced) (GLenum mode, GLuint id, GLsizei instancecount);
typedef void (GLAPIENTRY *Engine_glDrawTransformFeedbackStreamInstanced) (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
#endif
#ifdef GL_VERSION_4_3
typedef void (GLAPIENTRY *Engine_glClearBufferData) (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
typedef void (GLAPIENTRY *Engine_glClearBufferSubData) (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
typedef void (GLAPIENTRY *Engine_glDispatchCompute) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (GLAPIENTRY *Engine_glDispatchComputeIndirect) (GLintptr indirect);
typedef void (GLAPIENTRY *Engine_glCopyImageSubData) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (GLAPIENTRY *Engine_glFramebufferParameteri) (GLenum target, GLenum pname, GLint param);
typedef void (GLAPIENTRY *Engine_glGetFramebufferParameteriv) (GLenum target, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetInternalformati64v) (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params);
typedef void (GLAPIENTRY *Engine_glInvalidateTexSubImage) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GLAPIENTRY *Engine_glInvalidateTexImage) (GLuint texture, GLint level);
typedef void (GLAPIENTRY *Engine_glInvalidateBufferSubData) (GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (GLAPIENTRY *Engine_glInvalidateBufferData) (GLuint buffer);
typedef void (GLAPIENTRY *Engine_glInvalidateFramebuffer) (GLenum target, GLsizei numAttachments, const GLenum *attachments);
typedef void (GLAPIENTRY *Engine_glInvalidateSubFramebuffer) (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glMultiDrawArraysIndirect) (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
typedef void (GLAPIENTRY *Engine_glMultiDrawElementsIndirect) (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
typedef void (GLAPIENTRY *Engine_glGetProgramInterfaceiv) (GLuint program, GLenum programInterface, GLenum pname, GLint *params);
typedef GLuint (GLAPIENTRY *Engine_glGetProgramResourceIndex) (GLuint program, GLenum programInterface, const GLchar *name);
typedef void (GLAPIENTRY *Engine_glGetProgramResourceName) (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
typedef void (GLAPIENTRY *Engine_glGetProgramResourceiv) (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params);
typedef GLint (GLAPIENTRY *Engine_glGetProgramResourceLocation) (GLuint program, GLenum programInterface, const GLchar *name);
typedef GLint (GLAPIENTRY *Engine_glGetProgramResourceLocationIndex) (GLuint program, GLenum programInterface, const GLchar *name);
typedef void (GLAPIENTRY *Engine_glShaderStorageBlockBinding) (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
typedef void (GLAPIENTRY *Engine_glTexBufferRange) (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLAPIENTRY *Engine_glTexStorage2DMultisample) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *Engine_glTexStorage3DMultisample) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *Engine_glTextureView) (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (GLAPIENTRY *Engine_glBindVertexBuffer) (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (GLAPIENTRY *Engine_glVertexAttribFormat) (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (GLAPIENTRY *Engine_glVertexAttribIFormat) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLAPIENTRY *Engine_glVertexAttribLFormat) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLAPIENTRY *Engine_glVertexAttribBinding) (GLuint attribindex, GLuint bindingindex);
typedef void (GLAPIENTRY *Engine_glVertexBindingDivisor) (GLuint bindingindex, GLuint divisor);
typedef void (GLAPIENTRY *Engine_glDebugMessageControl) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
typedef void (GLAPIENTRY *Engine_glDebugMessageInsert) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
typedef void (GLAPIENTRY *Engine_glDebugMessageCallback) (Engine_GLDEBUGPROC callback, const void *userParam);
typedef GLuint (GLAPIENTRY *Engine_glGetDebugMessageLog) (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
typedef void (GLAPIENTRY *Engine_glPushDebugGroup) (GLenum source, GLuint id, GLsizei length, const GLchar *message);
typedef void (GLAPIENTRY *Engine_glPopDebugGroup) (void);
typedef void (GLAPIENTRY *Engine_glObjectLabel) (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
typedef void (GLAPIENTRY *Engine_glGetObjectLabel) (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (GLAPIENTRY *Engine_glObjectPtrLabel) (const void *ptr, GLsizei length, const GLchar *label);
typedef void (GLAPIENTRY *Engine_glGetObjectPtrLabel) (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (GLAPIENTRY *Engine_glGetPointerv) (GLenum pname, void **params);
#endif
#ifdef GL_VERSION_4_4
typedef void (GLAPIENTRY *Engine_glBufferStorage) (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
typedef void (GLAPIENTRY *Engine_glClearTexImage) (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
typedef void (GLAPIENTRY *Engine_glClearTexSubImage) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
typedef void (GLAPIENTRY *Engine_glBindBuffersBase) (GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
typedef void (GLAPIENTRY *Engine_glBindBuffersRange) (GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
typedef void (GLAPIENTRY *Engine_glBindTextures) (GLuint first, GLsizei count, const GLuint *textures);
typedef void (GLAPIENTRY *Engine_glBindSamplers) (GLuint first, GLsizei count, const GLuint *samplers);
typedef void (GLAPIENTRY *Engine_glBindImageTextures) (GLuint first, GLsizei count, const GLuint *textures);
typedef void (GLAPIENTRY *Engine_glBindVertexBuffers) (GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
#endif
#ifdef GL_VERSION_4_5
typedef void (GLAPIENTRY *Engine_glClipControl) (GLenum origin, GLenum depth);
typedef void (GLAPIENTRY *Engine_glCreateTransformFeedbacks) (GLsizei n, GLuint *ids);
typedef void (GLAPIENTRY *Engine_glTransformFeedbackBufferBase) (GLuint xfb, GLuint index, GLuint buffer);
typedef void (GLAPIENTRY *Engine_glTransformFeedbackBufferRange) (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLAPIENTRY *Engine_glGetTransformFeedbackiv) (GLuint xfb, GLenum pname, GLint *param);
typedef void (GLAPIENTRY *Engine_glGetTransformFeedbacki_v) (GLuint xfb, GLenum pname, GLuint index, GLint *param);
typedef void (GLAPIENTRY *Engine_glGetTransformFeedbacki64_v) (GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
typedef void (GLAPIENTRY *Engine_glCreateBuffers) (GLsizei n, GLuint *buffers);
typedef void (GLAPIENTRY *Engine_glNamedBufferStorage) (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
typedef void (GLAPIENTRY *Engine_glNamedBufferData) (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
typedef void (GLAPIENTRY *Engine_glNamedBufferSubData) (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
typedef void (GLAPIENTRY *Engine_glCopyNamedBufferSubData) (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GLAPIENTRY *Engine_glClearNamedBufferData) (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
typedef void (GLAPIENTRY *Engine_glClearNamedBufferSubData) (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
typedef void * (GLAPIENTRY *Engine_glMapNamedBuffer) (GLuint buffer, GLenum access);
typedef void * (GLAPIENTRY *Engine_glMapNamedBufferRange) (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef GLboolean (GLAPIENTRY *Engine_glUnmapNamedBuffer) (GLuint buffer);
typedef void (GLAPIENTRY *Engine_glFlushMappedNamedBufferRange) (GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (GLAPIENTRY *Engine_glGetNamedBufferParameteriv) (GLuint buffer, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetNamedBufferParameteri64v) (GLuint buffer, GLenum pname, GLint64 *params);
typedef void (GLAPIENTRY *Engine_glGetNamedBufferPointerv) (GLuint buffer, GLenum pname, void **params);
typedef void (GLAPIENTRY *Engine_glGetNamedBufferSubData) (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
typedef void (GLAPIENTRY *Engine_glCreateFramebuffers) (GLsizei n, GLuint *framebuffers);
typedef void (GLAPIENTRY *Engine_glNamedFramebufferRenderbuffer) (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (GLAPIENTRY *Engine_glNamedFramebufferParameteri) (GLuint framebuffer, GLenum pname, GLint param);
typedef void (GLAPIENTRY *Engine_glNamedFramebufferTexture) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
typedef void (GLAPIENTRY *Engine_glNamedFramebufferTextureLayer) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (GLAPIENTRY *Engine_glNamedFramebufferDrawBuffer) (GLuint framebuffer, GLenum buf);
typedef void (GLAPIENTRY *Engine_glNamedFramebufferDrawBuffers) (GLuint framebuffer, GLsizei n, const GLenum *bufs);
typedef void (GLAPIENTRY *Engine_glNamedFramebufferReadBuffer) (GLuint framebuffer, GLenum src);
typedef void (GLAPIENTRY *Engine_glInvalidateNamedFramebufferData) (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
typedef void (GLAPIENTRY *Engine_glInvalidateNamedFramebufferSubData) (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glClearNamedFramebufferiv) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
typedef void (GLAPIENTRY *Engine_glClearNamedFramebufferuiv) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
typedef void (GLAPIENTRY *Engine_glClearNamedFramebufferfv) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
typedef void (GLAPIENTRY *Engine_glClearNamedFramebufferfi) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef void (GLAPIENTRY *Engine_glBlitNamedFramebuffer) (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef GLenum (GLAPIENTRY *Engine_glCheckNamedFramebufferStatus) (GLuint framebuffer, GLenum target);
typedef void (GLAPIENTRY *Engine_glGetNamedFramebufferParameteriv) (GLuint framebuffer, GLenum pname, GLint *param);
typedef void (GLAPIENTRY *Engine_glGetNamedFramebufferAttachmentParameteriv) (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glCreateRenderbuffers) (GLsizei n, GLuint *renderbuffers);
typedef void (GLAPIENTRY *Engine_glNamedRenderbufferStorage) (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glNamedRenderbufferStorageMultisample) (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glGetNamedRenderbufferParameteriv) (GLuint renderbuffer, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glCreateTextures) (GLenum target, GLsizei n, GLuint *textures);
typedef void (GLAPIENTRY *Engine_glTextureBuffer) (GLuint texture, GLenum internalformat, GLuint buffer);
typedef void (GLAPIENTRY *Engine_glTextureBufferRange) (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLAPIENTRY *Engine_glTextureStorage1D) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GLAPIENTRY *Engine_glTextureStorage2D) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glTextureStorage3D) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GLAPIENTRY *Engine_glTextureStorage2DMultisample) (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *Engine_glTextureStorage3DMultisample) (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *Engine_glTextureSubImage1D) (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
typedef void (GLAPIENTRY *Engine_glTextureSubImage2D) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (GLAPIENTRY *Engine_glTextureSubImage3D) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (GLAPIENTRY *Engine_glCompressedTextureSubImage1D) (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
typedef void (GLAPIENTRY *Engine_glCompressedTextureSubImage2D) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (GLAPIENTRY *Engine_glCompressedTextureSubImage3D) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (GLAPIENTRY *Engine_glCopyTextureSubImage1D) (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (GLAPIENTRY *Engine_glCopyTextureSubImage2D) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glCopyTextureSubImage3D) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *Engine_glTextureParameterf) (GLuint texture, GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *Engine_glTextureParameterfv) (GLuint texture, GLenum pname, const GLfloat *param);
typedef void (GLAPIENTRY *Engine_glTextureParameteri) (GLuint texture, GLenum pname, GLint param);
typedef void (GLAPIENTRY *Engine_glTextureParameterIiv) (GLuint texture, GLenum pname, const GLint *params);
typedef void (GLAPIENTRY *Engine_glTextureParameterIuiv) (GLuint texture, GLenum pname, const GLuint *params);
typedef void (GLAPIENTRY *Engine_glTextureParameteriv) (GLuint texture, GLenum pname, const GLint *param);
typedef void (GLAPIENTRY *Engine_glGenerateTextureMipmap) (GLuint texture);
typedef void (GLAPIENTRY *Engine_glBindTextureUnit) (GLuint unit, GLuint texture);
typedef void (GLAPIENTRY *Engine_glGetTextureImage) (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
typedef void (GLAPIENTRY *Engine_glGetCompressedTextureImage) (GLuint texture, GLint level, GLsizei bufSize, void *pixels);
typedef void (GLAPIENTRY *Engine_glGetTextureLevelParameterfv) (GLuint texture, GLint level, GLenum pname, GLfloat *params);
typedef void (GLAPIENTRY *Engine_glGetTextureLevelParameteriv) (GLuint texture, GLint level, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetTextureParameterfv) (GLuint texture, GLenum pname, GLfloat *params);
typedef void (GLAPIENTRY *Engine_glGetTextureParameterIiv) (GLuint texture, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetTextureParameterIuiv) (GLuint texture, GLenum pname, GLuint *params);
typedef void (GLAPIENTRY *Engine_glGetTextureParameteriv) (GLuint texture, GLenum pname, GLint *params);
typedef void (GLAPIENTRY *Engine_glCreateVertexArrays) (GLsizei n, GLuint *arrays);
typedef void (GLAPIENTRY *Engine_glDisableVertexArrayAttrib) (GLuint vaobj, GLuint index);
typedef void (GLAPIENTRY *Engine_glEnableVertexArrayAttrib) (GLuint vaobj, GLuint index);
typedef void (GLAPIENTRY *Engine_glVertexArrayElementBuffer) (GLuint vaobj, GLuint buffer);
typedef void (GLAPIENTRY *Engine_glVertexArrayVertexBuffer) (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (GLAPIENTRY *Engine_glVertexArrayVertexBuffers) (GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
typedef void (GLAPIENTRY *Engine_glVertexArrayAttribBinding) (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
typedef void (GLAPIENTRY *Engine_glVertexArrayAttribFormat) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (GLAPIENTRY *Engine_glVertexArrayAttribIFormat) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLAPIENTRY *Engine_glVertexArrayAttribLFormat) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLAPIENTRY *Engine_glVertexArrayBindingDivisor) (GLuint vaobj, GLuint bindingindex, GLuint divisor);
typedef void (GLAPIENTRY *Engine_glGetVertexArrayiv) (GLuint vaobj, GLenum pname, GLint *param);
typedef void (GLAPIENTRY *Engine_glGetVertexArrayIndexediv) (GLuint vaobj, GLuint index, GLenum pname, GLint *param);
typedef void (GLAPIENTRY *Engine_glGetVertexArrayIndexed64iv) (GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
typedef void (GLAPIENTRY *Engine_glCreateSamplers) (GLsizei n, GLuint *samplers);
typedef void (GLAPIENTRY *Engine_glCreateProgramPipelines) (GLsizei n, GLuint *pipelines);
typedef void (GLAPIENTRY *Engine_glCreateQueries) (GLenum target, GLsizei n, GLuint *ids);
typedef void (GLAPIENTRY *Engine_glGetQueryBufferObjecti64v) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (GLAPIENTRY *Engine_glGetQueryBufferObjectiv) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (GLAPIENTRY *Engine_glGetQueryBufferObjectui64v) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (GLAPIENTRY *Engine_glGetQueryBufferObjectuiv) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (GLAPIENTRY *Engine_glMemoryBarrierByRegion) (GLbitfield barriers);
typedef void (GLAPIENTRY *Engine_glGetTextureSubImage) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
typedef void (GLAPIENTRY *Engine_glGetCompressedTextureSubImage) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
typedef GLenum (GLAPIENTRY *Engine_glGetGraphicsResetStatus) (void);
typedef void (GLAPIENTRY *Engine_glGetnCompressedTexImage) (GLenum target, GLint lod, GLsizei bufSize, void *pixels);
typedef void (GLAPIENTRY *Engine_glGetnTexImage) (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
typedef void (GLAPIENTRY *Engine_glGetnUniformdv) (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
typedef void (GLAPIENTRY *Engine_glGetnUniformfv) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
typedef void (GLAPIENTRY *Engine_glGetnUniformiv) (GLuint program, GLint location, GLsizei bufSize, GLint *params);
typedef void (GLAPIENTRY *Engine_glGetnUniformuiv) (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
typedef void (GLAPIENTRY *Engine_glReadnPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
typedef void (GLAPIENTRY *Engine_glGetnMapdv) (GLenum target, GLenum query, GLsizei bufSize, GLdouble *v);
typedef void (GLAPIENTRY *Engine_glGetnMapfv) (GLenum target, GLenum query, GLsizei bufSize, GLfloat *v);
typedef void (GLAPIENTRY *Engine_glGetnMapiv) (GLenum target, GLenum query, GLsizei bufSize, GLint *v);
typedef void (GLAPIENTRY *Engine_glGetnPixelMapfv) (GLenum map, GLsizei bufSize, GLfloat *values);
typedef void (GLAPIENTRY *Engine_glGetnPixelMapuiv) (GLenum map, GLsizei bufSize, GLuint *values);
typedef void (GLAPIENTRY *Engine_glGetnPixelMapusv) (GLenum map, GLsizei bufSize, GLushort *values);
typedef void (GLAPIENTRY *Engine_glGetnPolygonStipple) (GLsizei bufSize, GLubyte *pattern);
typedef void (GLAPIENTRY *Engine_glGetnColorTable) (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table);
typedef void (GLAPIENTRY *Engine_glGetnConvolutionFilter) (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image);
typedef void (GLAPIENTRY *Engine_glGetnSeparableFilter) (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span);
typedef void (GLAPIENTRY *Engine_glGetnHistogram) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
typedef void (GLAPIENTRY *Engine_glGetnMinmax) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
typedef void (GLAPIENTRY *Engine_glTextureBarrier) (void);
#endif
#ifdef GL_VERSION_4_6
typedef void (GLAPIENTRY *Engine_glSpecializeShader) (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
typedef void (GLAPIENTRY *Engine_glMultiDrawArraysIndirectCount) (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (GLAPIENTRY *Engine_glMultiDrawElementsIndirectCount) (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (GLAPIENTRY *Engine_glPolygonOffsetClamp) (GLfloat factor, GLfloat units, GLfloat clamp);
#endif

#define GenVariables() \
Engine_GLDEBUGPROC GLDEBUGPROC_ = nullptr; \
Engine_GLDEBUGPROCARB GLDEBUGPROCARB_ = nullptr; \
Engine_GLDEBUGPROCKHR GLDEBUGPROCKHR_ = nullptr; \
Engine_GLDEBUGPROCAMD GLDEBUGPROCAMD_ = nullptr; \
Engine_GLVULKANPROCNV GLVULKANPROCNV_ = nullptr; \
Engine_glCullFace glCullFace_ = nullptr; \
Engine_glFrontFace glFrontFace_ = nullptr; \
Engine_glHint glHint_ = nullptr; \
Engine_glLineWidth glLineWidth_ = nullptr; \
Engine_glPointSize glPointSize_ = nullptr; \
Engine_glPolygonMode glPolygonMode_ = nullptr; \
Engine_glScissor glScissor_ = nullptr; \
Engine_glTexParameterf glTexParameterf_ = nullptr; \
Engine_glTexParameterfv glTexParameterfv_ = nullptr; \
Engine_glTexParameteri glTexParameteri_ = nullptr; \
Engine_glTexParameteriv glTexParameteriv_ = nullptr; \
Engine_glTexImage1D glTexImage1D_ = nullptr; \
Engine_glTexImage2D glTexImage2D_ = nullptr; \
Engine_glDrawBuffer glDrawBuffer_ = nullptr; \
Engine_glClear glClear_ = nullptr; \
Engine_glClearColor glClearColor_ = nullptr; \
Engine_glClearStencil glClearStencil_ = nullptr; \
Engine_glClearDepth glClearDepth_ = nullptr; \
Engine_glStencilMask glStencilMask_ = nullptr; \
Engine_glColorMask glColorMask_ = nullptr; \
Engine_glDepthMask glDepthMask_ = nullptr; \
Engine_glDisable glDisable_ = nullptr; \
Engine_glEnable glEnable_ = nullptr; \
Engine_glFinish glFinish_ = nullptr; \
Engine_glFlush glFlush_ = nullptr; \
Engine_glBlendFunc glBlendFunc_ = nullptr; \
Engine_glLogicOp glLogicOp_ = nullptr; \
Engine_glStencilFunc glStencilFunc_ = nullptr; \
Engine_glStencilOp glStencilOp_ = nullptr; \
Engine_glDepthFunc glDepthFunc_ = nullptr; \
Engine_glPixelStoref glPixelStoref_ = nullptr; \
Engine_glPixelStorei glPixelStorei_ = nullptr; \
Engine_glReadBuffer glReadBuffer_ = nullptr; \
Engine_glReadPixels glReadPixels_ = nullptr; \
Engine_glGetBooleanv glGetBooleanv_ = nullptr; \
Engine_glGetDoublev glGetDoublev_ = nullptr; \
Engine_glGetFloatv glGetFloatv_ = nullptr; \
Engine_glGetIntegerv glGetIntegerv_ = nullptr; \
Engine_glGetTexImage glGetTexImage_ = nullptr; \
Engine_glGetTexParameterfv glGetTexParameterfv_ = nullptr; \
Engine_glGetTexParameteriv glGetTexParameteriv_ = nullptr; \
Engine_glGetTexLevelParameterfv glGetTexLevelParameterfv_ = nullptr; \
Engine_glGetTexLevelParameteriv glGetTexLevelParameteriv_ = nullptr; \
Engine_glDepthRange glDepthRange_ = nullptr; \
Engine_glViewport glViewport_ = nullptr; \
Engine_glDrawArrays glDrawArrays_ = nullptr; \
Engine_glDrawElements glDrawElements_ = nullptr; \
Engine_glPolygonOffset glPolygonOffset_ = nullptr; \
Engine_glCopyTexImage1D glCopyTexImage1D_ = nullptr; \
Engine_glCopyTexImage2D glCopyTexImage2D_ = nullptr; \
Engine_glCopyTexSubImage1D glCopyTexSubImage1D_ = nullptr; \
Engine_glCopyTexSubImage2D glCopyTexSubImage2D_ = nullptr; \
Engine_glTexSubImage1D glTexSubImage1D_ = nullptr; \
Engine_glTexSubImage2D glTexSubImage2D_ = nullptr; \
Engine_glBindTexture glBindTexture_ = nullptr; \
Engine_glDeleteTextures glDeleteTextures_ = nullptr; \
Engine_glGenTextures glGenTextures_ = nullptr; \
Engine_glDrawRangeElements glDrawRangeElements_ = nullptr; \
Engine_glTexImage3D glTexImage3D_ = nullptr; \
Engine_glTexSubImage3D glTexSubImage3D_ = nullptr; \
Engine_glCopyTexSubImage3D glCopyTexSubImage3D_ = nullptr; \
Engine_glActiveTexture glActiveTexture_ = nullptr; \
Engine_glSampleCoverage glSampleCoverage_ = nullptr; \
Engine_glCompressedTexImage3D glCompressedTexImage3D_ = nullptr; \
Engine_glCompressedTexImage2D glCompressedTexImage2D_ = nullptr; \
Engine_glCompressedTexImage1D glCompressedTexImage1D_ = nullptr; \
Engine_glCompressedTexSubImage3D glCompressedTexSubImage3D_ = nullptr; \
Engine_glCompressedTexSubImage2D glCompressedTexSubImage2D_ = nullptr; \
Engine_glCompressedTexSubImage1D glCompressedTexSubImage1D_ = nullptr; \
Engine_glGetCompressedTexImage glGetCompressedTexImage_ = nullptr; \
Engine_glBlendFuncSeparate glBlendFuncSeparate_ = nullptr; \
Engine_glMultiDrawArrays glMultiDrawArrays_ = nullptr; \
Engine_glMultiDrawElements glMultiDrawElements_ = nullptr; \
Engine_glPointParameterf glPointParameterf_ = nullptr; \
Engine_glPointParameterfv glPointParameterfv_ = nullptr; \
Engine_glPointParameteri glPointParameteri_ = nullptr; \
Engine_glPointParameteriv glPointParameteriv_ = nullptr; \
Engine_glBlendColor glBlendColor_ = nullptr; \
Engine_glBlendEquation glBlendEquation_ = nullptr; \
Engine_glGenQueries glGenQueries_ = nullptr; \
Engine_glDeleteQueries glDeleteQueries_ = nullptr; \
Engine_glBeginQuery glBeginQuery_ = nullptr; \
Engine_glEndQuery glEndQuery_ = nullptr; \
Engine_glGetQueryiv glGetQueryiv_ = nullptr; \
Engine_glGetQueryObjectiv glGetQueryObjectiv_ = nullptr; \
Engine_glGetQueryObjectuiv glGetQueryObjectuiv_ = nullptr; \
Engine_glBindBuffer glBindBuffer_ = nullptr; \
Engine_glDeleteBuffers glDeleteBuffers_ = nullptr; \
Engine_glGenBuffers glGenBuffers_ = nullptr; \
Engine_glBufferData glBufferData_ = nullptr; \
Engine_glBufferSubData glBufferSubData_ = nullptr; \
Engine_glGetBufferSubData glGetBufferSubData_ = nullptr; \
Engine_glGetBufferParameteriv glGetBufferParameteriv_ = nullptr; \
Engine_glGetBufferPointerv glGetBufferPointerv_ = nullptr; \
Engine_glBlendEquationSeparate glBlendEquationSeparate_ = nullptr; \
Engine_glDrawBuffers glDrawBuffers_ = nullptr; \
Engine_glStencilOpSeparate glStencilOpSeparate_ = nullptr; \
Engine_glStencilFuncSeparate glStencilFuncSeparate_ = nullptr; \
Engine_glStencilMaskSeparate glStencilMaskSeparate_ = nullptr; \
Engine_glAttachShader glAttachShader_ = nullptr; \
Engine_glBindAttribLocation glBindAttribLocation_ = nullptr; \
Engine_glCompileShader glCompileShader_ = nullptr; \
Engine_glDeleteProgram glDeleteProgram_ = nullptr; \
Engine_glDeleteShader glDeleteShader_ = nullptr; \
Engine_glDetachShader glDetachShader_ = nullptr; \
Engine_glDisableVertexAttribArray glDisableVertexAttribArray_ = nullptr; \
Engine_glEnableVertexAttribArray glEnableVertexAttribArray_ = nullptr; \
Engine_glGetActiveAttrib glGetActiveAttrib_ = nullptr; \
Engine_glGetActiveUniform glGetActiveUniform_ = nullptr; \
Engine_glGetAttachedShaders glGetAttachedShaders_ = nullptr; \
Engine_glGetProgramiv glGetProgramiv_ = nullptr; \
Engine_glGetProgramInfoLog glGetProgramInfoLog_ = nullptr; \
Engine_glGetShaderiv glGetShaderiv_ = nullptr; \
Engine_glGetShaderInfoLog glGetShaderInfoLog_ = nullptr; \
Engine_glGetShaderSource glGetShaderSource_ = nullptr; \
Engine_glGetUniformfv glGetUniformfv_ = nullptr; \
Engine_glGetUniformiv glGetUniformiv_ = nullptr; \
Engine_glGetVertexAttribdv glGetVertexAttribdv_ = nullptr; \
Engine_glGetVertexAttribfv glGetVertexAttribfv_ = nullptr; \
Engine_glGetVertexAttribiv glGetVertexAttribiv_ = nullptr; \
Engine_glGetVertexAttribPointerv glGetVertexAttribPointerv_ = nullptr; \
Engine_glLinkProgram glLinkProgram_ = nullptr; \
Engine_glShaderSource glShaderSource_ = nullptr; \
Engine_glUseProgram glUseProgram_ = nullptr; \
Engine_glUniform1f glUniform1f_ = nullptr; \
Engine_glUniform2f glUniform2f_ = nullptr; \
Engine_glUniform3f glUniform3f_ = nullptr; \
Engine_glUniform4f glUniform4f_ = nullptr; \
Engine_glUniform1i glUniform1i_ = nullptr; \
Engine_glUniform2i glUniform2i_ = nullptr; \
Engine_glUniform3i glUniform3i_ = nullptr; \
Engine_glUniform4i glUniform4i_ = nullptr; \
Engine_glUniform1fv glUniform1fv_ = nullptr; \
Engine_glUniform2fv glUniform2fv_ = nullptr; \
Engine_glUniform3fv glUniform3fv_ = nullptr; \
Engine_glUniform4fv glUniform4fv_ = nullptr; \
Engine_glUniform1iv glUniform1iv_ = nullptr; \
Engine_glUniform2iv glUniform2iv_ = nullptr; \
Engine_glUniform3iv glUniform3iv_ = nullptr; \
Engine_glUniform4iv glUniform4iv_ = nullptr; \
Engine_glUniformMatrix2fv glUniformMatrix2fv_ = nullptr; \
Engine_glUniformMatrix3fv glUniformMatrix3fv_ = nullptr; \
Engine_glUniformMatrix4fv glUniformMatrix4fv_ = nullptr; \
Engine_glValidateProgram glValidateProgram_ = nullptr; \
Engine_glVertexAttrib1d glVertexAttrib1d_ = nullptr; \
Engine_glVertexAttrib1dv glVertexAttrib1dv_ = nullptr; \
Engine_glVertexAttrib1f glVertexAttrib1f_ = nullptr; \
Engine_glVertexAttrib1fv glVertexAttrib1fv_ = nullptr; \
Engine_glVertexAttrib1s glVertexAttrib1s_ = nullptr; \
Engine_glVertexAttrib1sv glVertexAttrib1sv_ = nullptr; \
Engine_glVertexAttrib2d glVertexAttrib2d_ = nullptr; \
Engine_glVertexAttrib2dv glVertexAttrib2dv_ = nullptr; \
Engine_glVertexAttrib2f glVertexAttrib2f_ = nullptr; \
Engine_glVertexAttrib2fv glVertexAttrib2fv_ = nullptr; \
Engine_glVertexAttrib2s glVertexAttrib2s_ = nullptr; \
Engine_glVertexAttrib2sv glVertexAttrib2sv_ = nullptr; \
Engine_glVertexAttrib3d glVertexAttrib3d_ = nullptr; \
Engine_glVertexAttrib3dv glVertexAttrib3dv_ = nullptr; \
Engine_glVertexAttrib3f glVertexAttrib3f_ = nullptr; \
Engine_glVertexAttrib3fv glVertexAttrib3fv_ = nullptr; \
Engine_glVertexAttrib3s glVertexAttrib3s_ = nullptr; \
Engine_glVertexAttrib3sv glVertexAttrib3sv_ = nullptr; \
Engine_glVertexAttrib4Nbv glVertexAttrib4Nbv_ = nullptr; \
Engine_glVertexAttrib4Niv glVertexAttrib4Niv_ = nullptr; \
Engine_glVertexAttrib4Nsv glVertexAttrib4Nsv_ = nullptr; \
Engine_glVertexAttrib4Nub glVertexAttrib4Nub_ = nullptr; \
Engine_glVertexAttrib4Nubv glVertexAttrib4Nubv_ = nullptr; \
Engine_glVertexAttrib4Nuiv glVertexAttrib4Nuiv_ = nullptr; \
Engine_glVertexAttrib4Nusv glVertexAttrib4Nusv_ = nullptr; \
Engine_glVertexAttrib4bv glVertexAttrib4bv_ = nullptr; \
Engine_glVertexAttrib4d glVertexAttrib4d_ = nullptr; \
Engine_glVertexAttrib4dv glVertexAttrib4dv_ = nullptr; \
Engine_glVertexAttrib4f glVertexAttrib4f_ = nullptr; \
Engine_glVertexAttrib4fv glVertexAttrib4fv_ = nullptr; \
Engine_glVertexAttrib4iv glVertexAttrib4iv_ = nullptr; \
Engine_glVertexAttrib4s glVertexAttrib4s_ = nullptr; \
Engine_glVertexAttrib4sv glVertexAttrib4sv_ = nullptr; \
Engine_glVertexAttrib4ubv glVertexAttrib4ubv_ = nullptr; \
Engine_glVertexAttrib4uiv glVertexAttrib4uiv_ = nullptr; \
Engine_glVertexAttrib4usv glVertexAttrib4usv_ = nullptr; \
Engine_glVertexAttribPointer glVertexAttribPointer_ = nullptr; \
Engine_glUniformMatrix2x3fv glUniformMatrix2x3fv_ = nullptr; \
Engine_glUniformMatrix3x2fv glUniformMatrix3x2fv_ = nullptr; \
Engine_glUniformMatrix2x4fv glUniformMatrix2x4fv_ = nullptr; \
Engine_glUniformMatrix4x2fv glUniformMatrix4x2fv_ = nullptr; \
Engine_glUniformMatrix3x4fv glUniformMatrix3x4fv_ = nullptr; \
Engine_glUniformMatrix4x3fv glUniformMatrix4x3fv_ = nullptr; \
Engine_glColorMaski glColorMaski_ = nullptr; \
Engine_glGetBooleani_v glGetBooleani_v_ = nullptr; \
Engine_glGetIntegeri_v glGetIntegeri_v_ = nullptr; \
Engine_glEnablei glEnablei_ = nullptr; \
Engine_glDisablei glDisablei_ = nullptr; \
Engine_glBeginTransformFeedback glBeginTransformFeedback_ = nullptr; \
Engine_glEndTransformFeedback glEndTransformFeedback_ = nullptr; \
Engine_glBindBufferRange glBindBufferRange_ = nullptr; \
Engine_glBindBufferBase glBindBufferBase_ = nullptr; \
Engine_glTransformFeedbackVaryings glTransformFeedbackVaryings_ = nullptr; \
Engine_glGetTransformFeedbackVarying glGetTransformFeedbackVarying_ = nullptr; \
Engine_glClampColor glClampColor_ = nullptr; \
Engine_glBeginConditionalRender glBeginConditionalRender_ = nullptr; \
Engine_glEndConditionalRender glEndConditionalRender_ = nullptr; \
Engine_glVertexAttribIPointer glVertexAttribIPointer_ = nullptr; \
Engine_glGetVertexAttribIiv glGetVertexAttribIiv_ = nullptr; \
Engine_glGetVertexAttribIuiv glGetVertexAttribIuiv_ = nullptr; \
Engine_glVertexAttribI1i glVertexAttribI1i_ = nullptr; \
Engine_glVertexAttribI2i glVertexAttribI2i_ = nullptr; \
Engine_glVertexAttribI3i glVertexAttribI3i_ = nullptr; \
Engine_glVertexAttribI4i glVertexAttribI4i_ = nullptr; \
Engine_glVertexAttribI1ui glVertexAttribI1ui_ = nullptr; \
Engine_glVertexAttribI2ui glVertexAttribI2ui_ = nullptr; \
Engine_glVertexAttribI3ui glVertexAttribI3ui_ = nullptr; \
Engine_glVertexAttribI4ui glVertexAttribI4ui_ = nullptr; \
Engine_glVertexAttribI1iv glVertexAttribI1iv_ = nullptr; \
Engine_glVertexAttribI2iv glVertexAttribI2iv_ = nullptr; \
Engine_glVertexAttribI3iv glVertexAttribI3iv_ = nullptr; \
Engine_glVertexAttribI4iv glVertexAttribI4iv_ = nullptr; \
Engine_glVertexAttribI1uiv glVertexAttribI1uiv_ = nullptr; \
Engine_glVertexAttribI2uiv glVertexAttribI2uiv_ = nullptr; \
Engine_glVertexAttribI3uiv glVertexAttribI3uiv_ = nullptr; \
Engine_glVertexAttribI4uiv glVertexAttribI4uiv_ = nullptr; \
Engine_glVertexAttribI4bv glVertexAttribI4bv_ = nullptr; \
Engine_glVertexAttribI4sv glVertexAttribI4sv_ = nullptr; \
Engine_glVertexAttribI4ubv glVertexAttribI4ubv_ = nullptr; \
Engine_glVertexAttribI4usv glVertexAttribI4usv_ = nullptr; \
Engine_glGetUniformuiv glGetUniformuiv_ = nullptr; \
Engine_glBindFragDataLocation glBindFragDataLocation_ = nullptr; \
Engine_glUniform1ui glUniform1ui_ = nullptr; \
Engine_glUniform2ui glUniform2ui_ = nullptr; \
Engine_glUniform3ui glUniform3ui_ = nullptr; \
Engine_glUniform4ui glUniform4ui_ = nullptr; \
Engine_glUniform1uiv glUniform1uiv_ = nullptr; \
Engine_glUniform2uiv glUniform2uiv_ = nullptr; \
Engine_glUniform3uiv glUniform3uiv_ = nullptr; \
Engine_glUniform4uiv glUniform4uiv_ = nullptr; \
Engine_glTexParameterIiv glTexParameterIiv_ = nullptr; \
Engine_glTexParameterIuiv glTexParameterIuiv_ = nullptr; \
Engine_glGetTexParameterIiv glGetTexParameterIiv_ = nullptr; \
Engine_glGetTexParameterIuiv glGetTexParameterIuiv_ = nullptr; \
Engine_glClearBufferiv glClearBufferiv_ = nullptr; \
Engine_glClearBufferuiv glClearBufferuiv_ = nullptr; \
Engine_glClearBufferfv glClearBufferfv_ = nullptr; \
Engine_glClearBufferfi glClearBufferfi_ = nullptr; \
Engine_glBindRenderbuffer glBindRenderbuffer_ = nullptr; \
Engine_glDeleteRenderbuffers glDeleteRenderbuffers_ = nullptr; \
Engine_glGenRenderbuffers glGenRenderbuffers_ = nullptr; \
Engine_glRenderbufferStorage glRenderbufferStorage_ = nullptr; \
Engine_glGetRenderbufferParameteriv glGetRenderbufferParameteriv_ = nullptr; \
Engine_glBindFramebuffer glBindFramebuffer_ = nullptr; \
Engine_glDeleteFramebuffers glDeleteFramebuffers_ = nullptr; \
Engine_glGenFramebuffers glGenFramebuffers_ = nullptr; \
Engine_glFramebufferTexture1D glFramebufferTexture1D_ = nullptr; \
Engine_glFramebufferTexture2D glFramebufferTexture2D_ = nullptr; \
Engine_glFramebufferTexture3D glFramebufferTexture3D_ = nullptr; \
Engine_glFramebufferRenderbuffer glFramebufferRenderbuffer_ = nullptr; \
Engine_glGetFramebufferAttachmentParameteriv glGetFramebufferAttachmentParameteriv_ = nullptr; \
Engine_glGenerateMipmap glGenerateMipmap_ = nullptr; \
Engine_glBlitFramebuffer glBlitFramebuffer_ = nullptr; \
Engine_glRenderbufferStorageMultisample glRenderbufferStorageMultisample_ = nullptr; \
Engine_glFramebufferTextureLayer glFramebufferTextureLayer_ = nullptr; \
Engine_glFlushMappedBufferRange glFlushMappedBufferRange_ = nullptr; \
Engine_glBindVertexArray glBindVertexArray_ = nullptr; \
Engine_glDeleteVertexArrays glDeleteVertexArrays_ = nullptr; \
Engine_glGenVertexArrays glGenVertexArrays_ = nullptr; \
Engine_glDrawArraysInstanced glDrawArraysInstanced_ = nullptr; \
Engine_glDrawElementsInstanced glDrawElementsInstanced_ = nullptr; \
Engine_glTexBuffer glTexBuffer_ = nullptr; \
Engine_glPrimitiveRestartIndex glPrimitiveRestartIndex_ = nullptr; \
Engine_glCopyBufferSubData glCopyBufferSubData_ = nullptr; \
Engine_glGetUniformIndices glGetUniformIndices_ = nullptr; \
Engine_glGetActiveUniformsiv glGetActiveUniformsiv_ = nullptr; \
Engine_glGetActiveUniformName glGetActiveUniformName_ = nullptr; \
Engine_glGetActiveUniformBlockiv glGetActiveUniformBlockiv_ = nullptr; \
Engine_glGetActiveUniformBlockName glGetActiveUniformBlockName_ = nullptr; \
Engine_glUniformBlockBinding glUniformBlockBinding_ = nullptr; \
Engine_glDrawElementsBaseVertex glDrawElementsBaseVertex_ = nullptr; \
Engine_glDrawRangeElementsBaseVertex glDrawRangeElementsBaseVertex_ = nullptr; \
Engine_glDrawElementsInstancedBaseVertex glDrawElementsInstancedBaseVertex_ = nullptr; \
Engine_glMultiDrawElementsBaseVertex glMultiDrawElementsBaseVertex_ = nullptr; \
Engine_glProvokingVertex glProvokingVertex_ = nullptr; \
Engine_glDeleteSync glDeleteSync_ = nullptr; \
Engine_glWaitSync glWaitSync_ = nullptr; \
Engine_glGetInteger64v glGetInteger64v_ = nullptr; \
Engine_glGetSynciv glGetSynciv_ = nullptr; \
Engine_glGetInteger64i_v glGetInteger64i_v_ = nullptr; \
Engine_glGetBufferParameteri64v glGetBufferParameteri64v_ = nullptr; \
Engine_glFramebufferTexture glFramebufferTexture_ = nullptr; \
Engine_glTexImage2DMultisample glTexImage2DMultisample_ = nullptr; \
Engine_glTexImage3DMultisample glTexImage3DMultisample_ = nullptr; \
Engine_glGetMultisamplefv glGetMultisamplefv_ = nullptr; \
Engine_glSampleMaski glSampleMaski_ = nullptr; \
Engine_glBindFragDataLocationIndexed glBindFragDataLocationIndexed_ = nullptr; \
Engine_glGenSamplers glGenSamplers_ = nullptr; \
Engine_glDeleteSamplers glDeleteSamplers_ = nullptr; \
Engine_glBindSampler glBindSampler_ = nullptr; \
Engine_glSamplerParameteri glSamplerParameteri_ = nullptr; \
Engine_glSamplerParameteriv glSamplerParameteriv_ = nullptr; \
Engine_glSamplerParameterf glSamplerParameterf_ = nullptr; \
Engine_glSamplerParameterfv glSamplerParameterfv_ = nullptr; \
Engine_glSamplerParameterIiv glSamplerParameterIiv_ = nullptr; \
Engine_glSamplerParameterIuiv glSamplerParameterIuiv_ = nullptr; \
Engine_glGetSamplerParameteriv glGetSamplerParameteriv_ = nullptr; \
Engine_glGetSamplerParameterIiv glGetSamplerParameterIiv_ = nullptr; \
Engine_glGetSamplerParameterfv glGetSamplerParameterfv_ = nullptr; \
Engine_glGetSamplerParameterIuiv glGetSamplerParameterIuiv_ = nullptr; \
Engine_glQueryCounter glQueryCounter_ = nullptr; \
Engine_glGetQueryObjecti64v glGetQueryObjecti64v_ = nullptr; \
Engine_glGetQueryObjectui64v glGetQueryObjectui64v_ = nullptr; \
Engine_glVertexAttribDivisor glVertexAttribDivisor_ = nullptr; \
Engine_glVertexAttribP1ui glVertexAttribP1ui_ = nullptr; \
Engine_glVertexAttribP1uiv glVertexAttribP1uiv_ = nullptr; \
Engine_glVertexAttribP2ui glVertexAttribP2ui_ = nullptr; \
Engine_glVertexAttribP2uiv glVertexAttribP2uiv_ = nullptr; \
Engine_glVertexAttribP3ui glVertexAttribP3ui_ = nullptr; \
Engine_glVertexAttribP3uiv glVertexAttribP3uiv_ = nullptr; \
Engine_glVertexAttribP4ui glVertexAttribP4ui_ = nullptr; \
Engine_glVertexAttribP4uiv glVertexAttribP4uiv_ = nullptr; \
Engine_glVertexP2ui glVertexP2ui_ = nullptr; \
Engine_glVertexP2uiv glVertexP2uiv_ = nullptr; \
Engine_glVertexP3ui glVertexP3ui_ = nullptr; \
Engine_glVertexP3uiv glVertexP3uiv_ = nullptr; \
Engine_glVertexP4ui glVertexP4ui_ = nullptr; \
Engine_glVertexP4uiv glVertexP4uiv_ = nullptr; \
Engine_glTexCoordP1ui glTexCoordP1ui_ = nullptr; \
Engine_glTexCoordP1uiv glTexCoordP1uiv_ = nullptr; \
Engine_glTexCoordP2ui glTexCoordP2ui_ = nullptr; \
Engine_glTexCoordP2uiv glTexCoordP2uiv_ = nullptr; \
Engine_glTexCoordP3ui glTexCoordP3ui_ = nullptr; \
Engine_glTexCoordP3uiv glTexCoordP3uiv_ = nullptr; \
Engine_glTexCoordP4ui glTexCoordP4ui_ = nullptr; \
Engine_glTexCoordP4uiv glTexCoordP4uiv_ = nullptr; \
Engine_glMultiTexCoordP1ui glMultiTexCoordP1ui_ = nullptr; \
Engine_glMultiTexCoordP1uiv glMultiTexCoordP1uiv_ = nullptr; \
Engine_glMultiTexCoordP2ui glMultiTexCoordP2ui_ = nullptr; \
Engine_glMultiTexCoordP2uiv glMultiTexCoordP2uiv_ = nullptr; \
Engine_glMultiTexCoordP3ui glMultiTexCoordP3ui_ = nullptr; \
Engine_glMultiTexCoordP3uiv glMultiTexCoordP3uiv_ = nullptr; \
Engine_glMultiTexCoordP4ui glMultiTexCoordP4ui_ = nullptr; \
Engine_glMultiTexCoordP4uiv glMultiTexCoordP4uiv_ = nullptr; \
Engine_glNormalP3ui glNormalP3ui_ = nullptr; \
Engine_glNormalP3uiv glNormalP3uiv_ = nullptr; \
Engine_glColorP3ui glColorP3ui_ = nullptr; \
Engine_glColorP3uiv glColorP3uiv_ = nullptr; \
Engine_glColorP4ui glColorP4ui_ = nullptr; \
Engine_glColorP4uiv glColorP4uiv_ = nullptr; \
Engine_glSecondaryColorP3ui glSecondaryColorP3ui_ = nullptr; \
Engine_glSecondaryColorP3uiv glSecondaryColorP3uiv_ = nullptr; \
Engine_glMinSampleShading glMinSampleShading_ = nullptr; \
Engine_glBlendEquationi glBlendEquationi_ = nullptr; \
Engine_glBlendEquationSeparatei glBlendEquationSeparatei_ = nullptr; \
Engine_glBlendFunci glBlendFunci_ = nullptr; \
Engine_glBlendFuncSeparatei glBlendFuncSeparatei_ = nullptr; \
Engine_glDrawArraysIndirect glDrawArraysIndirect_ = nullptr; \
Engine_glDrawElementsIndirect glDrawElementsIndirect_ = nullptr; \
Engine_glUniform1d glUniform1d_ = nullptr; \
Engine_glUniform2d glUniform2d_ = nullptr; \
Engine_glUniform3d glUniform3d_ = nullptr; \
Engine_glUniform4d glUniform4d_ = nullptr; \
Engine_glUniform1dv glUniform1dv_ = nullptr; \
Engine_glUniform2dv glUniform2dv_ = nullptr; \
Engine_glUniform3dv glUniform3dv_ = nullptr; \
Engine_glUniform4dv glUniform4dv_ = nullptr; \
Engine_glUniformMatrix2dv glUniformMatrix2dv_ = nullptr; \
Engine_glUniformMatrix3dv glUniformMatrix3dv_ = nullptr; \
Engine_glUniformMatrix4dv glUniformMatrix4dv_ = nullptr; \
Engine_glUniformMatrix2x3dv glUniformMatrix2x3dv_ = nullptr; \
Engine_glUniformMatrix2x4dv glUniformMatrix2x4dv_ = nullptr; \
Engine_glUniformMatrix3x2dv glUniformMatrix3x2dv_ = nullptr; \
Engine_glUniformMatrix3x4dv glUniformMatrix3x4dv_ = nullptr; \
Engine_glUniformMatrix4x2dv glUniformMatrix4x2dv_ = nullptr; \
Engine_glUniformMatrix4x3dv glUniformMatrix4x3dv_ = nullptr; \
Engine_glGetUniformdv glGetUniformdv_ = nullptr; \
Engine_glGetActiveSubroutineUniformiv glGetActiveSubroutineUniformiv_ = nullptr; \
Engine_glGetActiveSubroutineUniformName glGetActiveSubroutineUniformName_ = nullptr; \
Engine_glGetActiveSubroutineName glGetActiveSubroutineName_ = nullptr; \
Engine_glUniformSubroutinesuiv glUniformSubroutinesuiv_ = nullptr; \
Engine_glGetUniformSubroutineuiv glGetUniformSubroutineuiv_ = nullptr; \
Engine_glGetProgramStageiv glGetProgramStageiv_ = nullptr; \
Engine_glPatchParameteri glPatchParameteri_ = nullptr; \
Engine_glPatchParameterfv glPatchParameterfv_ = nullptr; \
Engine_glBindTransformFeedback glBindTransformFeedback_ = nullptr; \
Engine_glDeleteTransformFeedbacks glDeleteTransformFeedbacks_ = nullptr; \
Engine_glGenTransformFeedbacks glGenTransformFeedbacks_ = nullptr; \
Engine_glPauseTransformFeedback glPauseTransformFeedback_ = nullptr; \
Engine_glResumeTransformFeedback glResumeTransformFeedback_ = nullptr; \
Engine_glDrawTransformFeedback glDrawTransformFeedback_ = nullptr; \
Engine_glDrawTransformFeedbackStream glDrawTransformFeedbackStream_ = nullptr; \
Engine_glBeginQueryIndexed glBeginQueryIndexed_ = nullptr; \
Engine_glEndQueryIndexed glEndQueryIndexed_ = nullptr; \
Engine_glGetQueryIndexediv glGetQueryIndexediv_ = nullptr; \
Engine_glReleaseShaderCompiler glReleaseShaderCompiler_ = nullptr; \
Engine_glShaderBinary glShaderBinary_ = nullptr; \
Engine_glGetShaderPrecisionFormat glGetShaderPrecisionFormat_ = nullptr; \
Engine_glDepthRangef glDepthRangef_ = nullptr; \
Engine_glClearDepthf glClearDepthf_ = nullptr; \
Engine_glGetProgramBinary glGetProgramBinary_ = nullptr; \
Engine_glProgramBinary glProgramBinary_ = nullptr; \
Engine_glProgramParameteri glProgramParameteri_ = nullptr; \
Engine_glUseProgramStages glUseProgramStages_ = nullptr; \
Engine_glActiveShaderProgram glActiveShaderProgram_ = nullptr; \
Engine_glBindProgramPipeline glBindProgramPipeline_ = nullptr; \
Engine_glDeleteProgramPipelines glDeleteProgramPipelines_ = nullptr; \
Engine_glGenProgramPipelines glGenProgramPipelines_ = nullptr; \
Engine_glGetProgramPipelineiv glGetProgramPipelineiv_ = nullptr; \
Engine_glProgramUniform1i glProgramUniform1i_ = nullptr; \
Engine_glProgramUniform1iv glProgramUniform1iv_ = nullptr; \
Engine_glProgramUniform1f glProgramUniform1f_ = nullptr; \
Engine_glProgramUniform1fv glProgramUniform1fv_ = nullptr; \
Engine_glProgramUniform1d glProgramUniform1d_ = nullptr; \
Engine_glProgramUniform1dv glProgramUniform1dv_ = nullptr; \
Engine_glProgramUniform1ui glProgramUniform1ui_ = nullptr; \
Engine_glProgramUniform1uiv glProgramUniform1uiv_ = nullptr; \
Engine_glProgramUniform2i glProgramUniform2i_ = nullptr; \
Engine_glProgramUniform2iv glProgramUniform2iv_ = nullptr; \
Engine_glProgramUniform2f glProgramUniform2f_ = nullptr; \
Engine_glProgramUniform2fv glProgramUniform2fv_ = nullptr; \
Engine_glProgramUniform2d glProgramUniform2d_ = nullptr; \
Engine_glProgramUniform2dv glProgramUniform2dv_ = nullptr; \
Engine_glProgramUniform2ui glProgramUniform2ui_ = nullptr; \
Engine_glProgramUniform2uiv glProgramUniform2uiv_ = nullptr; \
Engine_glProgramUniform3i glProgramUniform3i_ = nullptr; \
Engine_glProgramUniform3iv glProgramUniform3iv_ = nullptr; \
Engine_glProgramUniform3f glProgramUniform3f_ = nullptr; \
Engine_glProgramUniform3fv glProgramUniform3fv_ = nullptr; \
Engine_glProgramUniform3d glProgramUniform3d_ = nullptr; \
Engine_glProgramUniform3dv glProgramUniform3dv_ = nullptr; \
Engine_glProgramUniform3ui glProgramUniform3ui_ = nullptr; \
Engine_glProgramUniform3uiv glProgramUniform3uiv_ = nullptr; \
Engine_glProgramUniform4i glProgramUniform4i_ = nullptr; \
Engine_glProgramUniform4iv glProgramUniform4iv_ = nullptr; \
Engine_glProgramUniform4f glProgramUniform4f_ = nullptr; \
Engine_glProgramUniform4fv glProgramUniform4fv_ = nullptr; \
Engine_glProgramUniform4d glProgramUniform4d_ = nullptr; \
Engine_glProgramUniform4dv glProgramUniform4dv_ = nullptr; \
Engine_glProgramUniform4ui glProgramUniform4ui_ = nullptr; \
Engine_glProgramUniform4uiv glProgramUniform4uiv_ = nullptr; \
Engine_glProgramUniformMatrix2fv glProgramUniformMatrix2fv_ = nullptr; \
Engine_glProgramUniformMatrix3fv glProgramUniformMatrix3fv_ = nullptr; \
Engine_glProgramUniformMatrix4fv glProgramUniformMatrix4fv_ = nullptr; \
Engine_glProgramUniformMatrix2dv glProgramUniformMatrix2dv_ = nullptr; \
Engine_glProgramUniformMatrix3dv glProgramUniformMatrix3dv_ = nullptr; \
Engine_glProgramUniformMatrix4dv glProgramUniformMatrix4dv_ = nullptr; \
Engine_glProgramUniformMatrix2x3fv glProgramUniformMatrix2x3fv_ = nullptr; \
Engine_glProgramUniformMatrix3x2fv glProgramUniformMatrix3x2fv_ = nullptr; \
Engine_glProgramUniformMatrix2x4fv glProgramUniformMatrix2x4fv_ = nullptr; \
Engine_glProgramUniformMatrix4x2fv glProgramUniformMatrix4x2fv_ = nullptr; \
Engine_glProgramUniformMatrix3x4fv glProgramUniformMatrix3x4fv_ = nullptr; \
Engine_glProgramUniformMatrix4x3fv glProgramUniformMatrix4x3fv_ = nullptr; \
Engine_glProgramUniformMatrix2x3dv glProgramUniformMatrix2x3dv_ = nullptr; \
Engine_glProgramUniformMatrix3x2dv glProgramUniformMatrix3x2dv_ = nullptr; \
Engine_glProgramUniformMatrix2x4dv glProgramUniformMatrix2x4dv_ = nullptr; \
Engine_glProgramUniformMatrix4x2dv glProgramUniformMatrix4x2dv_ = nullptr; \
Engine_glProgramUniformMatrix3x4dv glProgramUniformMatrix3x4dv_ = nullptr; \
Engine_glProgramUniformMatrix4x3dv glProgramUniformMatrix4x3dv_ = nullptr; \
Engine_glValidateProgramPipeline glValidateProgramPipeline_ = nullptr; \
Engine_glGetProgramPipelineInfoLog glGetProgramPipelineInfoLog_ = nullptr; \
Engine_glVertexAttribL1d glVertexAttribL1d_ = nullptr; \
Engine_glVertexAttribL2d glVertexAttribL2d_ = nullptr; \
Engine_glVertexAttribL3d glVertexAttribL3d_ = nullptr; \
Engine_glVertexAttribL4d glVertexAttribL4d_ = nullptr; \
Engine_glVertexAttribL1dv glVertexAttribL1dv_ = nullptr; \
Engine_glVertexAttribL2dv glVertexAttribL2dv_ = nullptr; \
Engine_glVertexAttribL3dv glVertexAttribL3dv_ = nullptr; \
Engine_glVertexAttribL4dv glVertexAttribL4dv_ = nullptr; \
Engine_glVertexAttribLPointer glVertexAttribLPointer_ = nullptr; \
Engine_glGetVertexAttribLdv glGetVertexAttribLdv_ = nullptr; \
Engine_glViewportArrayv glViewportArrayv_ = nullptr; \
Engine_glViewportIndexedf glViewportIndexedf_ = nullptr; \
Engine_glViewportIndexedfv glViewportIndexedfv_ = nullptr; \
Engine_glScissorArrayv glScissorArrayv_ = nullptr; \
Engine_glScissorIndexed glScissorIndexed_ = nullptr; \
Engine_glScissorIndexedv glScissorIndexedv_ = nullptr; \
Engine_glDepthRangeArrayv glDepthRangeArrayv_ = nullptr; \
Engine_glDepthRangeIndexed glDepthRangeIndexed_ = nullptr; \
Engine_glGetFloati_v glGetFloati_v_ = nullptr; \
Engine_glGetDoublei_v glGetDoublei_v_ = nullptr; \
Engine_glDrawArraysInstancedBaseInstance glDrawArraysInstancedBaseInstance_ = nullptr; \
Engine_glDrawElementsInstancedBaseInstance glDrawElementsInstancedBaseInstance_ = nullptr; \
Engine_glDrawElementsInstancedBaseVertexBaseInstance glDrawElementsInstancedBaseVertexBaseInstance_ = nullptr; \
Engine_glGetInternalformativ glGetInternalformativ_ = nullptr; \
Engine_glGetActiveAtomicCounterBufferiv glGetActiveAtomicCounterBufferiv_ = nullptr; \
Engine_glBindImageTexture glBindImageTexture_ = nullptr; \
Engine_glMemoryBarrier glMemoryBarrier_ = nullptr; \
Engine_glTexStorage1D glTexStorage1D_ = nullptr; \
Engine_glTexStorage2D glTexStorage2D_ = nullptr; \
Engine_glTexStorage3D glTexStorage3D_ = nullptr; \
Engine_glDrawTransformFeedbackInstanced glDrawTransformFeedbackInstanced_ = nullptr; \
Engine_glDrawTransformFeedbackStreamInstanced glDrawTransformFeedbackStreamInstanced_ = nullptr; \
Engine_glClearBufferData glClearBufferData_ = nullptr; \
Engine_glClearBufferSubData glClearBufferSubData_ = nullptr; \
Engine_glDispatchCompute glDispatchCompute_ = nullptr; \
Engine_glDispatchComputeIndirect glDispatchComputeIndirect_ = nullptr; \
Engine_glCopyImageSubData glCopyImageSubData_ = nullptr; \
Engine_glFramebufferParameteri glFramebufferParameteri_ = nullptr; \
Engine_glGetFramebufferParameteriv glGetFramebufferParameteriv_ = nullptr; \
Engine_glGetInternalformati64v glGetInternalformati64v_ = nullptr; \
Engine_glInvalidateTexSubImage glInvalidateTexSubImage_ = nullptr; \
Engine_glInvalidateTexImage glInvalidateTexImage_ = nullptr; \
Engine_glInvalidateBufferSubData glInvalidateBufferSubData_ = nullptr; \
Engine_glInvalidateBufferData glInvalidateBufferData_ = nullptr; \
Engine_glInvalidateFramebuffer glInvalidateFramebuffer_ = nullptr; \
Engine_glInvalidateSubFramebuffer glInvalidateSubFramebuffer_ = nullptr; \
Engine_glMultiDrawArraysIndirect glMultiDrawArraysIndirect_ = nullptr; \
Engine_glMultiDrawElementsIndirect glMultiDrawElementsIndirect_ = nullptr; \
Engine_glGetProgramInterfaceiv glGetProgramInterfaceiv_ = nullptr; \
Engine_glGetProgramResourceName glGetProgramResourceName_ = nullptr; \
Engine_glGetProgramResourceiv glGetProgramResourceiv_ = nullptr; \
Engine_glShaderStorageBlockBinding glShaderStorageBlockBinding_ = nullptr; \
Engine_glTexBufferRange glTexBufferRange_ = nullptr; \
Engine_glTexStorage2DMultisample glTexStorage2DMultisample_ = nullptr; \
Engine_glTexStorage3DMultisample glTexStorage3DMultisample_ = nullptr; \
Engine_glTextureView glTextureView_ = nullptr; \
Engine_glBindVertexBuffer glBindVertexBuffer_ = nullptr; \
Engine_glVertexAttribFormat glVertexAttribFormat_ = nullptr; \
Engine_glVertexAttribIFormat glVertexAttribIFormat_ = nullptr; \
Engine_glVertexAttribLFormat glVertexAttribLFormat_ = nullptr; \
Engine_glVertexAttribBinding glVertexAttribBinding_ = nullptr; \
Engine_glVertexBindingDivisor glVertexBindingDivisor_ = nullptr; \
Engine_glDebugMessageControl glDebugMessageControl_ = nullptr; \
Engine_glDebugMessageInsert glDebugMessageInsert_ = nullptr; \
Engine_glDebugMessageCallback glDebugMessageCallback_ = nullptr; \
Engine_glPushDebugGroup glPushDebugGroup_ = nullptr; \
Engine_glPopDebugGroup glPopDebugGroup_ = nullptr; \
Engine_glObjectLabel glObjectLabel_ = nullptr; \
Engine_glGetObjectLabel glGetObjectLabel_ = nullptr; \
Engine_glObjectPtrLabel glObjectPtrLabel_ = nullptr; \
Engine_glGetObjectPtrLabel glGetObjectPtrLabel_ = nullptr; \
Engine_glGetPointerv glGetPointerv_ = nullptr; \
Engine_glBufferStorage glBufferStorage_ = nullptr; \
Engine_glClearTexImage glClearTexImage_ = nullptr; \
Engine_glClearTexSubImage glClearTexSubImage_ = nullptr; \
Engine_glBindBuffersBase glBindBuffersBase_ = nullptr; \
Engine_glBindBuffersRange glBindBuffersRange_ = nullptr; \
Engine_glBindTextures glBindTextures_ = nullptr; \
Engine_glBindSamplers glBindSamplers_ = nullptr; \
Engine_glBindImageTextures glBindImageTextures_ = nullptr; \
Engine_glBindVertexBuffers glBindVertexBuffers_ = nullptr; \
Engine_glClipControl glClipControl_ = nullptr; \
Engine_glCreateTransformFeedbacks glCreateTransformFeedbacks_ = nullptr; \
Engine_glTransformFeedbackBufferBase glTransformFeedbackBufferBase_ = nullptr; \
Engine_glTransformFeedbackBufferRange glTransformFeedbackBufferRange_ = nullptr; \
Engine_glGetTransformFeedbackiv glGetTransformFeedbackiv_ = nullptr; \
Engine_glGetTransformFeedbacki_v glGetTransformFeedbacki_v_ = nullptr; \
Engine_glGetTransformFeedbacki64_v glGetTransformFeedbacki64_v_ = nullptr; \
Engine_glCreateBuffers glCreateBuffers_ = nullptr; \
Engine_glNamedBufferStorage glNamedBufferStorage_ = nullptr; \
Engine_glNamedBufferData glNamedBufferData_ = nullptr; \
Engine_glNamedBufferSubData glNamedBufferSubData_ = nullptr; \
Engine_glCopyNamedBufferSubData glCopyNamedBufferSubData_ = nullptr; \
Engine_glClearNamedBufferData glClearNamedBufferData_ = nullptr; \
Engine_glClearNamedBufferSubData glClearNamedBufferSubData_ = nullptr; \
Engine_glFlushMappedNamedBufferRange glFlushMappedNamedBufferRange_ = nullptr; \
Engine_glGetNamedBufferParameteriv glGetNamedBufferParameteriv_ = nullptr; \
Engine_glGetNamedBufferParameteri64v glGetNamedBufferParameteri64v_ = nullptr; \
Engine_glGetNamedBufferPointerv glGetNamedBufferPointerv_ = nullptr; \
Engine_glGetNamedBufferSubData glGetNamedBufferSubData_ = nullptr; \
Engine_glCreateFramebuffers glCreateFramebuffers_ = nullptr; \
Engine_glNamedFramebufferRenderbuffer glNamedFramebufferRenderbuffer_ = nullptr; \
Engine_glNamedFramebufferParameteri glNamedFramebufferParameteri_ = nullptr; \
Engine_glNamedFramebufferTexture glNamedFramebufferTexture_ = nullptr; \
Engine_glNamedFramebufferTextureLayer glNamedFramebufferTextureLayer_ = nullptr; \
Engine_glNamedFramebufferDrawBuffer glNamedFramebufferDrawBuffer_ = nullptr; \
Engine_glNamedFramebufferDrawBuffers glNamedFramebufferDrawBuffers_ = nullptr; \
Engine_glNamedFramebufferReadBuffer glNamedFramebufferReadBuffer_ = nullptr; \
Engine_glInvalidateNamedFramebufferData glInvalidateNamedFramebufferData_ = nullptr; \
Engine_glInvalidateNamedFramebufferSubData glInvalidateNamedFramebufferSubData_ = nullptr; \
Engine_glClearNamedFramebufferiv glClearNamedFramebufferiv_ = nullptr; \
Engine_glClearNamedFramebufferuiv glClearNamedFramebufferuiv_ = nullptr; \
Engine_glClearNamedFramebufferfv glClearNamedFramebufferfv_ = nullptr; \
Engine_glClearNamedFramebufferfi glClearNamedFramebufferfi_ = nullptr; \
Engine_glBlitNamedFramebuffer glBlitNamedFramebuffer_ = nullptr; \
Engine_glGetNamedFramebufferParameteriv glGetNamedFramebufferParameteriv_ = nullptr; \
Engine_glGetNamedFramebufferAttachmentParameteriv glGetNamedFramebufferAttachmentParameteriv_ = nullptr; \
Engine_glCreateRenderbuffers glCreateRenderbuffers_ = nullptr; \
Engine_glNamedRenderbufferStorage glNamedRenderbufferStorage_ = nullptr; \
Engine_glNamedRenderbufferStorageMultisample glNamedRenderbufferStorageMultisample_ = nullptr; \
Engine_glGetNamedRenderbufferParameteriv glGetNamedRenderbufferParameteriv_ = nullptr; \
Engine_glCreateTextures glCreateTextures_ = nullptr; \
Engine_glTextureBuffer glTextureBuffer_ = nullptr; \
Engine_glTextureBufferRange glTextureBufferRange_ = nullptr; \
Engine_glTextureStorage1D glTextureStorage1D_ = nullptr; \
Engine_glTextureStorage2D glTextureStorage2D_ = nullptr; \
Engine_glTextureStorage3D glTextureStorage3D_ = nullptr; \
Engine_glTextureStorage2DMultisample glTextureStorage2DMultisample_ = nullptr; \
Engine_glTextureStorage3DMultisample glTextureStorage3DMultisample_ = nullptr; \
Engine_glTextureSubImage1D glTextureSubImage1D_ = nullptr; \
Engine_glTextureSubImage2D glTextureSubImage2D_ = nullptr; \
Engine_glTextureSubImage3D glTextureSubImage3D_ = nullptr; \
Engine_glCompressedTextureSubImage1D glCompressedTextureSubImage1D_ = nullptr; \
Engine_glCompressedTextureSubImage2D glCompressedTextureSubImage2D_ = nullptr; \
Engine_glCompressedTextureSubImage3D glCompressedTextureSubImage3D_ = nullptr; \
Engine_glCopyTextureSubImage1D glCopyTextureSubImage1D_ = nullptr; \
Engine_glCopyTextureSubImage2D glCopyTextureSubImage2D_ = nullptr; \
Engine_glCopyTextureSubImage3D glCopyTextureSubImage3D_ = nullptr; \
Engine_glTextureParameterf glTextureParameterf_ = nullptr; \
Engine_glTextureParameterfv glTextureParameterfv_ = nullptr; \
Engine_glTextureParameteri glTextureParameteri_ = nullptr; \
Engine_glTextureParameterIiv glTextureParameterIiv_ = nullptr; \
Engine_glTextureParameterIuiv glTextureParameterIuiv_ = nullptr; \
Engine_glTextureParameteriv glTextureParameteriv_ = nullptr; \
Engine_glGenerateTextureMipmap glGenerateTextureMipmap_ = nullptr; \
Engine_glBindTextureUnit glBindTextureUnit_ = nullptr; \
Engine_glGetTextureImage glGetTextureImage_ = nullptr; \
Engine_glGetCompressedTextureImage glGetCompressedTextureImage_ = nullptr; \
Engine_glGetTextureLevelParameterfv glGetTextureLevelParameterfv_ = nullptr; \
Engine_glGetTextureLevelParameteriv glGetTextureLevelParameteriv_ = nullptr; \
Engine_glGetTextureParameterfv glGetTextureParameterfv_ = nullptr; \
Engine_glGetTextureParameterIiv glGetTextureParameterIiv_ = nullptr; \
Engine_glGetTextureParameterIuiv glGetTextureParameterIuiv_ = nullptr; \
Engine_glGetTextureParameteriv glGetTextureParameteriv_ = nullptr; \
Engine_glCreateVertexArrays glCreateVertexArrays_ = nullptr; \
Engine_glDisableVertexArrayAttrib glDisableVertexArrayAttrib_ = nullptr; \
Engine_glEnableVertexArrayAttrib glEnableVertexArrayAttrib_ = nullptr; \
Engine_glVertexArrayElementBuffer glVertexArrayElementBuffer_ = nullptr; \
Engine_glVertexArrayVertexBuffer glVertexArrayVertexBuffer_ = nullptr; \
Engine_glVertexArrayVertexBuffers glVertexArrayVertexBuffers_ = nullptr; \
Engine_glVertexArrayAttribBinding glVertexArrayAttribBinding_ = nullptr; \
Engine_glVertexArrayAttribFormat glVertexArrayAttribFormat_ = nullptr; \
Engine_glVertexArrayAttribIFormat glVertexArrayAttribIFormat_ = nullptr; \
Engine_glVertexArrayAttribLFormat glVertexArrayAttribLFormat_ = nullptr; \
Engine_glVertexArrayBindingDivisor glVertexArrayBindingDivisor_ = nullptr; \
Engine_glGetVertexArrayiv glGetVertexArrayiv_ = nullptr; \
Engine_glGetVertexArrayIndexediv glGetVertexArrayIndexediv_ = nullptr; \
Engine_glGetVertexArrayIndexed64iv glGetVertexArrayIndexed64iv_ = nullptr; \
Engine_glCreateSamplers glCreateSamplers_ = nullptr; \
Engine_glCreateProgramPipelines glCreateProgramPipelines_ = nullptr; \
Engine_glCreateQueries glCreateQueries_ = nullptr; \
Engine_glGetQueryBufferObjecti64v glGetQueryBufferObjecti64v_ = nullptr; \
Engine_glGetQueryBufferObjectiv glGetQueryBufferObjectiv_ = nullptr; \
Engine_glGetQueryBufferObjectui64v glGetQueryBufferObjectui64v_ = nullptr; \
Engine_glGetQueryBufferObjectuiv glGetQueryBufferObjectuiv_ = nullptr; \
Engine_glMemoryBarrierByRegion glMemoryBarrierByRegion_ = nullptr; \
Engine_glGetTextureSubImage glGetTextureSubImage_ = nullptr; \
Engine_glGetCompressedTextureSubImage glGetCompressedTextureSubImage_ = nullptr; \
Engine_glGetnCompressedTexImage glGetnCompressedTexImage_ = nullptr; \
Engine_glGetnTexImage glGetnTexImage_ = nullptr; \
Engine_glGetnUniformdv glGetnUniformdv_ = nullptr; \
Engine_glGetnUniformfv glGetnUniformfv_ = nullptr; \
Engine_glGetnUniformiv glGetnUniformiv_ = nullptr; \
Engine_glGetnUniformuiv glGetnUniformuiv_ = nullptr; \
Engine_glReadnPixels glReadnPixels_ = nullptr; \
Engine_glGetnMapdv glGetnMapdv_ = nullptr; \
Engine_glGetnMapfv glGetnMapfv_ = nullptr; \
Engine_glGetnMapiv glGetnMapiv_ = nullptr; \
Engine_glGetnPixelMapfv glGetnPixelMapfv_ = nullptr; \
Engine_glGetnPixelMapuiv glGetnPixelMapuiv_ = nullptr; \
Engine_glGetnPixelMapusv glGetnPixelMapusv_ = nullptr; \
Engine_glGetnPolygonStipple glGetnPolygonStipple_ = nullptr; \
Engine_glGetnColorTable glGetnColorTable_ = nullptr; \
Engine_glGetnConvolutionFilter glGetnConvolutionFilter_ = nullptr; \
Engine_glGetnSeparableFilter glGetnSeparableFilter_ = nullptr; \
Engine_glGetnHistogram glGetnHistogram_ = nullptr; \
Engine_glGetnMinmax glGetnMinmax_ = nullptr; \
Engine_glTextureBarrier glTextureBarrier_ = nullptr; \
Engine_glSpecializeShader glSpecializeShader_ = nullptr; \
Engine_glMultiDrawArraysIndirectCount glMultiDrawArraysIndirectCount_ = nullptr; \
Engine_glMultiDrawElementsIndirectCount glMultiDrawElementsIndirectCount_ = nullptr; \
Engine_glPolygonOffsetClamp glPolygonOffsetClamp_ = nullptr

#define SetVariables() \
GLDEBUGPROC_ = (Engine_GLDEBUGPROC)glfwGetProcAddress("GLDEBUGPROC"); \
GLDEBUGPROCARB_ = (Engine_GLDEBUGPROCARB)glfwGetProcAddress("GLDEBUGPROCARB"); \
GLDEBUGPROCKHR_ = (Engine_GLDEBUGPROCKHR)glfwGetProcAddress("GLDEBUGPROCKHR"); \
GLDEBUGPROCAMD_ = (Engine_GLDEBUGPROCAMD)glfwGetProcAddress("GLDEBUGPROCAMD"); \
GLVULKANPROCNV_ = (Engine_GLVULKANPROCNV)glfwGetProcAddress("GLVULKANPROCNV"); \
glCullFace_ = (Engine_glCullFace)glfwGetProcAddress("glCullFace"); \
glFrontFace_ = (Engine_glFrontFace)glfwGetProcAddress("glFrontFace"); \
glHint_ = (Engine_glHint)glfwGetProcAddress("glHint"); \
glLineWidth_ = (Engine_glLineWidth)glfwGetProcAddress("glLineWidth"); \
glPointSize_ = (Engine_glPointSize)glfwGetProcAddress("glPointSize"); \
glPolygonMode_ = (Engine_glPolygonMode)glfwGetProcAddress("glPolygonMode"); \
glScissor_ = (Engine_glScissor)glfwGetProcAddress("glScissor"); \
glTexParameterf_ = (Engine_glTexParameterf)glfwGetProcAddress("glTexParameterf"); \
glTexParameterfv_ = (Engine_glTexParameterfv)glfwGetProcAddress("glTexParameterfv"); \
glTexParameteri_ = (Engine_glTexParameteri)glfwGetProcAddress("glTexParameteri"); \
glTexParameteriv_ = (Engine_glTexParameteriv)glfwGetProcAddress("glTexParameteriv"); \
glTexImage1D_ = (Engine_glTexImage1D)glfwGetProcAddress("glTexImage1D"); \
glTexImage2D_ = (Engine_glTexImage2D)glfwGetProcAddress("glTexImage2D"); \
glDrawBuffer_ = (Engine_glDrawBuffer)glfwGetProcAddress("glDrawBuffer"); \
glClear_ = (Engine_glClear)glfwGetProcAddress("glClear"); \
glClearColor_ = (Engine_glClearColor)glfwGetProcAddress("glClearColor"); \
glClearStencil_ = (Engine_glClearStencil)glfwGetProcAddress("glClearStencil"); \
glClearDepth_ = (Engine_glClearDepth)glfwGetProcAddress("glClearDepth"); \
glStencilMask_ = (Engine_glStencilMask)glfwGetProcAddress("glStencilMask"); \
glColorMask_ = (Engine_glColorMask)glfwGetProcAddress("glColorMask"); \
glDepthMask_ = (Engine_glDepthMask)glfwGetProcAddress("glDepthMask"); \
glDisable_ = (Engine_glDisable)glfwGetProcAddress("glDisable"); \
glEnable_ = (Engine_glEnable)glfwGetProcAddress("glEnable"); \
glFinish_ = (Engine_glFinish)glfwGetProcAddress("glFinish"); \
glFlush_ = (Engine_glFlush)glfwGetProcAddress("glFlush"); \
glBlendFunc_ = (Engine_glBlendFunc)glfwGetProcAddress("glBlendFunc"); \
glLogicOp_ = (Engine_glLogicOp)glfwGetProcAddress("glLogicOp"); \
glStencilFunc_ = (Engine_glStencilFunc)glfwGetProcAddress("glStencilFunc"); \
glStencilOp_ = (Engine_glStencilOp)glfwGetProcAddress("glStencilOp"); \
glDepthFunc_ = (Engine_glDepthFunc)glfwGetProcAddress("glDepthFunc"); \
glPixelStoref_ = (Engine_glPixelStoref)glfwGetProcAddress("glPixelStoref"); \
glPixelStorei_ = (Engine_glPixelStorei)glfwGetProcAddress("glPixelStorei"); \
glReadBuffer_ = (Engine_glReadBuffer)glfwGetProcAddress("glReadBuffer"); \
glReadPixels_ = (Engine_glReadPixels)glfwGetProcAddress("glReadPixels"); \
glGetBooleanv_ = (Engine_glGetBooleanv)glfwGetProcAddress("glGetBooleanv"); \
glGetDoublev_ = (Engine_glGetDoublev)glfwGetProcAddress("glGetDoublev"); \
glGetFloatv_ = (Engine_glGetFloatv)glfwGetProcAddress("glGetFloatv"); \
glGetIntegerv_ = (Engine_glGetIntegerv)glfwGetProcAddress("glGetIntegerv"); \
glGetTexImage_ = (Engine_glGetTexImage)glfwGetProcAddress("glGetTexImage"); \
glGetTexParameterfv_ = (Engine_glGetTexParameterfv)glfwGetProcAddress("glGetTexParameterfv"); \
glGetTexParameteriv_ = (Engine_glGetTexParameteriv)glfwGetProcAddress("glGetTexParameteriv"); \
glGetTexLevelParameterfv_ = (Engine_glGetTexLevelParameterfv)glfwGetProcAddress("glGetTexLevelParameterfv"); \
glGetTexLevelParameteriv_ = (Engine_glGetTexLevelParameteriv)glfwGetProcAddress("glGetTexLevelParameteriv"); \
glDepthRange_ = (Engine_glDepthRange)glfwGetProcAddress("glDepthRange"); \
glViewport_ = (Engine_glViewport)glfwGetProcAddress("glViewport"); \
glDrawArrays_ = (Engine_glDrawArrays)glfwGetProcAddress("glDrawArrays"); \
glDrawElements_ = (Engine_glDrawElements)glfwGetProcAddress("glDrawElements"); \
glPolygonOffset_ = (Engine_glPolygonOffset)glfwGetProcAddress("glPolygonOffset"); \
glCopyTexImage1D_ = (Engine_glCopyTexImage1D)glfwGetProcAddress("glCopyTexImage1D"); \
glCopyTexImage2D_ = (Engine_glCopyTexImage2D)glfwGetProcAddress("glCopyTexImage2D"); \
glCopyTexSubImage1D_ = (Engine_glCopyTexSubImage1D)glfwGetProcAddress("glCopyTexSubImage1D"); \
glCopyTexSubImage2D_ = (Engine_glCopyTexSubImage2D)glfwGetProcAddress("glCopyTexSubImage2D"); \
glTexSubImage1D_ = (Engine_glTexSubImage1D)glfwGetProcAddress("glTexSubImage1D"); \
glTexSubImage2D_ = (Engine_glTexSubImage2D)glfwGetProcAddress("glTexSubImage2D"); \
glBindTexture_ = (Engine_glBindTexture)glfwGetProcAddress("glBindTexture"); \
glDeleteTextures_ = (Engine_glDeleteTextures)glfwGetProcAddress("glDeleteTextures"); \
glGenTextures_ = (Engine_glGenTextures)glfwGetProcAddress("glGenTextures"); \
glDrawRangeElements_ = (Engine_glDrawRangeElements)glfwGetProcAddress("glDrawRangeElements"); \
glTexImage3D_ = (Engine_glTexImage3D)glfwGetProcAddress("glTexImage3D"); \
glTexSubImage3D_ = (Engine_glTexSubImage3D)glfwGetProcAddress("glTexSubImage3D"); \
glCopyTexSubImage3D_ = (Engine_glCopyTexSubImage3D)glfwGetProcAddress("glCopyTexSubImage3D"); \
glActiveTexture_ = (Engine_glActiveTexture)glfwGetProcAddress("glActiveTexture"); \
glSampleCoverage_ = (Engine_glSampleCoverage)glfwGetProcAddress("glSampleCoverage"); \
glCompressedTexImage3D_ = (Engine_glCompressedTexImage3D)glfwGetProcAddress("glCompressedTexImage3D"); \
glCompressedTexImage2D_ = (Engine_glCompressedTexImage2D)glfwGetProcAddress("glCompressedTexImage2D"); \
glCompressedTexImage1D_ = (Engine_glCompressedTexImage1D)glfwGetProcAddress("glCompressedTexImage1D"); \
glCompressedTexSubImage3D_ = (Engine_glCompressedTexSubImage3D)glfwGetProcAddress("glCompressedTexSubImage3D"); \
glCompressedTexSubImage2D_ = (Engine_glCompressedTexSubImage2D)glfwGetProcAddress("glCompressedTexSubImage2D"); \
glCompressedTexSubImage1D_ = (Engine_glCompressedTexSubImage1D)glfwGetProcAddress("glCompressedTexSubImage1D"); \
glGetCompressedTexImage_ = (Engine_glGetCompressedTexImage)glfwGetProcAddress("glGetCompressedTexImage"); \
glBlendFuncSeparate_ = (Engine_glBlendFuncSeparate)glfwGetProcAddress("glBlendFuncSeparate"); \
glMultiDrawArrays_ = (Engine_glMultiDrawArrays)glfwGetProcAddress("glMultiDrawArrays"); \
glMultiDrawElements_ = (Engine_glMultiDrawElements)glfwGetProcAddress("glMultiDrawElements"); \
glPointParameterf_ = (Engine_glPointParameterf)glfwGetProcAddress("glPointParameterf"); \
glPointParameterfv_ = (Engine_glPointParameterfv)glfwGetProcAddress("glPointParameterfv"); \
glPointParameteri_ = (Engine_glPointParameteri)glfwGetProcAddress("glPointParameteri"); \
glPointParameteriv_ = (Engine_glPointParameteriv)glfwGetProcAddress("glPointParameteriv"); \
glBlendColor_ = (Engine_glBlendColor)glfwGetProcAddress("glBlendColor"); \
glBlendEquation_ = (Engine_glBlendEquation)glfwGetProcAddress("glBlendEquation"); \
glGenQueries_ = (Engine_glGenQueries)glfwGetProcAddress("glGenQueries"); \
glDeleteQueries_ = (Engine_glDeleteQueries)glfwGetProcAddress("glDeleteQueries"); \
glBeginQuery_ = (Engine_glBeginQuery)glfwGetProcAddress("glBeginQuery"); \
glEndQuery_ = (Engine_glEndQuery)glfwGetProcAddress("glEndQuery"); \
glGetQueryiv_ = (Engine_glGetQueryiv)glfwGetProcAddress("glGetQueryiv"); \
glGetQueryObjectiv_ = (Engine_glGetQueryObjectiv)glfwGetProcAddress("glGetQueryObjectiv"); \
glGetQueryObjectuiv_ = (Engine_glGetQueryObjectuiv)glfwGetProcAddress("glGetQueryObjectuiv"); \
glBindBuffer_ = (Engine_glBindBuffer)glfwGetProcAddress("glBindBuffer"); \
glDeleteBuffers_ = (Engine_glDeleteBuffers)glfwGetProcAddress("glDeleteBuffers"); \
glGenBuffers_ = (Engine_glGenBuffers)glfwGetProcAddress("glGenBuffers"); \
glBufferData_ = (Engine_glBufferData)glfwGetProcAddress("glBufferData"); \
glBufferSubData_ = (Engine_glBufferSubData)glfwGetProcAddress("glBufferSubData"); \
glGetBufferSubData_ = (Engine_glGetBufferSubData)glfwGetProcAddress("glGetBufferSubData"); \
glGetBufferParameteriv_ = (Engine_glGetBufferParameteriv)glfwGetProcAddress("glGetBufferParameteriv"); \
glGetBufferPointerv_ = (Engine_glGetBufferPointerv)glfwGetProcAddress("glGetBufferPointerv"); \
glBlendEquationSeparate_ = (Engine_glBlendEquationSeparate)glfwGetProcAddress("glBlendEquationSeparate"); \
glDrawBuffers_ = (Engine_glDrawBuffers)glfwGetProcAddress("glDrawBuffers"); \
glStencilOpSeparate_ = (Engine_glStencilOpSeparate)glfwGetProcAddress("glStencilOpSeparate"); \
glStencilFuncSeparate_ = (Engine_glStencilFuncSeparate)glfwGetProcAddress("glStencilFuncSeparate"); \
glStencilMaskSeparate_ = (Engine_glStencilMaskSeparate)glfwGetProcAddress("glStencilMaskSeparate"); \
glAttachShader_ = (Engine_glAttachShader)glfwGetProcAddress("glAttachShader"); \
glBindAttribLocation_ = (Engine_glBindAttribLocation)glfwGetProcAddress("glBindAttribLocation"); \
glCompileShader_ = (Engine_glCompileShader)glfwGetProcAddress("glCompileShader"); \
glDeleteProgram_ = (Engine_glDeleteProgram)glfwGetProcAddress("glDeleteProgram"); \
glDeleteShader_ = (Engine_glDeleteShader)glfwGetProcAddress("glDeleteShader"); \
glDetachShader_ = (Engine_glDetachShader)glfwGetProcAddress("glDetachShader"); \
glDisableVertexAttribArray_ = (Engine_glDisableVertexAttribArray)glfwGetProcAddress("glDisableVertexAttribArray"); \
glEnableVertexAttribArray_ = (Engine_glEnableVertexAttribArray)glfwGetProcAddress("glEnableVertexAttribArray"); \
glGetActiveAttrib_ = (Engine_glGetActiveAttrib)glfwGetProcAddress("glGetActiveAttrib"); \
glGetActiveUniform_ = (Engine_glGetActiveUniform)glfwGetProcAddress("glGetActiveUniform"); \
glGetAttachedShaders_ = (Engine_glGetAttachedShaders)glfwGetProcAddress("glGetAttachedShaders"); \
glGetProgramiv_ = (Engine_glGetProgramiv)glfwGetProcAddress("glGetProgramiv"); \
glGetProgramInfoLog_ = (Engine_glGetProgramInfoLog)glfwGetProcAddress("glGetProgramInfoLog"); \
glGetShaderiv_ = (Engine_glGetShaderiv)glfwGetProcAddress("glGetShaderiv"); \
glGetShaderInfoLog_ = (Engine_glGetShaderInfoLog)glfwGetProcAddress("glGetShaderInfoLog"); \
glGetShaderSource_ = (Engine_glGetShaderSource)glfwGetProcAddress("glGetShaderSource"); \
glGetUniformfv_ = (Engine_glGetUniformfv)glfwGetProcAddress("glGetUniformfv"); \
glGetUniformiv_ = (Engine_glGetUniformiv)glfwGetProcAddress("glGetUniformiv"); \
glGetVertexAttribdv_ = (Engine_glGetVertexAttribdv)glfwGetProcAddress("glGetVertexAttribdv"); \
glGetVertexAttribfv_ = (Engine_glGetVertexAttribfv)glfwGetProcAddress("glGetVertexAttribfv"); \
glGetVertexAttribiv_ = (Engine_glGetVertexAttribiv)glfwGetProcAddress("glGetVertexAttribiv"); \
glGetVertexAttribPointerv_ = (Engine_glGetVertexAttribPointerv)glfwGetProcAddress("glGetVertexAttribPointerv"); \
glLinkProgram_ = (Engine_glLinkProgram)glfwGetProcAddress("glLinkProgram"); \
glShaderSource_ = (Engine_glShaderSource)glfwGetProcAddress("glShaderSource"); \
glUseProgram_ = (Engine_glUseProgram)glfwGetProcAddress("glUseProgram"); \
glUniform1f_ = (Engine_glUniform1f)glfwGetProcAddress("glUniform1f"); \
glUniform2f_ = (Engine_glUniform2f)glfwGetProcAddress("glUniform2f"); \
glUniform3f_ = (Engine_glUniform3f)glfwGetProcAddress("glUniform3f"); \
glUniform4f_ = (Engine_glUniform4f)glfwGetProcAddress("glUniform4f"); \
glUniform1i_ = (Engine_glUniform1i)glfwGetProcAddress("glUniform1i"); \
glUniform2i_ = (Engine_glUniform2i)glfwGetProcAddress("glUniform2i"); \
glUniform3i_ = (Engine_glUniform3i)glfwGetProcAddress("glUniform3i"); \
glUniform4i_ = (Engine_glUniform4i)glfwGetProcAddress("glUniform4i"); \
glUniform1fv_ = (Engine_glUniform1fv)glfwGetProcAddress("glUniform1fv"); \
glUniform2fv_ = (Engine_glUniform2fv)glfwGetProcAddress("glUniform2fv"); \
glUniform3fv_ = (Engine_glUniform3fv)glfwGetProcAddress("glUniform3fv"); \
glUniform4fv_ = (Engine_glUniform4fv)glfwGetProcAddress("glUniform4fv"); \
glUniform1iv_ = (Engine_glUniform1iv)glfwGetProcAddress("glUniform1iv"); \
glUniform2iv_ = (Engine_glUniform2iv)glfwGetProcAddress("glUniform2iv"); \
glUniform3iv_ = (Engine_glUniform3iv)glfwGetProcAddress("glUniform3iv"); \
glUniform4iv_ = (Engine_glUniform4iv)glfwGetProcAddress("glUniform4iv"); \
glUniformMatrix2fv_ = (Engine_glUniformMatrix2fv)glfwGetProcAddress("glUniformMatrix2fv"); \
glUniformMatrix3fv_ = (Engine_glUniformMatrix3fv)glfwGetProcAddress("glUniformMatrix3fv"); \
glUniformMatrix4fv_ = (Engine_glUniformMatrix4fv)glfwGetProcAddress("glUniformMatrix4fv"); \
glValidateProgram_ = (Engine_glValidateProgram)glfwGetProcAddress("glValidateProgram"); \
glVertexAttrib1d_ = (Engine_glVertexAttrib1d)glfwGetProcAddress("glVertexAttrib1d"); \
glVertexAttrib1dv_ = (Engine_glVertexAttrib1dv)glfwGetProcAddress("glVertexAttrib1dv"); \
glVertexAttrib1f_ = (Engine_glVertexAttrib1f)glfwGetProcAddress("glVertexAttrib1f"); \
glVertexAttrib1fv_ = (Engine_glVertexAttrib1fv)glfwGetProcAddress("glVertexAttrib1fv"); \
glVertexAttrib1s_ = (Engine_glVertexAttrib1s)glfwGetProcAddress("glVertexAttrib1s"); \
glVertexAttrib1sv_ = (Engine_glVertexAttrib1sv)glfwGetProcAddress("glVertexAttrib1sv"); \
glVertexAttrib2d_ = (Engine_glVertexAttrib2d)glfwGetProcAddress("glVertexAttrib2d"); \
glVertexAttrib2dv_ = (Engine_glVertexAttrib2dv)glfwGetProcAddress("glVertexAttrib2dv"); \
glVertexAttrib2f_ = (Engine_glVertexAttrib2f)glfwGetProcAddress("glVertexAttrib2f"); \
glVertexAttrib2fv_ = (Engine_glVertexAttrib2fv)glfwGetProcAddress("glVertexAttrib2fv"); \
glVertexAttrib2s_ = (Engine_glVertexAttrib2s)glfwGetProcAddress("glVertexAttrib2s"); \
glVertexAttrib2sv_ = (Engine_glVertexAttrib2sv)glfwGetProcAddress("glVertexAttrib2sv"); \
glVertexAttrib3d_ = (Engine_glVertexAttrib3d)glfwGetProcAddress("glVertexAttrib3d"); \
glVertexAttrib3dv_ = (Engine_glVertexAttrib3dv)glfwGetProcAddress("glVertexAttrib3dv"); \
glVertexAttrib3f_ = (Engine_glVertexAttrib3f)glfwGetProcAddress("glVertexAttrib3f"); \
glVertexAttrib3fv_ = (Engine_glVertexAttrib3fv)glfwGetProcAddress("glVertexAttrib3fv"); \
glVertexAttrib3s_ = (Engine_glVertexAttrib3s)glfwGetProcAddress("glVertexAttrib3s"); \
glVertexAttrib3sv_ = (Engine_glVertexAttrib3sv)glfwGetProcAddress("glVertexAttrib3sv"); \
glVertexAttrib4Nbv_ = (Engine_glVertexAttrib4Nbv)glfwGetProcAddress("glVertexAttrib4Nbv"); \
glVertexAttrib4Niv_ = (Engine_glVertexAttrib4Niv)glfwGetProcAddress("glVertexAttrib4Niv"); \
glVertexAttrib4Nsv_ = (Engine_glVertexAttrib4Nsv)glfwGetProcAddress("glVertexAttrib4Nsv"); \
glVertexAttrib4Nub_ = (Engine_glVertexAttrib4Nub)glfwGetProcAddress("glVertexAttrib4Nub"); \
glVertexAttrib4Nubv_ = (Engine_glVertexAttrib4Nubv)glfwGetProcAddress("glVertexAttrib4Nubv"); \
glVertexAttrib4Nuiv_ = (Engine_glVertexAttrib4Nuiv)glfwGetProcAddress("glVertexAttrib4Nuiv"); \
glVertexAttrib4Nusv_ = (Engine_glVertexAttrib4Nusv)glfwGetProcAddress("glVertexAttrib4Nusv"); \
glVertexAttrib4bv_ = (Engine_glVertexAttrib4bv)glfwGetProcAddress("glVertexAttrib4bv"); \
glVertexAttrib4d_ = (Engine_glVertexAttrib4d)glfwGetProcAddress("glVertexAttrib4d"); \
glVertexAttrib4dv_ = (Engine_glVertexAttrib4dv)glfwGetProcAddress("glVertexAttrib4dv"); \
glVertexAttrib4f_ = (Engine_glVertexAttrib4f)glfwGetProcAddress("glVertexAttrib4f"); \
glVertexAttrib4fv_ = (Engine_glVertexAttrib4fv)glfwGetProcAddress("glVertexAttrib4fv"); \
glVertexAttrib4iv_ = (Engine_glVertexAttrib4iv)glfwGetProcAddress("glVertexAttrib4iv"); \
glVertexAttrib4s_ = (Engine_glVertexAttrib4s)glfwGetProcAddress("glVertexAttrib4s"); \
glVertexAttrib4sv_ = (Engine_glVertexAttrib4sv)glfwGetProcAddress("glVertexAttrib4sv"); \
glVertexAttrib4ubv_ = (Engine_glVertexAttrib4ubv)glfwGetProcAddress("glVertexAttrib4ubv"); \
glVertexAttrib4uiv_ = (Engine_glVertexAttrib4uiv)glfwGetProcAddress("glVertexAttrib4uiv"); \
glVertexAttrib4usv_ = (Engine_glVertexAttrib4usv)glfwGetProcAddress("glVertexAttrib4usv"); \
glVertexAttribPointer_ = (Engine_glVertexAttribPointer)glfwGetProcAddress("glVertexAttribPointer"); \
glUniformMatrix2x3fv_ = (Engine_glUniformMatrix2x3fv)glfwGetProcAddress("glUniformMatrix2x3fv"); \
glUniformMatrix3x2fv_ = (Engine_glUniformMatrix3x2fv)glfwGetProcAddress("glUniformMatrix3x2fv"); \
glUniformMatrix2x4fv_ = (Engine_glUniformMatrix2x4fv)glfwGetProcAddress("glUniformMatrix2x4fv"); \
glUniformMatrix4x2fv_ = (Engine_glUniformMatrix4x2fv)glfwGetProcAddress("glUniformMatrix4x2fv"); \
glUniformMatrix3x4fv_ = (Engine_glUniformMatrix3x4fv)glfwGetProcAddress("glUniformMatrix3x4fv"); \
glUniformMatrix4x3fv_ = (Engine_glUniformMatrix4x3fv)glfwGetProcAddress("glUniformMatrix4x3fv"); \
glColorMaski_ = (Engine_glColorMaski)glfwGetProcAddress("glColorMaski"); \
glGetBooleani_v_ = (Engine_glGetBooleani_v)glfwGetProcAddress("glGetBooleani_v"); \
glGetIntegeri_v_ = (Engine_glGetIntegeri_v)glfwGetProcAddress("glGetIntegeri_v"); \
glEnablei_ = (Engine_glEnablei)glfwGetProcAddress("glEnablei"); \
glDisablei_ = (Engine_glDisablei)glfwGetProcAddress("glDisablei"); \
glBeginTransformFeedback_ = (Engine_glBeginTransformFeedback)glfwGetProcAddress("glBeginTransformFeedback"); \
glEndTransformFeedback_ = (Engine_glEndTransformFeedback)glfwGetProcAddress("glEndTransformFeedback"); \
glBindBufferRange_ = (Engine_glBindBufferRange)glfwGetProcAddress("glBindBufferRange"); \
glBindBufferBase_ = (Engine_glBindBufferBase)glfwGetProcAddress("glBindBufferBase"); \
glTransformFeedbackVaryings_ = (Engine_glTransformFeedbackVaryings)glfwGetProcAddress("glTransformFeedbackVaryings"); \
glGetTransformFeedbackVarying_ = (Engine_glGetTransformFeedbackVarying)glfwGetProcAddress("glGetTransformFeedbackVarying"); \
glClampColor_ = (Engine_glClampColor)glfwGetProcAddress("glClampColor"); \
glBeginConditionalRender_ = (Engine_glBeginConditionalRender)glfwGetProcAddress("glBeginConditionalRender"); \
glEndConditionalRender_ = (Engine_glEndConditionalRender)glfwGetProcAddress("glEndConditionalRender"); \
glVertexAttribIPointer_ = (Engine_glVertexAttribIPointer)glfwGetProcAddress("glVertexAttribIPointer"); \
glGetVertexAttribIiv_ = (Engine_glGetVertexAttribIiv)glfwGetProcAddress("glGetVertexAttribIiv"); \
glGetVertexAttribIuiv_ = (Engine_glGetVertexAttribIuiv)glfwGetProcAddress("glGetVertexAttribIuiv"); \
glVertexAttribI1i_ = (Engine_glVertexAttribI1i)glfwGetProcAddress("glVertexAttribI1i"); \
glVertexAttribI2i_ = (Engine_glVertexAttribI2i)glfwGetProcAddress("glVertexAttribI2i"); \
glVertexAttribI3i_ = (Engine_glVertexAttribI3i)glfwGetProcAddress("glVertexAttribI3i"); \
glVertexAttribI4i_ = (Engine_glVertexAttribI4i)glfwGetProcAddress("glVertexAttribI4i"); \
glVertexAttribI1ui_ = (Engine_glVertexAttribI1ui)glfwGetProcAddress("glVertexAttribI1ui"); \
glVertexAttribI2ui_ = (Engine_glVertexAttribI2ui)glfwGetProcAddress("glVertexAttribI2ui"); \
glVertexAttribI3ui_ = (Engine_glVertexAttribI3ui)glfwGetProcAddress("glVertexAttribI3ui"); \
glVertexAttribI4ui_ = (Engine_glVertexAttribI4ui)glfwGetProcAddress("glVertexAttribI4ui"); \
glVertexAttribI1iv_ = (Engine_glVertexAttribI1iv)glfwGetProcAddress("glVertexAttribI1iv"); \
glVertexAttribI2iv_ = (Engine_glVertexAttribI2iv)glfwGetProcAddress("glVertexAttribI2iv"); \
glVertexAttribI3iv_ = (Engine_glVertexAttribI3iv)glfwGetProcAddress("glVertexAttribI3iv"); \
glVertexAttribI4iv_ = (Engine_glVertexAttribI4iv)glfwGetProcAddress("glVertexAttribI4iv"); \
glVertexAttribI1uiv_ = (Engine_glVertexAttribI1uiv)glfwGetProcAddress("glVertexAttribI1uiv"); \
glVertexAttribI2uiv_ = (Engine_glVertexAttribI2uiv)glfwGetProcAddress("glVertexAttribI2uiv"); \
glVertexAttribI3uiv_ = (Engine_glVertexAttribI3uiv)glfwGetProcAddress("glVertexAttribI3uiv"); \
glVertexAttribI4uiv_ = (Engine_glVertexAttribI4uiv)glfwGetProcAddress("glVertexAttribI4uiv"); \
glVertexAttribI4bv_ = (Engine_glVertexAttribI4bv)glfwGetProcAddress("glVertexAttribI4bv"); \
glVertexAttribI4sv_ = (Engine_glVertexAttribI4sv)glfwGetProcAddress("glVertexAttribI4sv"); \
glVertexAttribI4ubv_ = (Engine_glVertexAttribI4ubv)glfwGetProcAddress("glVertexAttribI4ubv"); \
glVertexAttribI4usv_ = (Engine_glVertexAttribI4usv)glfwGetProcAddress("glVertexAttribI4usv"); \
glGetUniformuiv_ = (Engine_glGetUniformuiv)glfwGetProcAddress("glGetUniformuiv"); \
glBindFragDataLocation_ = (Engine_glBindFragDataLocation)glfwGetProcAddress("glBindFragDataLocation"); \
glUniform1ui_ = (Engine_glUniform1ui)glfwGetProcAddress("glUniform1ui"); \
glUniform2ui_ = (Engine_glUniform2ui)glfwGetProcAddress("glUniform2ui"); \
glUniform3ui_ = (Engine_glUniform3ui)glfwGetProcAddress("glUniform3ui"); \
glUniform4ui_ = (Engine_glUniform4ui)glfwGetProcAddress("glUniform4ui"); \
glUniform1uiv_ = (Engine_glUniform1uiv)glfwGetProcAddress("glUniform1uiv"); \
glUniform2uiv_ = (Engine_glUniform2uiv)glfwGetProcAddress("glUniform2uiv"); \
glUniform3uiv_ = (Engine_glUniform3uiv)glfwGetProcAddress("glUniform3uiv"); \
glUniform4uiv_ = (Engine_glUniform4uiv)glfwGetProcAddress("glUniform4uiv"); \
glTexParameterIiv_ = (Engine_glTexParameterIiv)glfwGetProcAddress("glTexParameterIiv"); \
glTexParameterIuiv_ = (Engine_glTexParameterIuiv)glfwGetProcAddress("glTexParameterIuiv"); \
glGetTexParameterIiv_ = (Engine_glGetTexParameterIiv)glfwGetProcAddress("glGetTexParameterIiv"); \
glGetTexParameterIuiv_ = (Engine_glGetTexParameterIuiv)glfwGetProcAddress("glGetTexParameterIuiv"); \
glClearBufferiv_ = (Engine_glClearBufferiv)glfwGetProcAddress("glClearBufferiv"); \
glClearBufferuiv_ = (Engine_glClearBufferuiv)glfwGetProcAddress("glClearBufferuiv"); \
glClearBufferfv_ = (Engine_glClearBufferfv)glfwGetProcAddress("glClearBufferfv"); \
glClearBufferfi_ = (Engine_glClearBufferfi)glfwGetProcAddress("glClearBufferfi"); \
glBindRenderbuffer_ = (Engine_glBindRenderbuffer)glfwGetProcAddress("glBindRenderbuffer"); \
glDeleteRenderbuffers_ = (Engine_glDeleteRenderbuffers)glfwGetProcAddress("glDeleteRenderbuffers"); \
glGenRenderbuffers_ = (Engine_glGenRenderbuffers)glfwGetProcAddress("glGenRenderbuffers"); \
glRenderbufferStorage_ = (Engine_glRenderbufferStorage)glfwGetProcAddress("glRenderbufferStorage"); \
glGetRenderbufferParameteriv_ = (Engine_glGetRenderbufferParameteriv)glfwGetProcAddress("glGetRenderbufferParameteriv"); \
glBindFramebuffer_ = (Engine_glBindFramebuffer)glfwGetProcAddress("glBindFramebuffer"); \
glDeleteFramebuffers_ = (Engine_glDeleteFramebuffers)glfwGetProcAddress("glDeleteFramebuffers"); \
glGenFramebuffers_ = (Engine_glGenFramebuffers)glfwGetProcAddress("glGenFramebuffers"); \
glFramebufferTexture1D_ = (Engine_glFramebufferTexture1D)glfwGetProcAddress("glFramebufferTexture1D"); \
glFramebufferTexture2D_ = (Engine_glFramebufferTexture2D)glfwGetProcAddress("glFramebufferTexture2D"); \
glFramebufferTexture3D_ = (Engine_glFramebufferTexture3D)glfwGetProcAddress("glFramebufferTexture3D"); \
glFramebufferRenderbuffer_ = (Engine_glFramebufferRenderbuffer)glfwGetProcAddress("glFramebufferRenderbuffer"); \
glGetFramebufferAttachmentParameteriv_ = (Engine_glGetFramebufferAttachmentParameteriv)glfwGetProcAddress("glGetFramebufferAttachmentParameteriv"); \
glGenerateMipmap_ = (Engine_glGenerateMipmap)glfwGetProcAddress("glGenerateMipmap"); \
glBlitFramebuffer_ = (Engine_glBlitFramebuffer)glfwGetProcAddress("glBlitFramebuffer"); \
glRenderbufferStorageMultisample_ = (Engine_glRenderbufferStorageMultisample)glfwGetProcAddress("glRenderbufferStorageMultisample"); \
glFramebufferTextureLayer_ = (Engine_glFramebufferTextureLayer)glfwGetProcAddress("glFramebufferTextureLayer"); \
glFlushMappedBufferRange_ = (Engine_glFlushMappedBufferRange)glfwGetProcAddress("glFlushMappedBufferRange"); \
glBindVertexArray_ = (Engine_glBindVertexArray)glfwGetProcAddress("glBindVertexArray"); \
glDeleteVertexArrays_ = (Engine_glDeleteVertexArrays)glfwGetProcAddress("glDeleteVertexArrays"); \
glGenVertexArrays_ = (Engine_glGenVertexArrays)glfwGetProcAddress("glGenVertexArrays"); \
glDrawArraysInstanced_ = (Engine_glDrawArraysInstanced)glfwGetProcAddress("glDrawArraysInstanced"); \
glDrawElementsInstanced_ = (Engine_glDrawElementsInstanced)glfwGetProcAddress("glDrawElementsInstanced"); \
glTexBuffer_ = (Engine_glTexBuffer)glfwGetProcAddress("glTexBuffer"); \
glPrimitiveRestartIndex_ = (Engine_glPrimitiveRestartIndex)glfwGetProcAddress("glPrimitiveRestartIndex"); \
glCopyBufferSubData_ = (Engine_glCopyBufferSubData)glfwGetProcAddress("glCopyBufferSubData"); \
glGetUniformIndices_ = (Engine_glGetUniformIndices)glfwGetProcAddress("glGetUniformIndices"); \
glGetActiveUniformsiv_ = (Engine_glGetActiveUniformsiv)glfwGetProcAddress("glGetActiveUniformsiv"); \
glGetActiveUniformName_ = (Engine_glGetActiveUniformName)glfwGetProcAddress("glGetActiveUniformName"); \
glGetActiveUniformBlockiv_ = (Engine_glGetActiveUniformBlockiv)glfwGetProcAddress("glGetActiveUniformBlockiv"); \
glGetActiveUniformBlockName_ = (Engine_glGetActiveUniformBlockName)glfwGetProcAddress("glGetActiveUniformBlockName"); \
glUniformBlockBinding_ = (Engine_glUniformBlockBinding)glfwGetProcAddress("glUniformBlockBinding"); \
glDrawElementsBaseVertex_ = (Engine_glDrawElementsBaseVertex)glfwGetProcAddress("glDrawElementsBaseVertex"); \
glDrawRangeElementsBaseVertex_ = (Engine_glDrawRangeElementsBaseVertex)glfwGetProcAddress("glDrawRangeElementsBaseVertex"); \
glDrawElementsInstancedBaseVertex_ = (Engine_glDrawElementsInstancedBaseVertex)glfwGetProcAddress("glDrawElementsInstancedBaseVertex"); \
glMultiDrawElementsBaseVertex_ = (Engine_glMultiDrawElementsBaseVertex)glfwGetProcAddress("glMultiDrawElementsBaseVertex"); \
glProvokingVertex_ = (Engine_glProvokingVertex)glfwGetProcAddress("glProvokingVertex"); \
glDeleteSync_ = (Engine_glDeleteSync)glfwGetProcAddress("glDeleteSync"); \
glWaitSync_ = (Engine_glWaitSync)glfwGetProcAddress("glWaitSync"); \
glGetInteger64v_ = (Engine_glGetInteger64v)glfwGetProcAddress("glGetInteger64v"); \
glGetSynciv_ = (Engine_glGetSynciv)glfwGetProcAddress("glGetSynciv"); \
glGetInteger64i_v_ = (Engine_glGetInteger64i_v)glfwGetProcAddress("glGetInteger64i_v"); \
glGetBufferParameteri64v_ = (Engine_glGetBufferParameteri64v)glfwGetProcAddress("glGetBufferParameteri64v"); \
glFramebufferTexture_ = (Engine_glFramebufferTexture)glfwGetProcAddress("glFramebufferTexture"); \
glTexImage2DMultisample_ = (Engine_glTexImage2DMultisample)glfwGetProcAddress("glTexImage2DMultisample"); \
glTexImage3DMultisample_ = (Engine_glTexImage3DMultisample)glfwGetProcAddress("glTexImage3DMultisample"); \
glGetMultisamplefv_ = (Engine_glGetMultisamplefv)glfwGetProcAddress("glGetMultisamplefv"); \
glSampleMaski_ = (Engine_glSampleMaski)glfwGetProcAddress("glSampleMaski"); \
glBindFragDataLocationIndexed_ = (Engine_glBindFragDataLocationIndexed)glfwGetProcAddress("glBindFragDataLocationIndexed"); \
glGenSamplers_ = (Engine_glGenSamplers)glfwGetProcAddress("glGenSamplers"); \
glDeleteSamplers_ = (Engine_glDeleteSamplers)glfwGetProcAddress("glDeleteSamplers"); \
glBindSampler_ = (Engine_glBindSampler)glfwGetProcAddress("glBindSampler"); \
glSamplerParameteri_ = (Engine_glSamplerParameteri)glfwGetProcAddress("glSamplerParameteri"); \
glSamplerParameteriv_ = (Engine_glSamplerParameteriv)glfwGetProcAddress("glSamplerParameteriv"); \
glSamplerParameterf_ = (Engine_glSamplerParameterf)glfwGetProcAddress("glSamplerParameterf"); \
glSamplerParameterfv_ = (Engine_glSamplerParameterfv)glfwGetProcAddress("glSamplerParameterfv"); \
glSamplerParameterIiv_ = (Engine_glSamplerParameterIiv)glfwGetProcAddress("glSamplerParameterIiv"); \
glSamplerParameterIuiv_ = (Engine_glSamplerParameterIuiv)glfwGetProcAddress("glSamplerParameterIuiv"); \
glGetSamplerParameteriv_ = (Engine_glGetSamplerParameteriv)glfwGetProcAddress("glGetSamplerParameteriv"); \
glGetSamplerParameterIiv_ = (Engine_glGetSamplerParameterIiv)glfwGetProcAddress("glGetSamplerParameterIiv"); \
glGetSamplerParameterfv_ = (Engine_glGetSamplerParameterfv)glfwGetProcAddress("glGetSamplerParameterfv"); \
glGetSamplerParameterIuiv_ = (Engine_glGetSamplerParameterIuiv)glfwGetProcAddress("glGetSamplerParameterIuiv"); \
glQueryCounter_ = (Engine_glQueryCounter)glfwGetProcAddress("glQueryCounter"); \
glGetQueryObjecti64v_ = (Engine_glGetQueryObjecti64v)glfwGetProcAddress("glGetQueryObjecti64v"); \
glGetQueryObjectui64v_ = (Engine_glGetQueryObjectui64v)glfwGetProcAddress("glGetQueryObjectui64v"); \
glVertexAttribDivisor_ = (Engine_glVertexAttribDivisor)glfwGetProcAddress("glVertexAttribDivisor"); \
glVertexAttribP1ui_ = (Engine_glVertexAttribP1ui)glfwGetProcAddress("glVertexAttribP1ui"); \
glVertexAttribP1uiv_ = (Engine_glVertexAttribP1uiv)glfwGetProcAddress("glVertexAttribP1uiv"); \
glVertexAttribP2ui_ = (Engine_glVertexAttribP2ui)glfwGetProcAddress("glVertexAttribP2ui"); \
glVertexAttribP2uiv_ = (Engine_glVertexAttribP2uiv)glfwGetProcAddress("glVertexAttribP2uiv"); \
glVertexAttribP3ui_ = (Engine_glVertexAttribP3ui)glfwGetProcAddress("glVertexAttribP3ui"); \
glVertexAttribP3uiv_ = (Engine_glVertexAttribP3uiv)glfwGetProcAddress("glVertexAttribP3uiv"); \
glVertexAttribP4ui_ = (Engine_glVertexAttribP4ui)glfwGetProcAddress("glVertexAttribP4ui"); \
glVertexAttribP4uiv_ = (Engine_glVertexAttribP4uiv)glfwGetProcAddress("glVertexAttribP4uiv"); \
glVertexP2ui_ = (Engine_glVertexP2ui)glfwGetProcAddress("glVertexP2ui"); \
glVertexP2uiv_ = (Engine_glVertexP2uiv)glfwGetProcAddress("glVertexP2uiv"); \
glVertexP3ui_ = (Engine_glVertexP3ui)glfwGetProcAddress("glVertexP3ui"); \
glVertexP3uiv_ = (Engine_glVertexP3uiv)glfwGetProcAddress("glVertexP3uiv"); \
glVertexP4ui_ = (Engine_glVertexP4ui)glfwGetProcAddress("glVertexP4ui"); \
glVertexP4uiv_ = (Engine_glVertexP4uiv)glfwGetProcAddress("glVertexP4uiv"); \
glTexCoordP1ui_ = (Engine_glTexCoordP1ui)glfwGetProcAddress("glTexCoordP1ui"); \
glTexCoordP1uiv_ = (Engine_glTexCoordP1uiv)glfwGetProcAddress("glTexCoordP1uiv"); \
glTexCoordP2ui_ = (Engine_glTexCoordP2ui)glfwGetProcAddress("glTexCoordP2ui"); \
glTexCoordP2uiv_ = (Engine_glTexCoordP2uiv)glfwGetProcAddress("glTexCoordP2uiv"); \
glTexCoordP3ui_ = (Engine_glTexCoordP3ui)glfwGetProcAddress("glTexCoordP3ui"); \
glTexCoordP3uiv_ = (Engine_glTexCoordP3uiv)glfwGetProcAddress("glTexCoordP3uiv"); \
glTexCoordP4ui_ = (Engine_glTexCoordP4ui)glfwGetProcAddress("glTexCoordP4ui"); \
glTexCoordP4uiv_ = (Engine_glTexCoordP4uiv)glfwGetProcAddress("glTexCoordP4uiv"); \
glMultiTexCoordP1ui_ = (Engine_glMultiTexCoordP1ui)glfwGetProcAddress("glMultiTexCoordP1ui"); \
glMultiTexCoordP1uiv_ = (Engine_glMultiTexCoordP1uiv)glfwGetProcAddress("glMultiTexCoordP1uiv"); \
glMultiTexCoordP2ui_ = (Engine_glMultiTexCoordP2ui)glfwGetProcAddress("glMultiTexCoordP2ui"); \
glMultiTexCoordP2uiv_ = (Engine_glMultiTexCoordP2uiv)glfwGetProcAddress("glMultiTexCoordP2uiv"); \
glMultiTexCoordP3ui_ = (Engine_glMultiTexCoordP3ui)glfwGetProcAddress("glMultiTexCoordP3ui"); \
glMultiTexCoordP3uiv_ = (Engine_glMultiTexCoordP3uiv)glfwGetProcAddress("glMultiTexCoordP3uiv"); \
glMultiTexCoordP4ui_ = (Engine_glMultiTexCoordP4ui)glfwGetProcAddress("glMultiTexCoordP4ui"); \
glMultiTexCoordP4uiv_ = (Engine_glMultiTexCoordP4uiv)glfwGetProcAddress("glMultiTexCoordP4uiv"); \
glNormalP3ui_ = (Engine_glNormalP3ui)glfwGetProcAddress("glNormalP3ui"); \
glNormalP3uiv_ = (Engine_glNormalP3uiv)glfwGetProcAddress("glNormalP3uiv"); \
glColorP3ui_ = (Engine_glColorP3ui)glfwGetProcAddress("glColorP3ui"); \
glColorP3uiv_ = (Engine_glColorP3uiv)glfwGetProcAddress("glColorP3uiv"); \
glColorP4ui_ = (Engine_glColorP4ui)glfwGetProcAddress("glColorP4ui"); \
glColorP4uiv_ = (Engine_glColorP4uiv)glfwGetProcAddress("glColorP4uiv"); \
glSecondaryColorP3ui_ = (Engine_glSecondaryColorP3ui)glfwGetProcAddress("glSecondaryColorP3ui"); \
glSecondaryColorP3uiv_ = (Engine_glSecondaryColorP3uiv)glfwGetProcAddress("glSecondaryColorP3uiv"); \
glMinSampleShading_ = (Engine_glMinSampleShading)glfwGetProcAddress("glMinSampleShading"); \
glBlendEquationi_ = (Engine_glBlendEquationi)glfwGetProcAddress("glBlendEquationi"); \
glBlendEquationSeparatei_ = (Engine_glBlendEquationSeparatei)glfwGetProcAddress("glBlendEquationSeparatei"); \
glBlendFunci_ = (Engine_glBlendFunci)glfwGetProcAddress("glBlendFunci"); \
glBlendFuncSeparatei_ = (Engine_glBlendFuncSeparatei)glfwGetProcAddress("glBlendFuncSeparatei"); \
glDrawArraysIndirect_ = (Engine_glDrawArraysIndirect)glfwGetProcAddress("glDrawArraysIndirect"); \
glDrawElementsIndirect_ = (Engine_glDrawElementsIndirect)glfwGetProcAddress("glDrawElementsIndirect"); \
glUniform1d_ = (Engine_glUniform1d)glfwGetProcAddress("glUniform1d"); \
glUniform2d_ = (Engine_glUniform2d)glfwGetProcAddress("glUniform2d"); \
glUniform3d_ = (Engine_glUniform3d)glfwGetProcAddress("glUniform3d"); \
glUniform4d_ = (Engine_glUniform4d)glfwGetProcAddress("glUniform4d"); \
glUniform1dv_ = (Engine_glUniform1dv)glfwGetProcAddress("glUniform1dv"); \
glUniform2dv_ = (Engine_glUniform2dv)glfwGetProcAddress("glUniform2dv"); \
glUniform3dv_ = (Engine_glUniform3dv)glfwGetProcAddress("glUniform3dv"); \
glUniform4dv_ = (Engine_glUniform4dv)glfwGetProcAddress("glUniform4dv"); \
glUniformMatrix2dv_ = (Engine_glUniformMatrix2dv)glfwGetProcAddress("glUniformMatrix2dv"); \
glUniformMatrix3dv_ = (Engine_glUniformMatrix3dv)glfwGetProcAddress("glUniformMatrix3dv"); \
glUniformMatrix4dv_ = (Engine_glUniformMatrix4dv)glfwGetProcAddress("glUniformMatrix4dv"); \
glUniformMatrix2x3dv_ = (Engine_glUniformMatrix2x3dv)glfwGetProcAddress("glUniformMatrix2x3dv"); \
glUniformMatrix2x4dv_ = (Engine_glUniformMatrix2x4dv)glfwGetProcAddress("glUniformMatrix2x4dv"); \
glUniformMatrix3x2dv_ = (Engine_glUniformMatrix3x2dv)glfwGetProcAddress("glUniformMatrix3x2dv"); \
glUniformMatrix3x4dv_ = (Engine_glUniformMatrix3x4dv)glfwGetProcAddress("glUniformMatrix3x4dv"); \
glUniformMatrix4x2dv_ = (Engine_glUniformMatrix4x2dv)glfwGetProcAddress("glUniformMatrix4x2dv"); \
glUniformMatrix4x3dv_ = (Engine_glUniformMatrix4x3dv)glfwGetProcAddress("glUniformMatrix4x3dv"); \
glGetUniformdv_ = (Engine_glGetUniformdv)glfwGetProcAddress("glGetUniformdv"); \
glGetActiveSubroutineUniformiv_ = (Engine_glGetActiveSubroutineUniformiv)glfwGetProcAddress("glGetActiveSubroutineUniformiv"); \
glGetActiveSubroutineUniformName_ = (Engine_glGetActiveSubroutineUniformName)glfwGetProcAddress("glGetActiveSubroutineUniformName"); \
glGetActiveSubroutineName_ = (Engine_glGetActiveSubroutineName)glfwGetProcAddress("glGetActiveSubroutineName"); \
glUniformSubroutinesuiv_ = (Engine_glUniformSubroutinesuiv)glfwGetProcAddress("glUniformSubroutinesuiv"); \
glGetUniformSubroutineuiv_ = (Engine_glGetUniformSubroutineuiv)glfwGetProcAddress("glGetUniformSubroutineuiv"); \
glGetProgramStageiv_ = (Engine_glGetProgramStageiv)glfwGetProcAddress("glGetProgramStageiv"); \
glPatchParameteri_ = (Engine_glPatchParameteri)glfwGetProcAddress("glPatchParameteri"); \
glPatchParameterfv_ = (Engine_glPatchParameterfv)glfwGetProcAddress("glPatchParameterfv"); \
glBindTransformFeedback_ = (Engine_glBindTransformFeedback)glfwGetProcAddress("glBindTransformFeedback"); \
glDeleteTransformFeedbacks_ = (Engine_glDeleteTransformFeedbacks)glfwGetProcAddress("glDeleteTransformFeedbacks"); \
glGenTransformFeedbacks_ = (Engine_glGenTransformFeedbacks)glfwGetProcAddress("glGenTransformFeedbacks"); \
glPauseTransformFeedback_ = (Engine_glPauseTransformFeedback)glfwGetProcAddress("glPauseTransformFeedback"); \
glResumeTransformFeedback_ = (Engine_glResumeTransformFeedback)glfwGetProcAddress("glResumeTransformFeedback"); \
glDrawTransformFeedback_ = (Engine_glDrawTransformFeedback)glfwGetProcAddress("glDrawTransformFeedback"); \
glDrawTransformFeedbackStream_ = (Engine_glDrawTransformFeedbackStream)glfwGetProcAddress("glDrawTransformFeedbackStream"); \
glBeginQueryIndexed_ = (Engine_glBeginQueryIndexed)glfwGetProcAddress("glBeginQueryIndexed"); \
glEndQueryIndexed_ = (Engine_glEndQueryIndexed)glfwGetProcAddress("glEndQueryIndexed"); \
glGetQueryIndexediv_ = (Engine_glGetQueryIndexediv)glfwGetProcAddress("glGetQueryIndexediv"); \
glReleaseShaderCompiler_ = (Engine_glReleaseShaderCompiler)glfwGetProcAddress("glReleaseShaderCompiler"); \
glShaderBinary_ = (Engine_glShaderBinary)glfwGetProcAddress("glShaderBinary"); \
glGetShaderPrecisionFormat_ = (Engine_glGetShaderPrecisionFormat)glfwGetProcAddress("glGetShaderPrecisionFormat"); \
glDepthRangef_ = (Engine_glDepthRangef)glfwGetProcAddress("glDepthRangef"); \
glClearDepthf_ = (Engine_glClearDepthf)glfwGetProcAddress("glClearDepthf"); \
glGetProgramBinary_ = (Engine_glGetProgramBinary)glfwGetProcAddress("glGetProgramBinary"); \
glProgramBinary_ = (Engine_glProgramBinary)glfwGetProcAddress("glProgramBinary"); \
glProgramParameteri_ = (Engine_glProgramParameteri)glfwGetProcAddress("glProgramParameteri"); \
glUseProgramStages_ = (Engine_glUseProgramStages)glfwGetProcAddress("glUseProgramStages"); \
glActiveShaderProgram_ = (Engine_glActiveShaderProgram)glfwGetProcAddress("glActiveShaderProgram"); \
glBindProgramPipeline_ = (Engine_glBindProgramPipeline)glfwGetProcAddress("glBindProgramPipeline"); \
glDeleteProgramPipelines_ = (Engine_glDeleteProgramPipelines)glfwGetProcAddress("glDeleteProgramPipelines"); \
glGenProgramPipelines_ = (Engine_glGenProgramPipelines)glfwGetProcAddress("glGenProgramPipelines"); \
glGetProgramPipelineiv_ = (Engine_glGetProgramPipelineiv)glfwGetProcAddress("glGetProgramPipelineiv"); \
glProgramUniform1i_ = (Engine_glProgramUniform1i)glfwGetProcAddress("glProgramUniform1i"); \
glProgramUniform1iv_ = (Engine_glProgramUniform1iv)glfwGetProcAddress("glProgramUniform1iv"); \
glProgramUniform1f_ = (Engine_glProgramUniform1f)glfwGetProcAddress("glProgramUniform1f"); \
glProgramUniform1fv_ = (Engine_glProgramUniform1fv)glfwGetProcAddress("glProgramUniform1fv"); \
glProgramUniform1d_ = (Engine_glProgramUniform1d)glfwGetProcAddress("glProgramUniform1d"); \
glProgramUniform1dv_ = (Engine_glProgramUniform1dv)glfwGetProcAddress("glProgramUniform1dv"); \
glProgramUniform1ui_ = (Engine_glProgramUniform1ui)glfwGetProcAddress("glProgramUniform1ui"); \
glProgramUniform1uiv_ = (Engine_glProgramUniform1uiv)glfwGetProcAddress("glProgramUniform1uiv"); \
glProgramUniform2i_ = (Engine_glProgramUniform2i)glfwGetProcAddress("glProgramUniform2i"); \
glProgramUniform2iv_ = (Engine_glProgramUniform2iv)glfwGetProcAddress("glProgramUniform2iv"); \
glProgramUniform2f_ = (Engine_glProgramUniform2f)glfwGetProcAddress("glProgramUniform2f"); \
glProgramUniform2fv_ = (Engine_glProgramUniform2fv)glfwGetProcAddress("glProgramUniform2fv"); \
glProgramUniform2d_ = (Engine_glProgramUniform2d)glfwGetProcAddress("glProgramUniform2d"); \
glProgramUniform2dv_ = (Engine_glProgramUniform2dv)glfwGetProcAddress("glProgramUniform2dv"); \
glProgramUniform2ui_ = (Engine_glProgramUniform2ui)glfwGetProcAddress("glProgramUniform2ui"); \
glProgramUniform2uiv_ = (Engine_glProgramUniform2uiv)glfwGetProcAddress("glProgramUniform2uiv"); \
glProgramUniform3i_ = (Engine_glProgramUniform3i)glfwGetProcAddress("glProgramUniform3i"); \
glProgramUniform3iv_ = (Engine_glProgramUniform3iv)glfwGetProcAddress("glProgramUniform3iv"); \
glProgramUniform3f_ = (Engine_glProgramUniform3f)glfwGetProcAddress("glProgramUniform3f"); \
glProgramUniform3fv_ = (Engine_glProgramUniform3fv)glfwGetProcAddress("glProgramUniform3fv"); \
glProgramUniform3d_ = (Engine_glProgramUniform3d)glfwGetProcAddress("glProgramUniform3d"); \
glProgramUniform3dv_ = (Engine_glProgramUniform3dv)glfwGetProcAddress("glProgramUniform3dv"); \
glProgramUniform3ui_ = (Engine_glProgramUniform3ui)glfwGetProcAddress("glProgramUniform3ui"); \
glProgramUniform3uiv_ = (Engine_glProgramUniform3uiv)glfwGetProcAddress("glProgramUniform3uiv"); \
glProgramUniform4i_ = (Engine_glProgramUniform4i)glfwGetProcAddress("glProgramUniform4i"); \
glProgramUniform4iv_ = (Engine_glProgramUniform4iv)glfwGetProcAddress("glProgramUniform4iv"); \
glProgramUniform4f_ = (Engine_glProgramUniform4f)glfwGetProcAddress("glProgramUniform4f"); \
glProgramUniform4fv_ = (Engine_glProgramUniform4fv)glfwGetProcAddress("glProgramUniform4fv"); \
glProgramUniform4d_ = (Engine_glProgramUniform4d)glfwGetProcAddress("glProgramUniform4d"); \
glProgramUniform4dv_ = (Engine_glProgramUniform4dv)glfwGetProcAddress("glProgramUniform4dv"); \
glProgramUniform4ui_ = (Engine_glProgramUniform4ui)glfwGetProcAddress("glProgramUniform4ui"); \
glProgramUniform4uiv_ = (Engine_glProgramUniform4uiv)glfwGetProcAddress("glProgramUniform4uiv"); \
glProgramUniformMatrix2fv_ = (Engine_glProgramUniformMatrix2fv)glfwGetProcAddress("glProgramUniformMatrix2fv"); \
glProgramUniformMatrix3fv_ = (Engine_glProgramUniformMatrix3fv)glfwGetProcAddress("glProgramUniformMatrix3fv"); \
glProgramUniformMatrix4fv_ = (Engine_glProgramUniformMatrix4fv)glfwGetProcAddress("glProgramUniformMatrix4fv"); \
glProgramUniformMatrix2dv_ = (Engine_glProgramUniformMatrix2dv)glfwGetProcAddress("glProgramUniformMatrix2dv"); \
glProgramUniformMatrix3dv_ = (Engine_glProgramUniformMatrix3dv)glfwGetProcAddress("glProgramUniformMatrix3dv"); \
glProgramUniformMatrix4dv_ = (Engine_glProgramUniformMatrix4dv)glfwGetProcAddress("glProgramUniformMatrix4dv"); \
glProgramUniformMatrix2x3fv_ = (Engine_glProgramUniformMatrix2x3fv)glfwGetProcAddress("glProgramUniformMatrix2x3fv"); \
glProgramUniformMatrix3x2fv_ = (Engine_glProgramUniformMatrix3x2fv)glfwGetProcAddress("glProgramUniformMatrix3x2fv"); \
glProgramUniformMatrix2x4fv_ = (Engine_glProgramUniformMatrix2x4fv)glfwGetProcAddress("glProgramUniformMatrix2x4fv"); \
glProgramUniformMatrix4x2fv_ = (Engine_glProgramUniformMatrix4x2fv)glfwGetProcAddress("glProgramUniformMatrix4x2fv"); \
glProgramUniformMatrix3x4fv_ = (Engine_glProgramUniformMatrix3x4fv)glfwGetProcAddress("glProgramUniformMatrix3x4fv"); \
glProgramUniformMatrix4x3fv_ = (Engine_glProgramUniformMatrix4x3fv)glfwGetProcAddress("glProgramUniformMatrix4x3fv"); \
glProgramUniformMatrix2x3dv_ = (Engine_glProgramUniformMatrix2x3dv)glfwGetProcAddress("glProgramUniformMatrix2x3dv"); \
glProgramUniformMatrix3x2dv_ = (Engine_glProgramUniformMatrix3x2dv)glfwGetProcAddress("glProgramUniformMatrix3x2dv"); \
glProgramUniformMatrix2x4dv_ = (Engine_glProgramUniformMatrix2x4dv)glfwGetProcAddress("glProgramUniformMatrix2x4dv"); \
glProgramUniformMatrix4x2dv_ = (Engine_glProgramUniformMatrix4x2dv)glfwGetProcAddress("glProgramUniformMatrix4x2dv"); \
glProgramUniformMatrix3x4dv_ = (Engine_glProgramUniformMatrix3x4dv)glfwGetProcAddress("glProgramUniformMatrix3x4dv"); \
glProgramUniformMatrix4x3dv_ = (Engine_glProgramUniformMatrix4x3dv)glfwGetProcAddress("glProgramUniformMatrix4x3dv"); \
glValidateProgramPipeline_ = (Engine_glValidateProgramPipeline)glfwGetProcAddress("glValidateProgramPipeline"); \
glGetProgramPipelineInfoLog_ = (Engine_glGetProgramPipelineInfoLog)glfwGetProcAddress("glGetProgramPipelineInfoLog"); \
glVertexAttribL1d_ = (Engine_glVertexAttribL1d)glfwGetProcAddress("glVertexAttribL1d"); \
glVertexAttribL2d_ = (Engine_glVertexAttribL2d)glfwGetProcAddress("glVertexAttribL2d"); \
glVertexAttribL3d_ = (Engine_glVertexAttribL3d)glfwGetProcAddress("glVertexAttribL3d"); \
glVertexAttribL4d_ = (Engine_glVertexAttribL4d)glfwGetProcAddress("glVertexAttribL4d"); \
glVertexAttribL1dv_ = (Engine_glVertexAttribL1dv)glfwGetProcAddress("glVertexAttribL1dv"); \
glVertexAttribL2dv_ = (Engine_glVertexAttribL2dv)glfwGetProcAddress("glVertexAttribL2dv"); \
glVertexAttribL3dv_ = (Engine_glVertexAttribL3dv)glfwGetProcAddress("glVertexAttribL3dv"); \
glVertexAttribL4dv_ = (Engine_glVertexAttribL4dv)glfwGetProcAddress("glVertexAttribL4dv"); \
glVertexAttribLPointer_ = (Engine_glVertexAttribLPointer)glfwGetProcAddress("glVertexAttribLPointer"); \
glGetVertexAttribLdv_ = (Engine_glGetVertexAttribLdv)glfwGetProcAddress("glGetVertexAttribLdv"); \
glViewportArrayv_ = (Engine_glViewportArrayv)glfwGetProcAddress("glViewportArrayv"); \
glViewportIndexedf_ = (Engine_glViewportIndexedf)glfwGetProcAddress("glViewportIndexedf"); \
glViewportIndexedfv_ = (Engine_glViewportIndexedfv)glfwGetProcAddress("glViewportIndexedfv"); \
glScissorArrayv_ = (Engine_glScissorArrayv)glfwGetProcAddress("glScissorArrayv"); \
glScissorIndexed_ = (Engine_glScissorIndexed)glfwGetProcAddress("glScissorIndexed"); \
glScissorIndexedv_ = (Engine_glScissorIndexedv)glfwGetProcAddress("glScissorIndexedv"); \
glDepthRangeArrayv_ = (Engine_glDepthRangeArrayv)glfwGetProcAddress("glDepthRangeArrayv"); \
glDepthRangeIndexed_ = (Engine_glDepthRangeIndexed)glfwGetProcAddress("glDepthRangeIndexed"); \
glGetFloati_v_ = (Engine_glGetFloati_v)glfwGetProcAddress("glGetFloati_v"); \
glGetDoublei_v_ = (Engine_glGetDoublei_v)glfwGetProcAddress("glGetDoublei_v"); \
glDrawArraysInstancedBaseInstance_ = (Engine_glDrawArraysInstancedBaseInstance)glfwGetProcAddress("glDrawArraysInstancedBaseInstance"); \
glDrawElementsInstancedBaseInstance_ = (Engine_glDrawElementsInstancedBaseInstance)glfwGetProcAddress("glDrawElementsInstancedBaseInstance"); \
glDrawElementsInstancedBaseVertexBaseInstance_ = (Engine_glDrawElementsInstancedBaseVertexBaseInstance)glfwGetProcAddress("glDrawElementsInstancedBaseVertexBaseInstance"); \
glGetInternalformativ_ = (Engine_glGetInternalformativ)glfwGetProcAddress("glGetInternalformativ"); \
glGetActiveAtomicCounterBufferiv_ = (Engine_glGetActiveAtomicCounterBufferiv)glfwGetProcAddress("glGetActiveAtomicCounterBufferiv"); \
glBindImageTexture_ = (Engine_glBindImageTexture)glfwGetProcAddress("glBindImageTexture"); \
glMemoryBarrier_ = (Engine_glMemoryBarrier)glfwGetProcAddress("glMemoryBarrier"); \
glTexStorage1D_ = (Engine_glTexStorage1D)glfwGetProcAddress("glTexStorage1D"); \
glTexStorage2D_ = (Engine_glTexStorage2D)glfwGetProcAddress("glTexStorage2D"); \
glTexStorage3D_ = (Engine_glTexStorage3D)glfwGetProcAddress("glTexStorage3D"); \
glDrawTransformFeedbackInstanced_ = (Engine_glDrawTransformFeedbackInstanced)glfwGetProcAddress("glDrawTransformFeedbackInstanced"); \
glDrawTransformFeedbackStreamInstanced_ = (Engine_glDrawTransformFeedbackStreamInstanced)glfwGetProcAddress("glDrawTransformFeedbackStreamInstanced"); \
glClearBufferData_ = (Engine_glClearBufferData)glfwGetProcAddress("glClearBufferData"); \
glClearBufferSubData_ = (Engine_glClearBufferSubData)glfwGetProcAddress("glClearBufferSubData"); \
glDispatchCompute_ = (Engine_glDispatchCompute)glfwGetProcAddress("glDispatchCompute"); \
glDispatchComputeIndirect_ = (Engine_glDispatchComputeIndirect)glfwGetProcAddress("glDispatchComputeIndirect"); \
glCopyImageSubData_ = (Engine_glCopyImageSubData)glfwGetProcAddress("glCopyImageSubData"); \
glFramebufferParameteri_ = (Engine_glFramebufferParameteri)glfwGetProcAddress("glFramebufferParameteri"); \
glGetFramebufferParameteriv_ = (Engine_glGetFramebufferParameteriv)glfwGetProcAddress("glGetFramebufferParameteriv"); \
glGetInternalformati64v_ = (Engine_glGetInternalformati64v)glfwGetProcAddress("glGetInternalformati64v"); \
glInvalidateTexSubImage_ = (Engine_glInvalidateTexSubImage)glfwGetProcAddress("glInvalidateTexSubImage"); \
glInvalidateTexImage_ = (Engine_glInvalidateTexImage)glfwGetProcAddress("glInvalidateTexImage"); \
glInvalidateBufferSubData_ = (Engine_glInvalidateBufferSubData)glfwGetProcAddress("glInvalidateBufferSubData"); \
glInvalidateBufferData_ = (Engine_glInvalidateBufferData)glfwGetProcAddress("glInvalidateBufferData"); \
glInvalidateFramebuffer_ = (Engine_glInvalidateFramebuffer)glfwGetProcAddress("glInvalidateFramebuffer"); \
glInvalidateSubFramebuffer_ = (Engine_glInvalidateSubFramebuffer)glfwGetProcAddress("glInvalidateSubFramebuffer"); \
glMultiDrawArraysIndirect_ = (Engine_glMultiDrawArraysIndirect)glfwGetProcAddress("glMultiDrawArraysIndirect"); \
glMultiDrawElementsIndirect_ = (Engine_glMultiDrawElementsIndirect)glfwGetProcAddress("glMultiDrawElementsIndirect"); \
glGetProgramInterfaceiv_ = (Engine_glGetProgramInterfaceiv)glfwGetProcAddress("glGetProgramInterfaceiv"); \
glGetProgramResourceName_ = (Engine_glGetProgramResourceName)glfwGetProcAddress("glGetProgramResourceName"); \
glGetProgramResourceiv_ = (Engine_glGetProgramResourceiv)glfwGetProcAddress("glGetProgramResourceiv"); \
glShaderStorageBlockBinding_ = (Engine_glShaderStorageBlockBinding)glfwGetProcAddress("glShaderStorageBlockBinding"); \
glTexBufferRange_ = (Engine_glTexBufferRange)glfwGetProcAddress("glTexBufferRange"); \
glTexStorage2DMultisample_ = (Engine_glTexStorage2DMultisample)glfwGetProcAddress("glTexStorage2DMultisample"); \
glTexStorage3DMultisample_ = (Engine_glTexStorage3DMultisample)glfwGetProcAddress("glTexStorage3DMultisample"); \
glTextureView_ = (Engine_glTextureView)glfwGetProcAddress("glTextureView"); \
glBindVertexBuffer_ = (Engine_glBindVertexBuffer)glfwGetProcAddress("glBindVertexBuffer"); \
glVertexAttribFormat_ = (Engine_glVertexAttribFormat)glfwGetProcAddress("glVertexAttribFormat"); \
glVertexAttribIFormat_ = (Engine_glVertexAttribIFormat)glfwGetProcAddress("glVertexAttribIFormat"); \
glVertexAttribLFormat_ = (Engine_glVertexAttribLFormat)glfwGetProcAddress("glVertexAttribLFormat"); \
glVertexAttribBinding_ = (Engine_glVertexAttribBinding)glfwGetProcAddress("glVertexAttribBinding"); \
glVertexBindingDivisor_ = (Engine_glVertexBindingDivisor)glfwGetProcAddress("glVertexBindingDivisor"); \
glDebugMessageControl_ = (Engine_glDebugMessageControl)glfwGetProcAddress("glDebugMessageControl"); \
glDebugMessageInsert_ = (Engine_glDebugMessageInsert)glfwGetProcAddress("glDebugMessageInsert"); \
glDebugMessageCallback_ = (Engine_glDebugMessageCallback)glfwGetProcAddress("glDebugMessageCallback"); \
glPushDebugGroup_ = (Engine_glPushDebugGroup)glfwGetProcAddress("glPushDebugGroup"); \
glPopDebugGroup_ = (Engine_glPopDebugGroup)glfwGetProcAddress("glPopDebugGroup"); \
glObjectLabel_ = (Engine_glObjectLabel)glfwGetProcAddress("glObjectLabel"); \
glGetObjectLabel_ = (Engine_glGetObjectLabel)glfwGetProcAddress("glGetObjectLabel"); \
glObjectPtrLabel_ = (Engine_glObjectPtrLabel)glfwGetProcAddress("glObjectPtrLabel"); \
glGetObjectPtrLabel_ = (Engine_glGetObjectPtrLabel)glfwGetProcAddress("glGetObjectPtrLabel"); \
glGetPointerv_ = (Engine_glGetPointerv)glfwGetProcAddress("glGetPointerv"); \
glBufferStorage_ = (Engine_glBufferStorage)glfwGetProcAddress("glBufferStorage"); \
glClearTexImage_ = (Engine_glClearTexImage)glfwGetProcAddress("glClearTexImage"); \
glClearTexSubImage_ = (Engine_glClearTexSubImage)glfwGetProcAddress("glClearTexSubImage"); \
glBindBuffersBase_ = (Engine_glBindBuffersBase)glfwGetProcAddress("glBindBuffersBase"); \
glBindBuffersRange_ = (Engine_glBindBuffersRange)glfwGetProcAddress("glBindBuffersRange"); \
glBindTextures_ = (Engine_glBindTextures)glfwGetProcAddress("glBindTextures"); \
glBindSamplers_ = (Engine_glBindSamplers)glfwGetProcAddress("glBindSamplers"); \
glBindImageTextures_ = (Engine_glBindImageTextures)glfwGetProcAddress("glBindImageTextures"); \
glBindVertexBuffers_ = (Engine_glBindVertexBuffers)glfwGetProcAddress("glBindVertexBuffers"); \
glClipControl_ = (Engine_glClipControl)glfwGetProcAddress("glClipControl"); \
glCreateTransformFeedbacks_ = (Engine_glCreateTransformFeedbacks)glfwGetProcAddress("glCreateTransformFeedbacks"); \
glTransformFeedbackBufferBase_ = (Engine_glTransformFeedbackBufferBase)glfwGetProcAddress("glTransformFeedbackBufferBase"); \
glTransformFeedbackBufferRange_ = (Engine_glTransformFeedbackBufferRange)glfwGetProcAddress("glTransformFeedbackBufferRange"); \
glGetTransformFeedbackiv_ = (Engine_glGetTransformFeedbackiv)glfwGetProcAddress("glGetTransformFeedbackiv"); \
glGetTransformFeedbacki_v_ = (Engine_glGetTransformFeedbacki_v)glfwGetProcAddress("glGetTransformFeedbacki_v"); \
glGetTransformFeedbacki64_v_ = (Engine_glGetTransformFeedbacki64_v)glfwGetProcAddress("glGetTransformFeedbacki64_v"); \
glCreateBuffers_ = (Engine_glCreateBuffers)glfwGetProcAddress("glCreateBuffers"); \
glNamedBufferStorage_ = (Engine_glNamedBufferStorage)glfwGetProcAddress("glNamedBufferStorage"); \
glNamedBufferData_ = (Engine_glNamedBufferData)glfwGetProcAddress("glNamedBufferData"); \
glNamedBufferSubData_ = (Engine_glNamedBufferSubData)glfwGetProcAddress("glNamedBufferSubData"); \
glCopyNamedBufferSubData_ = (Engine_glCopyNamedBufferSubData)glfwGetProcAddress("glCopyNamedBufferSubData"); \
glClearNamedBufferData_ = (Engine_glClearNamedBufferData)glfwGetProcAddress("glClearNamedBufferData"); \
glClearNamedBufferSubData_ = (Engine_glClearNamedBufferSubData)glfwGetProcAddress("glClearNamedBufferSubData"); \
glFlushMappedNamedBufferRange_ = (Engine_glFlushMappedNamedBufferRange)glfwGetProcAddress("glFlushMappedNamedBufferRange"); \
glGetNamedBufferParameteriv_ = (Engine_glGetNamedBufferParameteriv)glfwGetProcAddress("glGetNamedBufferParameteriv"); \
glGetNamedBufferParameteri64v_ = (Engine_glGetNamedBufferParameteri64v)glfwGetProcAddress("glGetNamedBufferParameteri64v"); \
glGetNamedBufferPointerv_ = (Engine_glGetNamedBufferPointerv)glfwGetProcAddress("glGetNamedBufferPointerv"); \
glGetNamedBufferSubData_ = (Engine_glGetNamedBufferSubData)glfwGetProcAddress("glGetNamedBufferSubData"); \
glCreateFramebuffers_ = (Engine_glCreateFramebuffers)glfwGetProcAddress("glCreateFramebuffers"); \
glNamedFramebufferRenderbuffer_ = (Engine_glNamedFramebufferRenderbuffer)glfwGetProcAddress("glNamedFramebufferRenderbuffer"); \
glNamedFramebufferParameteri_ = (Engine_glNamedFramebufferParameteri)glfwGetProcAddress("glNamedFramebufferParameteri"); \
glNamedFramebufferTexture_ = (Engine_glNamedFramebufferTexture)glfwGetProcAddress("glNamedFramebufferTexture"); \
glNamedFramebufferTextureLayer_ = (Engine_glNamedFramebufferTextureLayer)glfwGetProcAddress("glNamedFramebufferTextureLayer"); \
glNamedFramebufferDrawBuffer_ = (Engine_glNamedFramebufferDrawBuffer)glfwGetProcAddress("glNamedFramebufferDrawBuffer"); \
glNamedFramebufferDrawBuffers_ = (Engine_glNamedFramebufferDrawBuffers)glfwGetProcAddress("glNamedFramebufferDrawBuffers"); \
glNamedFramebufferReadBuffer_ = (Engine_glNamedFramebufferReadBuffer)glfwGetProcAddress("glNamedFramebufferReadBuffer"); \
glInvalidateNamedFramebufferData_ = (Engine_glInvalidateNamedFramebufferData)glfwGetProcAddress("glInvalidateNamedFramebufferData"); \
glInvalidateNamedFramebufferSubData_ = (Engine_glInvalidateNamedFramebufferSubData)glfwGetProcAddress("glInvalidateNamedFramebufferSubData"); \
glClearNamedFramebufferiv_ = (Engine_glClearNamedFramebufferiv)glfwGetProcAddress("glClearNamedFramebufferiv"); \
glClearNamedFramebufferuiv_ = (Engine_glClearNamedFramebufferuiv)glfwGetProcAddress("glClearNamedFramebufferuiv"); \
glClearNamedFramebufferfv_ = (Engine_glClearNamedFramebufferfv)glfwGetProcAddress("glClearNamedFramebufferfv"); \
glClearNamedFramebufferfi_ = (Engine_glClearNamedFramebufferfi)glfwGetProcAddress("glClearNamedFramebufferfi"); \
glBlitNamedFramebuffer_ = (Engine_glBlitNamedFramebuffer)glfwGetProcAddress("glBlitNamedFramebuffer"); \
glGetNamedFramebufferParameteriv_ = (Engine_glGetNamedFramebufferParameteriv)glfwGetProcAddress("glGetNamedFramebufferParameteriv"); \
glGetNamedFramebufferAttachmentParameteriv_ = (Engine_glGetNamedFramebufferAttachmentParameteriv)glfwGetProcAddress("glGetNamedFramebufferAttachmentParameteriv"); \
glCreateRenderbuffers_ = (Engine_glCreateRenderbuffers)glfwGetProcAddress("glCreateRenderbuffers"); \
glNamedRenderbufferStorage_ = (Engine_glNamedRenderbufferStorage)glfwGetProcAddress("glNamedRenderbufferStorage"); \
glNamedRenderbufferStorageMultisample_ = (Engine_glNamedRenderbufferStorageMultisample)glfwGetProcAddress("glNamedRenderbufferStorageMultisample"); \
glGetNamedRenderbufferParameteriv_ = (Engine_glGetNamedRenderbufferParameteriv)glfwGetProcAddress("glGetNamedRenderbufferParameteriv"); \
glCreateTextures_ = (Engine_glCreateTextures)glfwGetProcAddress("glCreateTextures"); \
glTextureBuffer_ = (Engine_glTextureBuffer)glfwGetProcAddress("glTextureBuffer"); \
glTextureBufferRange_ = (Engine_glTextureBufferRange)glfwGetProcAddress("glTextureBufferRange"); \
glTextureStorage1D_ = (Engine_glTextureStorage1D)glfwGetProcAddress("glTextureStorage1D"); \
glTextureStorage2D_ = (Engine_glTextureStorage2D)glfwGetProcAddress("glTextureStorage2D"); \
glTextureStorage3D_ = (Engine_glTextureStorage3D)glfwGetProcAddress("glTextureStorage3D"); \
glTextureStorage2DMultisample_ = (Engine_glTextureStorage2DMultisample)glfwGetProcAddress("glTextureStorage2DMultisample"); \
glTextureStorage3DMultisample_ = (Engine_glTextureStorage3DMultisample)glfwGetProcAddress("glTextureStorage3DMultisample"); \
glTextureSubImage1D_ = (Engine_glTextureSubImage1D)glfwGetProcAddress("glTextureSubImage1D"); \
glTextureSubImage2D_ = (Engine_glTextureSubImage2D)glfwGetProcAddress("glTextureSubImage2D"); \
glTextureSubImage3D_ = (Engine_glTextureSubImage3D)glfwGetProcAddress("glTextureSubImage3D"); \
glCompressedTextureSubImage1D_ = (Engine_glCompressedTextureSubImage1D)glfwGetProcAddress("glCompressedTextureSubImage1D"); \
glCompressedTextureSubImage2D_ = (Engine_glCompressedTextureSubImage2D)glfwGetProcAddress("glCompressedTextureSubImage2D"); \
glCompressedTextureSubImage3D_ = (Engine_glCompressedTextureSubImage3D)glfwGetProcAddress("glCompressedTextureSubImage3D"); \
glCopyTextureSubImage1D_ = (Engine_glCopyTextureSubImage1D)glfwGetProcAddress("glCopyTextureSubImage1D"); \
glCopyTextureSubImage2D_ = (Engine_glCopyTextureSubImage2D)glfwGetProcAddress("glCopyTextureSubImage2D"); \
glCopyTextureSubImage3D_ = (Engine_glCopyTextureSubImage3D)glfwGetProcAddress("glCopyTextureSubImage3D"); \
glTextureParameterf_ = (Engine_glTextureParameterf)glfwGetProcAddress("glTextureParameterf"); \
glTextureParameterfv_ = (Engine_glTextureParameterfv)glfwGetProcAddress("glTextureParameterfv"); \
glTextureParameteri_ = (Engine_glTextureParameteri)glfwGetProcAddress("glTextureParameteri"); \
glTextureParameterIiv_ = (Engine_glTextureParameterIiv)glfwGetProcAddress("glTextureParameterIiv"); \
glTextureParameterIuiv_ = (Engine_glTextureParameterIuiv)glfwGetProcAddress("glTextureParameterIuiv"); \
glTextureParameteriv_ = (Engine_glTextureParameteriv)glfwGetProcAddress("glTextureParameteriv"); \
glGenerateTextureMipmap_ = (Engine_glGenerateTextureMipmap)glfwGetProcAddress("glGenerateTextureMipmap"); \
glBindTextureUnit_ = (Engine_glBindTextureUnit)glfwGetProcAddress("glBindTextureUnit"); \
glGetTextureImage_ = (Engine_glGetTextureImage)glfwGetProcAddress("glGetTextureImage"); \
glGetCompressedTextureImage_ = (Engine_glGetCompressedTextureImage)glfwGetProcAddress("glGetCompressedTextureImage"); \
glGetTextureLevelParameterfv_ = (Engine_glGetTextureLevelParameterfv)glfwGetProcAddress("glGetTextureLevelParameterfv"); \
glGetTextureLevelParameteriv_ = (Engine_glGetTextureLevelParameteriv)glfwGetProcAddress("glGetTextureLevelParameteriv"); \
glGetTextureParameterfv_ = (Engine_glGetTextureParameterfv)glfwGetProcAddress("glGetTextureParameterfv"); \
glGetTextureParameterIiv_ = (Engine_glGetTextureParameterIiv)glfwGetProcAddress("glGetTextureParameterIiv"); \
glGetTextureParameterIuiv_ = (Engine_glGetTextureParameterIuiv)glfwGetProcAddress("glGetTextureParameterIuiv"); \
glGetTextureParameteriv_ = (Engine_glGetTextureParameteriv)glfwGetProcAddress("glGetTextureParameteriv"); \
glCreateVertexArrays_ = (Engine_glCreateVertexArrays)glfwGetProcAddress("glCreateVertexArrays"); \
glDisableVertexArrayAttrib_ = (Engine_glDisableVertexArrayAttrib)glfwGetProcAddress("glDisableVertexArrayAttrib"); \
glEnableVertexArrayAttrib_ = (Engine_glEnableVertexArrayAttrib)glfwGetProcAddress("glEnableVertexArrayAttrib"); \
glVertexArrayElementBuffer_ = (Engine_glVertexArrayElementBuffer)glfwGetProcAddress("glVertexArrayElementBuffer"); \
glVertexArrayVertexBuffer_ = (Engine_glVertexArrayVertexBuffer)glfwGetProcAddress("glVertexArrayVertexBuffer"); \
glVertexArrayVertexBuffers_ = (Engine_glVertexArrayVertexBuffers)glfwGetProcAddress("glVertexArrayVertexBuffers"); \
glVertexArrayAttribBinding_ = (Engine_glVertexArrayAttribBinding)glfwGetProcAddress("glVertexArrayAttribBinding"); \
glVertexArrayAttribFormat_ = (Engine_glVertexArrayAttribFormat)glfwGetProcAddress("glVertexArrayAttribFormat"); \
glVertexArrayAttribIFormat_ = (Engine_glVertexArrayAttribIFormat)glfwGetProcAddress("glVertexArrayAttribIFormat"); \
glVertexArrayAttribLFormat_ = (Engine_glVertexArrayAttribLFormat)glfwGetProcAddress("glVertexArrayAttribLFormat"); \
glVertexArrayBindingDivisor_ = (Engine_glVertexArrayBindingDivisor)glfwGetProcAddress("glVertexArrayBindingDivisor"); \
glGetVertexArrayiv_ = (Engine_glGetVertexArrayiv)glfwGetProcAddress("glGetVertexArrayiv"); \
glGetVertexArrayIndexediv_ = (Engine_glGetVertexArrayIndexediv)glfwGetProcAddress("glGetVertexArrayIndexediv"); \
glGetVertexArrayIndexed64iv_ = (Engine_glGetVertexArrayIndexed64iv)glfwGetProcAddress("glGetVertexArrayIndexed64iv"); \
glCreateSamplers_ = (Engine_glCreateSamplers)glfwGetProcAddress("glCreateSamplers"); \
glCreateProgramPipelines_ = (Engine_glCreateProgramPipelines)glfwGetProcAddress("glCreateProgramPipelines"); \
glCreateQueries_ = (Engine_glCreateQueries)glfwGetProcAddress("glCreateQueries"); \
glGetQueryBufferObjecti64v_ = (Engine_glGetQueryBufferObjecti64v)glfwGetProcAddress("glGetQueryBufferObjecti64v"); \
glGetQueryBufferObjectiv_ = (Engine_glGetQueryBufferObjectiv)glfwGetProcAddress("glGetQueryBufferObjectiv"); \
glGetQueryBufferObjectui64v_ = (Engine_glGetQueryBufferObjectui64v)glfwGetProcAddress("glGetQueryBufferObjectui64v"); \
glGetQueryBufferObjectuiv_ = (Engine_glGetQueryBufferObjectuiv)glfwGetProcAddress("glGetQueryBufferObjectuiv"); \
glMemoryBarrierByRegion_ = (Engine_glMemoryBarrierByRegion)glfwGetProcAddress("glMemoryBarrierByRegion"); \
glGetTextureSubImage_ = (Engine_glGetTextureSubImage)glfwGetProcAddress("glGetTextureSubImage"); \
glGetCompressedTextureSubImage_ = (Engine_glGetCompressedTextureSubImage)glfwGetProcAddress("glGetCompressedTextureSubImage"); \
glGetnCompressedTexImage_ = (Engine_glGetnCompressedTexImage)glfwGetProcAddress("glGetnCompressedTexImage"); \
glGetnTexImage_ = (Engine_glGetnTexImage)glfwGetProcAddress("glGetnTexImage"); \
glGetnUniformdv_ = (Engine_glGetnUniformdv)glfwGetProcAddress("glGetnUniformdv"); \
glGetnUniformfv_ = (Engine_glGetnUniformfv)glfwGetProcAddress("glGetnUniformfv"); \
glGetnUniformiv_ = (Engine_glGetnUniformiv)glfwGetProcAddress("glGetnUniformiv"); \
glGetnUniformuiv_ = (Engine_glGetnUniformuiv)glfwGetProcAddress("glGetnUniformuiv"); \
glReadnPixels_ = (Engine_glReadnPixels)glfwGetProcAddress("glReadnPixels"); \
glGetnMapdv_ = (Engine_glGetnMapdv)glfwGetProcAddress("glGetnMapdv"); \
glGetnMapfv_ = (Engine_glGetnMapfv)glfwGetProcAddress("glGetnMapfv"); \
glGetnMapiv_ = (Engine_glGetnMapiv)glfwGetProcAddress("glGetnMapiv"); \
glGetnPixelMapfv_ = (Engine_glGetnPixelMapfv)glfwGetProcAddress("glGetnPixelMapfv"); \
glGetnPixelMapuiv_ = (Engine_glGetnPixelMapuiv)glfwGetProcAddress("glGetnPixelMapuiv"); \
glGetnPixelMapusv_ = (Engine_glGetnPixelMapusv)glfwGetProcAddress("glGetnPixelMapusv"); \
glGetnPolygonStipple_ = (Engine_glGetnPolygonStipple)glfwGetProcAddress("glGetnPolygonStipple"); \
glGetnColorTable_ = (Engine_glGetnColorTable)glfwGetProcAddress("glGetnColorTable"); \
glGetnConvolutionFilter_ = (Engine_glGetnConvolutionFilter)glfwGetProcAddress("glGetnConvolutionFilter"); \
glGetnSeparableFilter_ = (Engine_glGetnSeparableFilter)glfwGetProcAddress("glGetnSeparableFilter"); \
glGetnHistogram_ = (Engine_glGetnHistogram)glfwGetProcAddress("glGetnHistogram"); \
glGetnMinmax_ = (Engine_glGetnMinmax)glfwGetProcAddress("glGetnMinmax"); \
glTextureBarrier_ = (Engine_glTextureBarrier)glfwGetProcAddress("glTextureBarrier"); \
glSpecializeShader_ = (Engine_glSpecializeShader)glfwGetProcAddress("glSpecializeShader"); \
glMultiDrawArraysIndirectCount_ = (Engine_glMultiDrawArraysIndirectCount)glfwGetProcAddress("glMultiDrawArraysIndirectCount"); \
glMultiDrawElementsIndirectCount_ = (Engine_glMultiDrawElementsIndirectCount)glfwGetProcAddress("glMultiDrawElementsIndirectCount"); \
glPolygonOffsetClamp_ = (Engine_glPolygonOffsetClamp)glfwGetProcAddress("glPolygonOffsetClamp")

//guard end
#endif //INCLUDE_GRAPHICS_GLFUNCTIONS_HPP_