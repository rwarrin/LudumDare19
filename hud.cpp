#include "hud.h"

HUD::HUD() {
	font = new hgeFont("C:\\Projects\\LudumDare19\\Debug\\data\\font\\font.fnt");
}

HUD::~HUD() {
	delete font;
}

bool HUD::Render() {
	font->printf(10, 10, HGETEXT_LEFT, "0 / 0 Fragments Found.");
	font->printf(630, 10, HGETEXT_RIGHT, "100 Monies Remaining.");
	font->printf(10, 450, HGETEXT_LEFT, "Score: OVER 9000!");
	return false;
}