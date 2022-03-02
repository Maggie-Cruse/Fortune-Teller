#include "Health.h"



Health::Health()
{
}
void Health::setup() {
	backgroundLoad();
	symbol0.load("health04.png");
	symbol1.load("health05.png");
	symbol2.load("health03.png");
	symbol3.load("health0.png");
	symbol4.load("health01.png");
	symbol5.load("health02.png");
	symbol.mapTexCoordsFromTexture(symbol1.getTexture());
	symbol.mapTexCoordsFromTexture(symbol0.getTexture());
	symbol.mapTexCoordsFromTexture(symbol2.getTexture());
	symbol.mapTexCoordsFromTexture(symbol4.getTexture());
	symbol.mapTexCoordsFromTexture(symbol3.getTexture());
	symbol.mapTexCoordsFromTexture(symbol5.getTexture());
}

void Health::display(int outcomeVariable) {
	standard();
	

	//switch case that calls gamescreen draw
	switch (outcomeVariable) {
	case 0:
		ofDrawBitmapString("Who needs orange juice when you have an aura this good!\nYour chances of getting sick are incredibly low.", 70, 650);
		ofPushStyle();
		symbol0.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 1:
		ofDrawBitmapString("In the near future, you'll make it to the top floor of Dallas Hall.\nNot panting! Who are you!?", 70, 650);
		ofPushStyle();
		symbol1.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 2:
		ofDrawBitmapString("Whatever you ate in umph isn't sitting right\nand your butt is gonna fall out.", 70, 650);
		ofPushStyle();
		symbol2.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 3:
		ofDrawBitmapString("Your hands will be inexplicably sweaty.\nYou keep dropping things and smudging all your papers\ncausing a generally bad week.", 70, 650);
		ofPushStyle();
		symbol3.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 4:
		ofDrawBitmapString("In your next spare moment, your orthodontist is gonna call you\nto see if you've been wearing your retainer.\nI suggest lying.", 70, 650);
		ofPushStyle();
		symbol4.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;

	case 5:
		ofDrawBitmapString("This crystal needs to be charged.\nLemme grab another one and you can try again.", 70, 650);
		ofPushStyle();
		symbol5.getTexture().bind();
		symbol.draw();
		ofPopStyle();
		break;
	}
}

Health::~Health()
{
}
