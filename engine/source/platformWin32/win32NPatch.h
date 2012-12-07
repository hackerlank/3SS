//-----------------------------------------------------------------------------
// Torque
// Copyright GarageGames, LLC 2011
//-----------------------------------------------------------------------------

// for the moment, this seems to be the best roundup of
// the npatch extensions on the PC.

#ifndef GL_ATI_pn_triangles
#define GL_ATI_pn_triangles 1

#define GL_PN_TRIANGLES_ATI							0x87F0
#define GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI	0x87F1
#define GL_PN_TRIANGLES_POINT_MODE_ATI				0x87F2
#define GL_PN_TRIANGLES_NORMAL_MODE_ATI				0x87F3
#define GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI		0x87F4
#define GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI		0x87F5
#define GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI		0x87F6
#define GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI		0x87F7
#define GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI   0x87F8

typedef void (APIENTRY *PFNGLPNTRIANGLESIATIPROC)(GLenum pname, GLint param);
typedef void (APIENTRY *PFNGLPNTRIANGLESFATIPROC)(GLenum pname, GLfloat param);

#endif

#define GL_NPATCH_EXT_STRING		"GL_ATI_pn_triangles"
#define GL_NPATCH_SETINT_STRING		"glPNTrianglesiATI"
typedef PFNGLPNTRIANGLESIATIPROC	PFNNPatchSetInt;

#define GETINT_NPATCH_MAX_LEVEL		GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI
#define GL_NPATCH_FLAG				GL_PN_TRIANGLES_ATI
#define GL_NPATCH_LOD				GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI

#define SETINT_NPATCH_POINTINTERP	GL_PN_TRIANGLES_POINT_MODE_ATI
#define SETINT_NPATCH_NORMALINTERP	GL_PN_TRIANGLES_NORMAL_MODE_ATI

#define NPATCH_POINTINTERP_MIN		GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI
#define NPATCH_POINTINTERP_MAX		GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI

#define NPATCH_NORMALINTERP_MIN		GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI
#define NPATCH_NORMALINTERP_MAX		GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI