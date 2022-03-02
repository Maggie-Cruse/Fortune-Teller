#include <string>
#include "Money.h"
using std::string;


Money::Money()
{

}

void Money::setup() {
	backgroundLoad();
	symbol0.load("money04.png");
	symbol1.load("money01.png");
	symbol2.load("money03.png");
	symbol3.load("money02.png");
	symbol4.load("money05.png");
	symbol5.load("money0.png");
	symbol.mapTexCoordsFromTexture(symbol1.getTexture());
	symbol.mapTexCoordsFromTexture(symbol0.getTexture());
	symbol.mapTexCoordsFromTexture(symbol2.getTexture());
	symbol.mapTexCoordsFromTexture(symbol4.getTexture());
	symbol.mapTexCoordsFromTexture(symbol3.getTexture());
	symbol.mapTexCoordsFromTexture(symbol5.getTexture());
}

void Money::display(int outcomeVariable) {
	standard();

	//switch case that calls gamescreen draw
	switch (outcomeVariable) {
	case 0:
		ofDrawBitmapString("You're gonna get that (paid!) internship of your dreams!", 70, 650);
		ofPushStyle();
		symbol0.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 1:
		ofDrawBitmapString("You find a dollar in the parking lot. Wrapped in it is a dime sized bag of coke.\nYour mom says you can keep the dollar.", 70, 650);
		ofPushStyle();
		symbol1.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 2:
		ofDrawBitmapString("Your pasta order from GrubHub will never come.\nThe restaurant closed. Try using Uber Eats.", 70, 650);
		ofPushStyle();
		symbol2.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 3:
		ofDrawBitmapString("I'm sensing you will have to bust your ass to be as rich as you were in Webkinz.", 70, 650);
		ofPushStyle();
		symbol3.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 4:
		ofDrawBitmapString("Someone left their change in the vending machine.\nIt's a few quarters so that's cool.", 70, 650);
		ofPushStyle();
		symbol4.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 5:
		ofDrawBitmapString("The fates are 2fast and 2furious.\nWait for a red light and try again.", 70, 650);
		ofPushStyle();
		symbol5.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;
	}
}


Money::~Money()
{
}
