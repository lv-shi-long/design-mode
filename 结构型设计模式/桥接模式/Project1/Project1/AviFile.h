#pragma once
#include "VideoFile.h"
class AviFile :
    public VideoFile
{
public:
    void Play(string file)
    {
        cout << "AVI file play: " << file << endl;
    }
};

