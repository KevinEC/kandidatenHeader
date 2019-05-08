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
	vector<pair<string, Cards*>> categorize(vector<pair<string, string>>* titles, vector<pair<string, string>>* bodyText, vector<string>* imgPath, vector<string>* categories, vector<vector<string>>* cardCat);
	vector<pair<string, Cards*>>* sort(vector< pair<string, Cards*> >* categorizedCards, vector<vector<string>>* cardCat,vector<pair<string, string >>* titles, vector<pair<string, string >>* bodyText, vector<string>* imgPath);
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

    static void translateCards(Cards & c, vec2 storyPos)
    {
        auto kids = c.view->getChildren();
        CI_LOG_I("kids: " << kids.size());
        /*
        categorie.second->view->setSize(vec2{ 0.5f*windowSize.x, windowSize.y });
        categorie.second->view->setGlobalPosition(ivec2{ 960,0 });
        categorie.second->view->setTransformOrigin(0.5f * categorie.second->view->getSize());

        auto kids = categorie.second->view->getChildren();
        for (auto &kid : kids)
        {
            if (!(kid->isHidden())) kid->setScale(0.5); // scale kid
        }
        */
    }

};
