#pragma once
#include "Employee.h"
class Faculty :public Employee
{
public:
	int officeHours;
	
	int cabinNo;
	void checkoffice();
	void display();
};

