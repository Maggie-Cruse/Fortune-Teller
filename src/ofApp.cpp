#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	screenVariable = 0;
	outcomeVariable = ofRandom(6);
	//outcomeVariable= 5;
	

	love = Love();
	money = Money();
	health = Health();
	start = FunctionScreen();
	start.setup();
	love.setup();
	money.setup();
	health.setup();
	background.load("crystalBallBackGround.png");
	

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	switch (screenVariable) {
	case 0:
		start.start();
		break;

	case 1:
		love.display(outcomeVariable);
		
		break;

	case 2:
		money.display(outcomeVariable);

		break;

	case 3:
		health.display(outcomeVariable);
		break;

	case 4:
		start.end();
		break;

	}
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (screenVariable == 0) {
		if (key == OF_KEY_UP)
			screenVariable = 1;
		if (key == OF_KEY_LEFT)
			screenVariable = 2;
		if (key == OF_KEY_RIGHT)
			screenVariable = 3;
	}
	if (screenVariable == 1 || screenVariable == 2 || screenVariable == 3) {
		if (key == ' ')
			screenVariable = 4;
	}
	if (screenVariable == 4) {
		if (key == OF_KEY_LEFT)
			setup();
		if (key == OF_KEY_RIGHT)
			std::exit(1);
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
			
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
