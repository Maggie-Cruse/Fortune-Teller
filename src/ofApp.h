#pragma once

#include "ofMain.h"

#include <string>
#include "FunctionScreen.h"
#include "Love.h"
#include "Health.h"
#include "Money.h"
#include "GameScreen.h"

using std::string;

class ofApp : public ofBaseApp{

	ofImage background;
	FunctionScreen start;
	Love love;
	Money money;
	Health health;
	

	public:
		int screenVariable{0};
		int outcomeVariable{};
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
