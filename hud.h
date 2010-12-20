#ifndef HUD_H
#define HUD_H

#include "Globals.h"

#include <hge.h>
#include <hgefont.h>

class HUD {
public:
	HUD();
	~HUD();

	bool Render();
private:
	hgeFont *font;
};

#endif // HUD_H