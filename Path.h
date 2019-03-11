#pragma once
#include <glm/vec3.hpp> // glm::vec3

const int NUMBEROFCOORDINATES = 10;
class Path
{
public:
	Path();
	~Path();
private:
	glm::vec3 coordinate[NUMBEROFCOORDINATES];
	int velocity;

};

