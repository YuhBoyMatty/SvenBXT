#ifdef TRI_H_RECURSE_GUARD
#error Recursive header files inclusion detected in tri.h
#else //TRI_H_RECURSE_GUARD

#define TRI_H_RECURSE_GUARD

#ifndef TRI_H_GUARD
#define TRI_H_GUARD
#pragma once

#ifdef __cplusplus

void HOOKED_HUD_DrawTransparentTriangles(void);

#else //!__cplusplus
#error C++ compiler required to compile tri.h
#endif //__cplusplus

#endif //TRI_H_GUARD

#undef TRI_H_RECURSE_GUARD
#endif //TRI_H_RECURSE_GUARD