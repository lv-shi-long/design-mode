#pragma once
#include "AviFile.h"
#include "RmviFIle.h"
class OperationSystem
{
protected:
	VideoFile* vf;
	
public:
	OperationSystem(VideoFile* v) :vf(v) {}
	virtual void Display(string file) = 0;

};

