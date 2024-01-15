#pragma once
#include "CommunityMember.h"
class Employee :public CommunityMember
{
public:
	int salaryy;
	int totalyear;
	int rank;
	void salary();
	void deciderank();
	int expirence();
	void display();
	
};

