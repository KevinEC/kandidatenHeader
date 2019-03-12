#pragma once
#include "Transform.h"
#include "Cards.h"
class Story
{
public:
	Story(); ////default constructor
	Story(Cards cards);
	~Story();

private:
	Cards storyCards = Cards();
	Transform transform = Transform();
};

