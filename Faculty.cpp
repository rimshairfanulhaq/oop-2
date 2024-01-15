#include "Faculty.h"
void Faculty::checkoffice()
{
	cout << "OFFICE IS ONLY ALLOTED IF RANK IS GREATER THAN 3" << endl;
	if (rank < 3)
		cout << "no office alloted" << endl;
	else
	{
		cout << "OFFICE HOURS "<<officeHours << endl;
		
		cout << "CABIN NO (from 1 to 200)" << cabinNo << endl;

	}
}
void Faculty::display()
{
	Employee::display();
	checkoffice();
}
