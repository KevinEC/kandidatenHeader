#pragma once
#include "Animate.h"
#include "cinder/app/App.h"
#include "cinder/gl/gl.h"
#include <cmath>
#include "cinder/Vector.h"
#include <glm/gtx/vector_angle.hpp>

class Transform
{
public:
	Transform(); //default constructor
	~Transform();

	float scale(glm::vec2 v1, glm::vec2 v2);
    float rotateCard(glm::vec2 v1, glm::vec2 v2);
	glm::mat3 rotate(glm::vec2 v1, glm::vec2 v2);
	void translate();
	float * translate(const float x, const float y, const float mx, const float my, const bool isDragged);
private:
	//Animate animation = Animate();
	float deltaX;
	float deltaY;
};