//
//  CustomBox.cpp
//  ma7th_2nd
//
//  Created by kanako on 2016/02/13.
//
//

#include "Custom.hpp"

void Custom::init(){
    box_position = ofVec3f(ofRandom(ofGetWidth()),
                           ofRandom(ofGetHeight()),
                           ofRandom(-500,500));
    
    box_speed = ofVec3f(ofRandom(-2,2),ofRandom(-2,2),ofRandom(-2,2));
    mbox.setPosition(box_position);
    mcolor.setHsb(ofRandom(255),150,200);
    
}

void Custom::update(){
    volume = ofSoundGetSpectrum(1);
    
    size_ciecle= volume[0]*1300;

    
}

void Custom::draw(){
    ofSetColor(mcolor);
    mbox.drawWireframe();
}