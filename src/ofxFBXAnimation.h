//
//  ofxFBXAnimation.h
//  ofxFBX-Example-Importer
//
//  Created by Nick Hardeman on 10/30/13.
//
//

#pragma once

#include "ofMain.h"
#include <math.h> 

#include <fbxsdk.h>

/*
#if defined(TARGET_LINUX) 
    #include <fbxsdk.h>
#else
	#include "fbxsdk.h"
#endif
*/

class ofxFBXAnimation {
public:
    ofxFBXAnimation();
    ~ofxFBXAnimation();
    
    void setup( FbxTime aStartTime, FbxTime aStopTime, FbxTime aFrameTime );
    
    void update();
    
    bool isFrameNew();
    void setSpeed( float aSpeed );
    float getSpeed();
    
    void play();
    void stop();
    void pause();
    void togglePlayPause();
    bool isPlaying();
    bool isPaused();
    
    float getPosition();
    float getPositionSeconds();
    unsigned int getPositionMillis();
    int getFrameNum();
    FbxTime getCurrentFbxTime();
    
    void setFramerate( float aFramerate );
    float getFramerate();
    
    void setPosition( float aPct );
    void setFrame( int aFrameNum );
    
    unsigned int getDurationMillis();
    float getDurationSeconds();
    
    int getTotalNumFrames();
    
    string name;
    int ID;
    FbxString fbxname;
    
    unsigned int startTimeMillis, stopTimeMillis, frameTimeMillis;
    
    FbxTime fbxStartTime, fbxStopTime, fbxCurrentTime, fbxFrameTime;
    
protected:
    bool bPlaying;
    bool bLoop;
    bool bNewFrame;
    float _speed;
    float _framerate;
    
    int lastUpdateTimeMillis;
};






