#pragma once

#include "ofMain.h"
#include "ofxCV.h"
#include "ofParticles.h"

#include "ofxFaceTrackerThreaded.h"

class ofApp : public ofBaseApp{

public:
    void setup() override;
    void update() override;
    void draw() override;
    
    //void keyPressed(int key) override;

    ofVideoGrabber grabber;
    ofxFaceTrackerThreaded tracker;
    
    ofVideoPlayer screenSaver;
    
    int alpha = 255;
    bool tracking = false;
    
    
    
    
    // Drawings:
    // Drawing 01 - Particle Triangle
    void drawing01();
    void drawParticles();
    void drawLines();
    void addParticles();
    void clearParticles();
    
    ofParticles p;
    
    std::vector<ofParticles> particles;
    std::vector<ofParticles> particles01;
    std::vector<ofParticles> particles02;
    
    int numOfParticles = 100;
    float minDist= 100;
    
    bool trackingPrev = false;
    
    
    /*
    // Drawing 02 - Perlin Noise
    void drawing02();
    void perlinDraw();
    int cols, rows;
    int scl = 20;
    int w = 1200;
    int h = 900;
    
    float flying = 0;
    
    ofPolyline triangle;
    
    struct Terrain {
        ofPoint pos;
    };
    
    vector<Terrain> t;
    */
    
    /*
    // Drawing 04 - Diffuse Limited Aggregation
    void drawing04();
     */
};
