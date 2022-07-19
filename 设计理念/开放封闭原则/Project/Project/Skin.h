#pragma once
#include <iostream> 
using namespace std;
class Skin
{
public:
	Skin();
	~Skin();
	virtual void Show() = 0;
private:

};

Skin::Skin()
{
}

Skin::~Skin()
{
}
