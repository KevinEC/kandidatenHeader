#pragma once
#include <string>
using namespace std;
//class for card. 
class Card
{
public:
	Card();
	Card(float, float);
	~Card();
	//State getcurrentstate();

	float x;
	float y;
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

	/*
	string rubrik
	string brödtext
	img img1
	img img2

	taget från xml
	*/

	//State currentstate;
};
