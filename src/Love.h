#pragma once

#include <string>
#include "GameScreen.h"
#include "ofMain.h"


using std::string;

class Love: public GameScreen
{
	ofImage symbol0;
	ofImage symbol1;
	ofImage symbol2;
	ofImage symbol3;
	ofImage symbol4;
	ofImage symbol5;



public:
	Love();
	void display(int outcomeVariable);
	void setup();

	~Love();
};

