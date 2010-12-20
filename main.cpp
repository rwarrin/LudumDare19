#include "Globals.h"
#include "Window.h"
#include "Game.h"
#include "MainMenu.h"

#include <hge.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	CreateHGEWindow("LudumDare19", 640, 480);

	if(hge->System_Initiate()) {

		ShowMainMenu();
		hge->System_Start();
	}
	else {
		MessageBox(NULL, hge->System_GetErrorMessage(), "Error", MB_OK | MB_ICONERROR);
	}

	hge->System_Shutdown();
	hge->Release();

	return 0;
}