#include "ofApp.h"

ofVec4f position;


//--------------------------------------------------------------

void ofApp::setup(){
    
    ofSetCircleResolution(100);

    
    ofBackground(0, 0, 0);
    
    ofSetColor(0, 0, 0);
    
    
    
    soundplayer.loadSound("Perfume_globalsite_sound.wav");
    
    soundplayer.setLoop(true);
    
    soundplayer.setVolume(1.0);
    
    soundplayer.play();
    
    msphere.setPosition(200, 200, 0);
    
    for(int i = 0; i<10; i++){
        custom.push_back(Custom());
        custom.back().init();
    }
  
   }



//--------------------------------------------------------------

void ofApp::update(){
    for(int i = 0; i<custom.size(); i++){
        
        custom[i].update();
    }

    
    volume = ofSoundGetSpectrum(1);
    
   size_ciecle= volume[0]*1300;
       
}



//--------------------------------------------------------------

void ofApp::draw(){
    
    for(int i = 0; i<custom.size(); i++){
        custom[i].draw();
        ofSetColor(0, 255);
        
    }
    
    
//    ofCircle(ofGetWidth()/2, ofGetHeight()/2, volume[0]*300);
    
    ofSetColor
    (ofColor::fromHsb(volume[0]*400,255,255));
    
     cout << volume[0]<<endl;
    
    
easyCam.begin();
    msphere.setRadius(size_ciecle);

    msphere.drawWireframe();
   
    
    easyCam.end();
    
}



//--------------------------------------------------------------

void ofApp::keyPressed(int key){
    
    
    
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

void ofApp::windowResized(int w, int h){
    
    
    
}



//--------------------------------------------------------------

void ofApp::gotMessage(ofMessage msg){
    
    
    
}



//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}

