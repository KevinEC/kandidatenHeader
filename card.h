#pragma once
#include <string>
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
	void setpos(int x, int y);

	/*
	string rubrik
	string br�dtext
	img img1
	img img2

	taget fr�n xml
	*/

	//State currentstate;
};
