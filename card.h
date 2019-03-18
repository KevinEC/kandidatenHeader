#pragma once
#include <string>
#include "cinder/app/MouseEvent.h"
#include "cinder/app/App.h"
#include "cinder/Log.h"
//#include "cinder/Area.h"
//#include "Transform.h"


using namespace ci;
using namespace ci::app;
using namespace std;



//class for card. 
class Card
{
public:
	Card();
	Card(int, int, const int, const int);
	~Card();
	void update();
	//State getcurrentstate();
	void mouseDrag(MouseEvent event);
	void mouseDown(MouseEvent event);

	int x;
	int y;
	Rectf rect;
	int width;
	int height;
	string title;
	string subtitle;
	string body;
	//image img[];
	//Rectf rect;
	double cardSize;
	int pathID;
	bool isClicked;
	bool isFront;
	bool isShown;
	void setpos(int m, int n);

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

