#include "SvenBXT.h"

void HOOKED_HUD_DrawTransparentTriangles(void)
{
	ORIG_HUD_DrawTransparentTriangles();
}