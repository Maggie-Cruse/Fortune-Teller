#include "GameScreen.h"



GameScreen::GameScreen()
{
}

void GameScreen::backgroundLoad() {
	background.load("crystalBallBackground.tif");
	symbol.setPosition(ofGetWidth() / 2+25, ofGetHeight() /2-50, -30);
	//symbol.setResolution(2);
	symbol.set(130);
	//symbol.rotateDeg(45, 1, 0,1);
	good.load("happyCat.png");
	bad.load("angryboy.jpg");
	meh.load("mehCat.png");


	ofSetColor(255);
	
}


void GameScreen::standard() {
	//import image
	background.draw(0, 0, ofGetWidth(), ofGetHeight());
	symbol.rotateDeg(.5, 0, 1, 0);
	//draw rectangle
	ofPushStyle();
	ofSetColor(36,113,114);
	//ofDrawRectangle(50, 500, 700, 220);
	ofDrawRectRounded(50, 620, 700, 100, 30);
	ofPopStyle();
	ofDrawBitmapString("press SPACE", 650, 700);
	if (outcomeVariable == 0 || outcomeVariable == 1) {
		good.draw(ofGetWidth() - 250, ofGetHeight() - 200, 200, 200);
	}
	



}


GameScreen::~GameScreen()
{
}

//button to move to end screen
