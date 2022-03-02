#include "Love.h"



Love::Love()
{
}


Love::~Love()
{
}

void Love::setup() {
	backgroundLoad();
	symbol0.load("love04.png");
	symbol1.load("love01.png");
	symbol2.load("love03.png");
	symbol3.load("love02.png");
	symbol4.load("love05.png");
	symbol5.load("love0.png");
	
	symbol.mapTexCoordsFromTexture(symbol1.getTexture());
	symbol.mapTexCoordsFromTexture(symbol0.getTexture());
	symbol.mapTexCoordsFromTexture(symbol2.getTexture());
	symbol.mapTexCoordsFromTexture(symbol4.getTexture());
	symbol.mapTexCoordsFromTexture(symbol3.getTexture());
	symbol.mapTexCoordsFromTexture(symbol5.getTexture());

}

void Love::display(int outcomeVariable) {
	standard();
	

	//switch case that calls gamescreen draw
	switch (outcomeVariable) {
	case 0:
		ofDrawBitmapString("That cutie in your 10 am is waaaayyy into you!\nYou should totally take that shot.", 70, 650);
		ofPushStyle();
		symbol0.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 1:
		ofDrawBitmapString("New Year's Eve you'll be pulled on stage for duet karoke.\n It's the start of something new.", 70, 650);
		ofPushStyle();
		symbol1.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 2:
		ofDrawBitmapString("Your next tinder date will be a serial killer\nbut you'll be fine. He's not into you like *that*\nIt is also just a really bad date", 70, 650);
		ofPushStyle();
		symbol2.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 3:
		ofDrawBitmapString("Your date is going to take you to the olive garden.\nYou won't like it there.", 70, 650);
		ofPushStyle();
		symbol3.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 4:
		standard();
		ofDrawBitmapString("You're gonna meet a really good dog today\nand maybe that's what true love really is.", 70, 650);
		ofPushStyle();
		symbol4.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 5:
		ofDrawBitmapString("Your fate is too clouded right now.\nSend out stronger vibes and try again.", 70, 650);
		ofPushStyle();
		symbol5.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;
		
	}
}
		//binds image to cube
		//draws text
		//adds character

//function that sends button click to end screen