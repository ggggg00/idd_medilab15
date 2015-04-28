//
//  RandomWalker.h
//  RandomWalker
//
//  Created by Kana Togashi on 2015/04/28.
//
//

#pragma once
#include "ofMain.h"

class RandomWalker {
public:
    RandomWalker();
    void update();
    void draw();
    
    ofVec2f position;
    
};