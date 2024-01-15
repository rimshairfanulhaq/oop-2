#include "Staff.h"
void Staff::calculateslaray()
{
	int temp = 500;
	for (int i = 1; i <= extrahoursperweek; i++)
	{
		temp = temp * i;
	}
	newsalary = temp + salaryy;
	cout << "After adding extra work hours " << newsalary << endl;
}
void Staff::display()
{
	Employee::display();
	cout << "Morining or Evening shift ";
	
	cout<<shift << endl;

	calculateslaray();

}
