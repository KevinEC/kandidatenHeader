#pragma once
#include "cinder/gl/gl.h"	//glm::vec3
#include <vector>
//#include <glm/vec3.hpp> // glm::vec3



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

