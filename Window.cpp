#include "Window.h"
#include "Globals.h"

void CreateHGEWindow(std::string title, int width, int height) {
	hge = hgeCreate(HGE_VERSION);

	hge->System_SetState(HGE_SCREENWIDTH, width);
	hge->System_SetState(HGE_SCREENHEIGHT, height);
	hge->System_SetState(HGE_SCREENBPP, 32);
	hge->System_SetState(HGE_FPS, 60);
	hge->System_SetState(HGE_WINDOWED, true);
	hge->System_SetState(HGE_HIDEMOUSE, false);

	hge->System_SetState(HGE_TITLE, title.c_str());
	hge->System_SetState(HGE_LOGFILE, "log.log");
}