#pragma once
#include "Admistrator.h"
#include "Teacher.h"
class Administratorteacher : public Admistrator , public Teacher
{
public:
	int addsalary;
	bool ifboth();
	void display();


};

