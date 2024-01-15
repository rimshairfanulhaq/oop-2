#pragma once
#include "Faculty.h"
class Admistrator :virtual public Faculty
{
public:
	 const char* email;
	void checkthroughcabin();
	void display();

};

