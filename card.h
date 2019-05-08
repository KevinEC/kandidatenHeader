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
	Card(const float, const float, std::string title, std::string body);
	~Card();
	void update();
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
	//map<int, bluecadet::touch::TouchEvent> activeTouches;
	vector<bluecadet::touch::TouchEvent> activeTouches;
	
    float initDist;
	float currDist;
	float maxDist;
	bool firstTouchPoint;
	int firstTouchId;
    float angle;
    float initAngle;
	vector<vec2> currentpos;
    glm::mat3 scaleMat;
    glm::mat3 transMat;
    glm::mat3 rotMat;
//    TouchEvent::Touch lastTouch;
//    TouchEvent::Touch lastRotTouch;

	float x;
	float y;
	float width;
	float height;
	string title;
	string subtitle;
	string body;
	//image img[];
	//Rectf rect;
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

	Color bgColor;
	Color borderColor;
	float borderRadius;
	ColorA textColor;
	
	DataSourceRef raleway;
	DataSourceRef montserrat;


	float elementWidth;
	float paddingX;

	gl::TextureRef imgTex;
	gl::TextureRef titleTex;
	gl::TextureRef bodyTex;
	gl::TextureRef tagsTex;

	void setpos(float m, float n);
	gl::TextureRef renderTexture(TextBox &text);
	void renderCard();
	void initElements();
	void updateElementCoords();
	void setStyles();
	/*
	string rubrik
	string brödtext
	img img1
	img img2
	taget från xml
	*/

	//State currentstate;
};

