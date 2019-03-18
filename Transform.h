#pragma once
#include "Animate.h"
#include "Card.h"
class Transform
{
public:
	Transform(); //default constructor
	~Transform();

	void scale();
	void rotate();
	void translate(Card &kort);
	void translate(Card &kort, const int x, const int y);
private:
	//Animate animation = Animate();
	float deltaX;
	float deltaY;
};