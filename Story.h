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
	Story(string name, Cards* cards);
	~Story();

	void handleTouchBegan(const bluecadet::touch::TouchEvent* touchEvent);
	void handleTouchMoved(const bluecadet::touch::TouchEvent* touchEvent);
	void handleTouchEnded(const bluecadet::touch::TouchEvent* touchEvent);

    void setUpCard(TouchViewRef view, int *offset, Card *card, string name = "noTitle", Card *card2 = new Card());
    void setUpHeader(StrokedRoundedRectViewRef view, string name);
    void setUpBody(StrokedRoundedRectViewRef view, Card *card, Card *card2 = new Card());
    void setUpImage(StrokedRoundedRectViewRef view, Card *card, Card *card2 = new Card());

    void swipeUp();
    void swipeDown();

	vector<pair<string, Cards*>> sort(vector<string>* titles, vector<pair<string, string>>* bodies, vector<string>* imgPaths);
    
    bluecadet::views::TouchViewRef storyView;
    
    //Timer t;
    //Timers timer;

private:

	Cards* storyCards;
	Transform transform;
	string name;

};

