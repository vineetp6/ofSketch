// #pragma once


#include "ofMain.h"

class Ball
{

public:
bool isMouseOver;
ofPoint center;
int size;
float speed;
int xDir;
int yDir;
ofColor color;

Ball(){
    
    size = 10;
    center = ofPoint(ofRandom(size, ofGetWidth()-size), ofRandom(size, ofGetHeight()-size));
    speed = ofRandom(1, 8);
    xDir = 1;
    yDir = 1;
    color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
}

void update(int mouseX, int mouseY){
    
    if (center.x + size >= ofGetWidth() ||
        center.x - size <= 0) {
        xDir = - xDir;
    }
    
    if (center.y + size >= ofGetHeight() ||
        center.y - size <= 0) {
        yDir = - yDir;
    }
    
    center.x += speed * xDir;
    center.y += speed * yDir;
}

void draw(){

    ofSetColor(color);
    ofCircle(center, size);
}

 
};
