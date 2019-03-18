#pragma once
#include "card.h"
#include "Path.h"
//#include <hash_map>
#include <map>
#include "Path.h"


//container class for card
class Cards
{
public:
	Cards();
	~Cards();
	void sort();
	void categorize();
	void collision();
	void setPath(Card &inst);
	void search();


	//	Card allcards[2];

	Card testkort;
	Card rectKort;
	//hash_map<string, card[]> categories;'



};
