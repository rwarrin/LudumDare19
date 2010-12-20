#include "Game.h"
#include "Globals.h"
#include "hud.h"
#include "Artifact.h"

#include <hgefont.h>

namespace {
	HUD *hud;
}

void StartGame() {
	srand(hge->Timer_GetTime());
	hud = new HUD;

	hge->System_SetState(HGE_FRAMEFUNC, MainGameFrameFunction);
	hge->System_SetState(HGE_RENDERFUNC, MainGameRenderFunction);
}

bool MainGameFrameFunction() {
	if(hge->Input_KeyDown(HGEK_ESCAPE)) {
		return true;
	}

	return false;
}

bool MainGameRenderFunction() {
	hge->Gfx_BeginScene();
	hge->Gfx_Clear(0x333333);

	hud->Render();

	hge->Gfx_EndScene();
	return false;
}