#include "Employee.h"
void Employee::salary()
{
	if (rank == 0)
	{
		salaryy = 40000;
		cout << "Salaray: " << salaryy << endl;
	}
	else if (rank == 1)
	{
		salaryy = 60000;
		cout << "Salaray: " << salaryy << endl;
	}
	else if (rank == 2)
	{
		salaryy = 80000;
		cout << "Salaray: " << salaryy << endl;
	}
	else if (rank == 3)
	{
		salaryy = 80000;
		cout << "Salaray: " << salaryy << endl;
	}
	else if (rank == 4)
	{
		salaryy = 100000;
		cout << "Salaray: " << salaryy << endl;
	}
	else if (rank == 5)
	{
		salaryy = 120000;
		cout << "Salaray: " << salaryy << endl;
	}
}
int Employee::expirence()
{
	totalyear = year - 2024;
	if (totalyear < 0)
		return totalyear * -1;
	else
		return totalyear;
}
void Employee::deciderank()
{
	

	if (totalyear > 0 && totalyear <= 2)
	{
		rank = 1;
	}
	else if (totalyear > 2 && totalyear <= 4)
	{
		rank = 2;
	}
	else if (totalyear > 4 && totalyear <= 6)
	{
		rank = 3;
	}
	else if (totalyear > 6 && totalyear <= 10)
	{
		rank = 4;
	}
	else if (totalyear > 10)
	{
		rank = 5;
	}
	else
		rank = 0;
	cout << "Rank " << rank;



}
void Employee::display()
{
	
	CommunityMember::display();
	cout << "Expirence " << expirence();
	 salary();
	deciderank();
}