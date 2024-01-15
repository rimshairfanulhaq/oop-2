#include "CommunityMember.h"
void CommunityMember::display()
{
	cout << "Name: ";
	cout << name << endl;
	
	cout << "ID: " << id << endl;
	cout << "EMPLOYEE/STUDENT/ALMUMMNUS ";
	
		cout << member << endl;
	

	cout << endl;
	if (year < 0)
		cout << "Joining year " << "000" << -1 * year << endl;
	else if (year < 10)
		cout << "Joining year " << "000" << year << endl;
	else if (year < 100)
		cout << "Joining year " << "00" << year << endl;
	else if (year < 1000)
		cout << "Joining year " << "0" << year << endl;
	else if (year >= 1000)
		cout << "Joining year " << "0" << year << endl;
	else
		cout << "inavalid!!!" << endl;

		
}
