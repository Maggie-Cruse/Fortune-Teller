#pragma once
#include <string>
#include "ofMain.h"

using std::string;

class GameScreen
{

public:
	int outcomeVariable{};

	ofImage background;
	ofImage good;
	ofImage bad;
	ofImage meh;
	ofBoxPrimitive symbol;


	GameScreen();
	void backgroundLoad();
	void standard();
	~GameScreen();
};

