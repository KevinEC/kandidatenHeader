#pragma once
#include "cinder/Xml.h"
#include "cinder/DataSource.h"
#include "cinder/app/App.h"
#include "cinder/Log.h"
#include <string>
#include <vector>

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
	
};

