//
//  CustomBox.hpp
//  ma7th_2nd
//
//  Created by kanako on 2016/02/13.
//
//

#ifndef Custom_hpp
#define Custom_hpp

#include "ofMain.h"
class Custom{
public:
    void init();
    void update();
    void draw();
    ofVec3f box_position;
    
private:
    ofBoxPrimitive mbox;
    ofColor mcolor;
    
    
    ofVec3f box_speed;
    
    int size_ciecle = 0;
    
    float *volume;
    
};

#endif /* CustomBox_hpp */
