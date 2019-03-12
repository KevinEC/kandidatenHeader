#pragma once
#include "cinder/gl/gl.h"	//glm::vec3
#include <vector>

using namespace std;

const int NUMCOORDS = 10;
class Path
{
public:
	Path();
	~Path();
private:
	glm::vec3 coordinates[NUMCOORDS];
	int velocity;

};

