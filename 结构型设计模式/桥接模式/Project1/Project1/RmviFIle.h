#pragma once
#include "VideoFile.h"
class RmviFIle :
    public VideoFile
{
public:
    void Play(string file)
    {
        cout << "RmviFIle file play: " << file << endl;
    }

};

