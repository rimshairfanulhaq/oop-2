#pragma once
#include "Undergraduate.h"
class NonScholarshipHolder : public Undergraduate
{
public:
	const char* yesNO;
	int fee = 220000;
	bool ifdramatics();
	void add1();
	bool ifmusichour();
	
	int dramaticsjoin = 5000;
	int musicHourEntry = 5000;
	void display();
};

