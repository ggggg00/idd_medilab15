//
//  RandomWalker.cpp
//  RandomWalker
//
//  Created by Kana Togashi on 2015/04/28.
//
//

#include "RandomWalker.h"

RandomWalker::RandomWalker(){
    position.x = ofGetWidth() / 2.0;
    position.y = ofGetHeight() / 2.0;    
}

void RandomWalker::update(){
    for (int i = 0; i < 10; i++) {
        position.x += ofRandom(-1.0, 1.1);
        position.y += ofRandom(-0.8, 1.0);
        
        if (position.x < 0) {
            position.x = ofGetWidth();
        }
        
        if (position.x > ofGetWidth()) {
            position.x = 0;
        }
        if (position.y < 0) {
            position.y = ofGetWidth();
        }
        
        if (position.y > ofGetWidth()) {
            position.y = 0;
        }
        
    }


}

void RandomWalker::draw(){
    ofSetColor(position.x, position.y, 2);

}