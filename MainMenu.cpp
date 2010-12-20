#include "MainMenu.h"
#include "Game.h"
#include "Globals.h"

#include <hgefont.h>
#include <hgesprite.h>

namespace {
	hgeFont *font;
	HTEXTURE backgroundtexture;
	hgeSprite *backgroundsprite;
}  // anonymous namespace

void ShowMainMenu() {
	font = new hgeFont("C:\\Projects\\LudumDare19\\Debug\\data\\font\\font.fnt");
	backgroundtexture = hge->Texture_Load("C:\\Projects\\LudumDare19\\Debug\\data\\images\\menu\\menu.png");
	backgroundsprite = new hgeSprite(backgroundtexture, 0, 0, 640, 480);

	hge->System_SetState(HGE_FRAMEFUNC, MainMenuFrameFunction);
	hge->System_SetState(HGE_RENDERFUNC, MainMenuRenderFunction);
}

bool MainMenuFrameFunction() {
	if(hge->Input_KeyDown(HGEK_ESCAPE)) {
		return true;
	}

	if(hge->Input_KeyDown(HGEK_SPACE)) {
		delete font;
		delete backgroundsprite;
		hge->Texture_Free(backgroundtexture);
		StartGame();
	}

	return false;
}

bool MainMenuRenderFunction() {
	hge->Gfx_BeginScene();
	hge->Gfx_Clear(0x000000);

	backgroundsprite->Render(0, 0);
	font->printf(320, 400, HGETEXT_CENTER, "Press SPACE to begin.");

	hge->Gfx_EndScene();
	return false;
}