#include "Admistrator.h"
void Admistrator::checkthroughcabin()
{
	cout << "Email: ";
	
	if (cabinNo >= 1 || cabinNo <= 100)
	{
		cout << email;
		cout << "@gmail.com" << endl;
	}

	else if (cabinNo < 0)
		cout << "No email alloted yet" << endl;
	else
		cout << "THE NAME ENROLLED MIGHT BE TEACHER OR ADMINISTATOR+TEACHER" << endl;

			
	
}
void Admistrator::display()
{
	Faculty::display();
	checkthroughcabin();
}
