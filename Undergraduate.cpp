#include "Undergraduate.h"


void Undergraduate::display()
{
	Student::display();
	if (semester >= 1 && semester <= 8)
	{
		cout << "Cgpa " << cgpa << endl;
		cout << "Current GPA " << currentGPA << endl;
	}
	else
		cout << "INVALID SEMESTER!! " << endl;
}
