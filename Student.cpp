#include "Student.h"
void Student::display()
{
	CommunityMember::display();
	cout << "Degree ";
		cout << degree;

	cout << endl;
	if (semester <= 0)
		cout << "Not enrolled student " << endl;
	else if (semester >= 1 && semester <= 8)
		cout << "Semester " << semester << endl;
	else
		cout << "Semester cant be more than 8" << endl;
}