#pragma once
#include "Employee.h"
class Staff : public Employee
{

public:
const char* shift;
	int extrahoursperweek;
	int newsalary;
	void calculateslaray();
	void display();
};

