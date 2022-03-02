#pragma once
#include "ofMain.h"


class FunctionScreen
{
	ofImage startImage;
	ofImage endImage;
public:
	FunctionScreen();
	void setup();
	void start();
	void end();
	int buttons();
	~FunctionScreen();
};

