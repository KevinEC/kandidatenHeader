#pragma once
#include "Transform.h"
#include "cinder/app/MouseEvent.h"
#include "cinder/app/App.h"
#include "cinder/Log.h"
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
	Rectf rect;
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

	Transform transform;

	void setpos(float m, float n);

	/*
	string rubrik
	string brödtext
	img img1
	img img2
	taget från xml
	*/

	//State currentstate;

	bool mPressed;

};

