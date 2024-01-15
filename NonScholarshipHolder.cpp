#include "NonScholarshipHolder.h"
bool NonScholarshipHolder::ifdramatics()
{
	if (yesNO == "yes")
	{
		return true;
	}
	else
		return false;
}
void NonScholarshipHolder::add1()
{
	if (ifdramatics() == true)
	{
		fee = fee + dramaticsjoin;
		
	}
	else if (ifmusichour() == true)

	{
		fee = fee + musicHourEntry;
	}



	cout << "fees: " << fee << endl;

}
bool NonScholarshipHolder::ifmusichour()
{
	if (yesNO == "yes")
	{
		return true;
	}
	else
		return false;
}


void NonScholarshipHolder::display()
{
	Undergraduate::display();
	add1();
}