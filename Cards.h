#pragma once
#include "card.h"
#include "Path.h"
#include "bluecadet/views/BaseView.h"

//#include <hash_map>
#include <map>

//container class for card
class Cards
{
public:
	Cards();
	Cards(string categorie);
	~Cards();
	vector<pair<string, Cards*>> categorize(vector<pair<string, string>>* titles, vector<pair<string, string>>* bodyText, vector<string>* categories, vector<vector<string>>* cardCat);
	vector<pair<string, Cards*>>* sort(vector< pair<string, Cards*> >* sortedCards, vector<vector<string>>* cardCat,vector<pair<string, string >>* titles, vector<pair<string, string >>* bodyText);
	void collision();
	void setPath(Card &inst);
	void search();

	//Help functions
	void addCard(Card *card);
	void renderCards();
	void addView(bluecadet::views::BaseViewRef view);
	bool findCat(vector<string>::iterator first, vector<string>::iterator last, string searched);


	vector<Card*> allcards;
	string categorie;
	bool render;
	bluecadet::views::BaseViewRef view;

};
