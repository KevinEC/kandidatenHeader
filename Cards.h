#pragma once
#include "card.h"
//#include <hash_map>
#include <map>
//container class for card
class Cards :
	public Card
{
public:
	Cards();
	~Cards();
	void sort();
	void categorize();
	void collision();
	void setPath(Card inst);
	void search();
	
	//Card allcards[];
	//hash_map<string, card[]> categories;'
		
	

};

