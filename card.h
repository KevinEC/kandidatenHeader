#pragma once
#include "Transform.h"
#include "cinder/app/MouseEvent.h"
#include "cinder/app/App.h"
#include "cinder/Log.h"

#include "cinder/svg/SvgGl.h"
#include "cinder/svg/Svg.h"
#include "cinder/cairo/Cairo.h"

#include "cinder/Text.h"
#include "cinder/gl/Texture.h"
#include <string>

using namespace ci;
using namespace ci::app;
using namespace std;



//class for card. 
class Card
{
public:
	Card();
	Card(float, float, const float, const float);
	~Card();
	void update();
	//State getcurrentstate();
	void mouseDrag(MouseEvent event);
	void mouseDown(MouseEvent event);
	void mouseUp(MouseEvent event);

	float x;
	float y;
	float width;
	float height;
	string title;
	string subtitle;
	string body;
	//image img[];
	//Rectf rect;
	double cardSize;
	int pathID;
	bool isClicked;
	bool isDragged;
	bool isFront;
	bool isShown;

	Rectf rect;
	Transform transform;
	gl::TextureRef text;
	gl::TextureRef cardBg;

	void setpos(float m, float n);
	void renderTexture();
	void initSvg();
	/*
	string rubrik
	string brödtext
	img img1
	img img2
	taget från xml
	*/

	//State currentstate;
};

