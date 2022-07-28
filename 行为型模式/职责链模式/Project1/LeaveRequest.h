#pragma once
#include "common.h"
class LeaveRequest
{
public:
	string name;
	int num;
	string content;

	LeaveRequest(string s, int n, string c) :name(s), num(n), content(c) {}
};

