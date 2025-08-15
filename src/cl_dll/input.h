#ifdef INPUT_H_RECURSE_GUARD
#error Recursive header files inclusion detected in input.h
#else //INPUT_H_RECURSE_GUARD

#define INPUT_H_RECURSE_GUARD

#ifndef INPUT_H_GUARD
#define INPUT_H_GUARD
#pragma once

#ifdef __cplusplus

void HOOKED_HUD_PlayerMove(struct playermove_s* ppmove, qboolean server);
void HOOKED_CL_CreateMove(float frametime, usercmd_s* cmd, int active);
void IN_Init();

#else //!__cplusplus
#error C++ compiler required to compile input.h
#endif //__cplusplus

#endif //INPUT_H_GUARD

#undef INPUT_H_RECURSE_GUARD
#endif //INPUT_H_RECURSE_GUARD