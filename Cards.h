#pragma once
#include "card.h"
#include "Path.h"

#include "cinder/app/MouseEvent.h"
#include "cinder/app/TouchEvent.h"

//#include <hash_map>
#include <map>

//container class for card
class Cards
{
public:
	Cards();
	Cards(string categorie);
	Cards(vector<pair<string, string>>* titles, vector<pair<string, string>>* bodyText);
	Cards(vector<pair<string, string>>* titles, vector<pair<string, string>>* bodyText, vector<pair<string, string>>* categories, vector<pair<string, string>>* cardCat, bool createAll);
	~Cards();
	void sort();
	void categorize(vector< pair<string, Cards*> >& sortedCards, vector<pair<string, string>>* cardCat,vector<pair<string, string>>* titles, vector<pair<string, string>>* bodyText);
	void collision();
	void setPath(Card &inst);
	void search();

	void renderCards();

	void	mouseDrag(MouseEvent event) ;
	void	mouseDown(MouseEvent event) ;
	void	mouseUp(MouseEvent event) ;
	void	touchesBegan(TouchEvent event) ;
	void	touchesMoved(TouchEvent event) ;
	void	touchesEnded(TouchEvent event) ;

	vector<Card*> allcards;

	Card testkort;
	Card rectKort;

	bool loaded;
	string categorie;
	//hash_map<string, card[]> categories;'

};
