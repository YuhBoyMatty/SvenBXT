#include "SvenBXT.h"

cvar_t* sbxt_autojump;

playermove_t* g_ppmove;

bool bDucktapDown = false;

void IN_BXT_TAS_Ducktap_Down()
{
	bDucktapDown = true;
}

void IN_BXT_TAS_Ducktap_Up()
{
	bDucktapDown = false;
}

void HOOKED_HUD_PlayerMove(struct playermove_s* ppmove, qboolean server)
{
	ORIG_HUD_PlayerMove(ppmove, server);
	g_ppmove = ppmove;
}

void HOOKED_CL_CreateMove(float frametime, usercmd_s* cmd, int active)
{
	ORIG_CL_CreateMove(frametime, cmd, active);

	if (!g_ppmove)
		return;

	if (bDucktapDown)
	{
		cmd->buttons |= IN_DUCK;

		static bool s_duck_was_down_last_frame = false;
		static bool should_release_duck;

		should_release_duck = (!(g_ppmove->flags & FL_ONGROUND) && g_ppmove->waterlevel < 1);

		if (s_duck_was_down_last_frame && (g_ppmove->flags & FL_ONGROUND) && g_ppmove->waterlevel < 1)
			should_release_duck = true;

		if (should_release_duck)
		{
			cmd->buttons &= ~IN_DUCK;
		}

		s_duck_was_down_last_frame = ((cmd->buttons & IN_DUCK) != 0);
	}
	else
	{
		if (sbxt_autojump->value && (cmd->buttons & IN_JUMP) && !(g_ppmove->flags & FL_ONGROUND))
		{
			cmd->buttons &= ~IN_JUMP;
		}
	}
}

void IN_Init()
{
	g_lpEngfuncs->AddCommand("+sbxt_ducktap", IN_BXT_TAS_Ducktap_Down);
	g_lpEngfuncs->AddCommand("-sbxt_ducktap", IN_BXT_TAS_Ducktap_Up);
	sbxt_autojump = CVAR_CREATE("sbxt_autojump", "0", 0);
}