#pragma once
#include "cinder/Xml.h"
#include "cinder/DataSource.h"
#include "cinder/app/App.h"
#include "cinder/Log.h"

using namespace ci;
using namespace ci::app;

#include <string>

class dataBaseController
{
public:
	dataBaseController();
	dataBaseController(std::string fileLocation, std::string inFileType);
	~dataBaseController();

	std::string fileType;
	std::string fileLocation;
	ci::XmlTree* establishConnection(std::string url); //

};

