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

using namespace ci;
using namespace ci::app;
using namespace std;

//class for card.
class Card
{
public:
	Card();
	Card(const float, const float, std::string title, std::string body, std::string imgPath);
	~Card();
	void update();
	void draw();
	//State getcurrentstate();
	/*void mouseDrag(MouseEvent event);
	void mouseDown(MouseEvent event);
	void mouseUp(MouseEvent event);*/

//	void touchesBegan(TouchEvent event);
//	void touchesMoved(TouchEvent event);
//	void touchesEnded(TouchEvent event);

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
//    TouchEvent::Touch lastTouch;
//    TouchEvent::Touch lastRotTouch;

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

	bluecadet::views::TouchViewRef object;

//	TouchEvent::Touch lastTouch;
	bool twoTouches;

	Rectf rect;
	Transform transform;

//	void translate(TouchEvent::Touch touch);
//	void scaling(TouchEvent::Touch touch);
//	void rotation(TouchEvent::Touch touch);

	vec2 imgCo;
	vec2 titleCo;
	vec2 bodyCo;
	vec2 tagsCo;

	gl::TextureRef titleTexture;

	Color bgColor;
	Color borderColor;
	float borderRadius;
	float borderWidth;

	Color textColor;

	float elementWidth;
	float paddingX;

	bluecadet::text::StyledTextLayoutRef titleTex;

	void setpos(float m, float n);
	gl::TextureRef renderTexture(bluecadet::text::StyledTextLayoutRef text);
	void renderCard();
	void initElements();
	void updateElementCoords();
	void setStyles();

	//State currentstate;
};

