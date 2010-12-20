#ifndef ARTIFACT_H
#define ARTIFACT_H

#include <string>

class Artifact {
public:
	Artifact();
	Artifact(std::string name, int cashvalue, int pointvalue);
	~Artifact();

	std::string mName;
	int mCashValue;
	int mPointValue;

	int x;
	int y;
	bool found;
private:

};

#endif  // ARTIFACT_H