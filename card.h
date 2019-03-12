#pragma once
#include <string>
//#include "Transform.h"
//#include "Transform.h"

using namespace std;

//class for card. 
class Card
{
public:
	Card();
	Card(int, int);
	~Card();
	//State getcurrentstate();

	int x;
	int y;
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
};
