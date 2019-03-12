#pragma once
#include "cinder/gl/gl.h"	//glm::vec3
#include <vector>
//#include <glm/vec3.hpp> // glm::vec3
#include <vector>

#include "Cards.h"
#include "cinder/gl/gl.h"


using namespace std;

const int NUMCOORDS = 10;
class Path
{
public:
	Path();
	~Path();
private:
	int velocity;
	glm::vec3 coord;
	glm::vec3 coordarray[NUMBEROFCOORDINATES];


	
	//vec3 testvec;
	//vec3 coord[NUMBEROFCOORDINATES];

	//Card allcards[2];
	//glm::vec3 coord[2];
	
};

