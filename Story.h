#pragma once
#include "Cards.h"
#include "Transform.h"
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

