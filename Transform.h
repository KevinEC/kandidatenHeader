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
private:
	//Animate animation = Animate();
};

