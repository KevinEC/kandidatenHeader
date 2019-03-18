#pragma once
#include "cinder/gl/gl.h"	//glm::vec3
#include <vector>
#include "Cards.h"


using namespace std;

const int NUMCOORDS = 10;
class Path
{
public:
	Path();
	~Path();
private:
	int velocity;
	glm::vec3 coord[NUMCOORDS];
	
};

