#pragma once
#include "CommunityMember.h"
class Student :public CommunityMember
{
public:

	 const char* degree;
	
	int semester;
	void display();
};

