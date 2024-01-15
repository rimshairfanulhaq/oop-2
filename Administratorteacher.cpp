#include "Administratorteacher.h"
bool Administratorteacher::ifboth()
{
	if (Employee::rank <= 5)
		return true;
	else 
		return false;
	
}
void Administratorteacher::display()
{
	
	Faculty::display();
	cout << "Course Name:";
	cout << coursename;
	checkthroughcabin();
	if (ifboth() == true)
	{
		addsalary = extra + 100000;
		cout << "New salary" << addsalary << endl;
	}
	else
		cout << "Nothing added" << endl;

}

