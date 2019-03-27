#pragma once
#include "card.h"
#include "Path.h"
//#include <hash_map>
#include <map>

//container class for card
class Cards
{
public:
	Cards();
	Cards(std::vector<std::pair<std::string, std::string>>* titles, std::vector<std::pair<std::string, std::string>>* bodyText);
	~Cards();
	void sort();
	void categorize();
	void collision();
	void setPath(Card &inst);
	void search();

	std::vector<Card> allcards;

	Card testkort;
	Card rectKort;
	//hash_map<string, card[]> categories;'

};
