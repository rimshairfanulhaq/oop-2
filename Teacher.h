#pragma once
#include "Faculty.h"
class Teacher :virtual public Faculty
{
public:
	const  char* coursename;
	int creditHours = 16;
	int attendedhours;
	int extra;
	void extrapayment();
	void display();
	
};

