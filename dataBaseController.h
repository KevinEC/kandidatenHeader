#pragma once
#include "cinder/Xml.h"
#include "cinder/DataSource.h"
#include "cinder/app/App.h"
#include "cinder/Log.h"
#include <string>
#include <vector>
#include <utility> //std::pair

using namespace ci;
using namespace ci::app;



class dataBaseController
{
public:
	dataBaseController();
	dataBaseController(std::string fileLocation, std::string inFileType, std::string url);
	~dataBaseController();

	std::string fileType;
	std::string fileLocation;

	ci::XmlTree * tree;
	ci::XmlTree * establishConnection(std::string url);	

	void extractCategories(std::vector <std::string > & categories);
	void extractTitles(std::vector< std::pair<std::string, std::string> > & titles);
	void extractBodies(std::vector< std::pair<std::string, std::string> > & bodyText);
	void extractImgPaths(std::vector<std::string> & imgPath);
	void extractCardCats(std::vector<std::vector<std::string> > & cardCategory);
	void extractStorytitles(std::vector <std::string > & storytitles);
	void extractstoryBodies(std::vector< std::pair<std::string, std::string> > &storybodies);
	void extractstoryImgPaths(std::vector<std::string> & imgPath);
};
