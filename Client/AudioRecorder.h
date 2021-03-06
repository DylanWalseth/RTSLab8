//
// Created by root on 5/6/16.
//

#ifndef CLIENT_AUDIORECORDER_H
#define CLIENT_AUDIORECORDER_H


#include "Recorder.h"
#include "../AudioReferenceFiles/AudioInterface.h"
#include <alsa/asoundlib.h>

using namespace std;
class AudioRecorder: Recorder {
public:
    AudioRecorder(char*,int,NetworkSender*);
    ~AudioRecorder();
    void record();
private:
    AudioInterface *ai;
    char* buffer;
    int bufferSize;
    int secondsToCapture;

};


#endif //CLIENT_AUDIORECORDER_H
