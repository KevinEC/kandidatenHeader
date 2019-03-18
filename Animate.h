#pragma once
//#include "C:\Program Files (x86)\cinder_0.9.1_vc2013\include\cinder\GeomIo.h"

#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "cinder/System.h"
#include "cinder/Rand.h"
#include "cinder/Log.h"

class Animate 
{
public:
	Animate();
	~Animate();

	int test;

	void newPage();
	void turnCard();
	void move();
	void background();

};

