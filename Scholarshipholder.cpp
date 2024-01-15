#include "Scholarshipholder.h"
bool Scholarshipholder::iftalentBase()
{
	if (scholarshipBasedON == "Talent Base")
	{
		return true;
	}
	else
		return false;
}
bool Scholarshipholder::iffinancial()
{
	if (scholarshipBasedON == "Financial Help")
	{
		return true;
	}
	else
		return false;
}
void Scholarshipholder::feescalculation()
{
	if (iftalentBase() == true)
	{
		fessPERsemester = fessPERsemester - 100000;
		cout << "After talent base scholarship fess: " << fessPERsemester;
	}
	else if (iffinancial() == true)
	{
		fessPERsemester = fessPERsemester - 80000;
		cout << "After financial base scholarship fess: " << fessPERsemester;
	}
	else if (meritscholarship() == true)
	{
		calculateonbasisofMERIT();
	}
	else
		cout << "No scholarship allowed" << endl;
}

bool Scholarshipholder::meritscholarship()
{
	if (cgpa >= 3 && cgpa <= 4)
	{
		return true;
	}
	else
		return false;
}
void Scholarshipholder::calculateonbasisofMERIT()
{
	if (cgpa >= 3 && cgpa < 3.3)
	{
		fessPERsemester = fessPERsemester - 20000;
	}
	else if (cgpa >= 3.3 && cgpa < 3.5)
	{
		fessPERsemester = fessPERsemester - 60000;
	}
	else if (cgpa >= 3.5 && cgpa <3.7)
	{
		fessPERsemester = fessPERsemester - 100000;
	}
	else if (cgpa >= 3.7 && cgpa < 3.8)
	{
		fessPERsemester = fessPERsemester - 120000;
	}
	else if (cgpa ==4)
	{
		fessPERsemester = 0;
	}

	cout << "Fess after scholarship " << fessPERsemester << endl;
}

void Scholarshipholder::display()
{
	Undergraduate::display();
	feescalculation();
}