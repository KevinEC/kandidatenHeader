#pragma once
#include "Animate.h"
class Transform
{
public:
	Transform(); //default constructor
	~Transform();

	void scale();
	void rotate();
	void translate();
	float * translate(const float x, const float y, const float mx, const float my, const bool isDragged);
private:
	//Animate animation = Animate();
	float deltaX;
	float deltaY;
};