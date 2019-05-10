#pragma once
#include "Transform.h"
#include "cinder/app/App.h"
#include "cinder/Log.h"
#include "cinder/Text.h"
#include "cinder/Font.h"
#include "cinder/gl/Texture.h"
#include "cinder/GeomIo.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

#include "bluecadet/views/TouchView.h"
#include "bluecadet/views/StrokedRoundedRectView.h"
#include "bluecadet/views/TextView.h"
#include "bluecadet/views/ImageView.h"
#include "bluecadet/views/MaskView.h"
#include "bluecadet/text/FontManager.h"
#include "bluecadet/text/StyledTextParser.h"
#include "bluecadet/text/StyledTextLayout.h"


#include "bluecadet/core/BaseApp.h"


#include <iostream>
#include <string>
#include <math.h>

using namespace ci;
using namespace ci::app;
using namespace std;

using namespace bluecadet::views;

//class for card.
class Card
{
public:
	Card();
	Card(const float, const float, pair<string, string> title, pair<string, string> body, string imgPath);
	~Card();

	void handleTouchTapped(bluecadet::touch::TouchEvent* touchEvent);
	void handleTouchBegan(bluecadet::touch::TouchEvent* touchEvent);
	void handleTouchMoved(bluecadet::touch::TouchEvent* touchEvent);
	void handleTouchEnded(bluecadet::touch::TouchEvent* touchEvent);
	float initFingDist;
	map<int, bluecadet::touch::TouchEvent> activeTouches;

	
    float initDist;
	float currDist;
	float maxDist;
	bool firstTouchPoint;
	int firstTouchId;
    float angle;
    float initAngle;
    glm::mat3 scaleMat;
    glm::mat3 transMat;
    glm::mat3 rotMat;

	float x;
	float y;
	float width;
	float height;
	string titleText;
	string subtitleText;
	string bodyText;
	string imgPath;
	float cardSize;
	int pathID;
	bool isClicked;
	bool isDragged;
	bool isFront;
	bool isShown;
    bool isScaled;

	// bluecadet views
	TouchViewRef object;
	StrokedRoundedRectViewRef border;
	BaseViewRef contentBoxFront;
	BaseViewRef contentBoxBack;
	ImageViewRef image;
	StrokedRoundedRectViewRef roundImgBorder;
	MaskViewRef imgMask;
	TextViewRef title;
	TextViewRef body;
	StrokedRoundedRectViewRef colorLayer;

	bool twoTouches;

	Rectf rect;
	Transform transform;

//	void translate(TouchEvent::Touch touch);
//	void scaling(TouchEvent::Touch touch);
//	void rotation(TouchEvent::Touch touch);

	void animateTranslate(const vec2 pos);

	Color bgColor;
	Color borderColor;
	float borderRadius;
	float borderWidth;

	Color textColor;

	float elementWidth;
	float paddingX;

	gl::TextureRef renderTexture(bluecadet::text::StyledTextLayoutRef text);
	void initElements();
	void toggleView();
	bool flipped;
	void setStyles();
	void setFrontLayout();
	void setBackLayout();

};

