#include "FunctionScreen.h"



FunctionScreen::FunctionScreen()
{
}
void FunctionScreen::setup() {
	startImage.load("startBackground.tif");
	endImage.load("endBackground.tif");

}

void FunctionScreen::start() 
{
	startImage.draw(0, 0, ofGetWidth(),ofGetHeight());


}

void FunctionScreen::end() 
{
	endImage.draw(0, 0, ofGetWidth(), ofGetHeight());
}

FunctionScreen::~FunctionScreen()
{
}

int FunctionScreen::buttons() 
{
	if (ofGetMouseX() < 524 && ofGetMouseX() > 500) {
		if (ofGetMouseY() < 394 && ofGetMouseY() > 384)
			return 1;
		if (ofGetMouseY() < 414 && ofGetMouseY() > 404)
			return 2;
		if (ofGetMouseY() < 434 && ofGetMouseY() > 424)
			return 3;
	}
}
