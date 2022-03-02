#pragma once

#include <string>
#include "ofMain.h"
#include "GameScreen.h"

using std::string;

class Health: public GameScreen
{
	ofImage symbol0;
	ofImage symbol1;
	ofImage symbol2;
	ofImage symbol3;
	ofImage symbol4;
	ofImage symbol5;

public:
	Health();
	void display(int outcomeVariable);
	void setup();
	~Health();
};

