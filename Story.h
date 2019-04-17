#pragma once
#include "Cards.h"
#include "Transform.h"

#include "bluecadet/core/BaseApp.h"
#include "bluecadet/views/TouchView.h"
#include "cinder/Signals.h"

using namespace bluecadet::core;
using namespace bluecadet::views;
using namespace bluecadet::touch;

class Story
{
public:
	Story(); //default constructor
	Story(Cards cards);
	~Story();

    void	handleTouchBegan(const bluecadet::touch::TouchEvent& touchEvent);
    void	handleTouchMoved(const bluecadet::touch::TouchEvent& touchEvent);
    void	handleTouchEnded(const bluecadet::touch::TouchEvent& touchEvent);

    bluecadet::views::TouchViewRef storyView;

private:
	Cards storyCards = Cards();
	Transform transform = Transform();
};

