#pragma once
#include "Undergraduate.h"
class Scholarshipholder : public Undergraduate
{
public:

	int fessPERsemester = 220000;
	 const char* scholarshipBasedON;
	
	bool iftalentBase();
	bool iffinancial();
	void calculateonbasisofMERIT();
	bool meritscholarship();
	void feescalculation();
	void display();

};