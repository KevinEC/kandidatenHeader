#pragma once
#include "Animate.h"
#include "Cards.h"
#include "Card.h"
class Transform
{
public:
	Transform(); //default constructor
	~Transform();

	void scale();
	void rotate();
	static void translate(Card &kort);
	static void translate(Card &kort, const int x, const int y);
private:
	//Animate animation = Animate();
};