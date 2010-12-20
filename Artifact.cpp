#include "Artifact.h"

Artifact::Artifact() {
	found = false;
	x = (rand() % 608) + 32;
	y = (rand() % 448) + 32;

	mName = "un-named artifact";
	mCashValue = -99;
	mPointValue = -99;
}

Artifact::Artifact(std::string name, int cashvalue, int pointvalue) {
	found = false;
	x = (rand() % 608) + 32;
	y = (rand() % 448) + 32;

	mName = name;
	mCashValue = cashvalue;
	mPointValue = pointvalue;
}

Artifact::~Artifact() {

}