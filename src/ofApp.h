#pragma once

#include "ofMain.h"
#define NUM 100
#include <vector>
#include "Custom.hpp"


class ofApp : public ofBaseApp{
    
private:
    int size_ciecle = 0;
    
   float *volume;
    
    ofSoundPlayer soundplayer;
    
    vector<Custom> custom;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    ofSpherePrimitive msphere;
    ofEasyCam easyCam;
    
   		
};
