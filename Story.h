#pragma once
#include "Cards.h"
#include "Transform.h"
//#include "timercpp.h"

#include "bluecadet/core/BaseApp.h"
#include "bluecadet/views/TouchView.h"
#include "bluecadet/views/TextView.h"
#include "bluecadet/views/ImageView.h"
#include "cinder/Signals.h"
#include "cinder/Timer.h"
#include "cinder/Timeline.h"

using namespace bluecadet::core;
using namespace bluecadet::views;
using namespace bluecadet::touch;

class Story
{
public:
	Story(); //default constructor
	Story(Cards* cards);
	~Story();

	void handleTouchBegan(const bluecadet::touch::TouchEvent* touchEvent);
	void handleTouchMoved(const bluecadet::touch::TouchEvent* touchEvent);
	void handleTouchEnded(const bluecadet::touch::TouchEvent* touchEvent);

    void setUpCard(TouchViewRef view, int *offset);
    void setUpHeader(StrokedRoundedRectViewRef view);
    void setUpBody(StrokedRoundedRectViewRef view);
    void setUpImage(StrokedRoundedRectViewRef view);

	vector<pair<string, Cards*>> sort(vector<string>* titles, vector<pair<string, string>>* bodies, vector<string>* imgPaths);
    
    bluecadet::views::TouchViewRef storyView;
    

private:

	Cards* storyCards;
	Transform transform;

};

