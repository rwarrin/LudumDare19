#include "Game.h"
#include "Globals.h"

void StartGame() {
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
	hge->Gfx_EndScene();
	return false;
}