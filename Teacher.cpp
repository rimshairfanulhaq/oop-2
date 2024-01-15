#include "Teacher.h"

void Teacher::extrapayment()
{
	if (attendedhours == creditHours)
	{
		extra = 0;
	}
	else if (attendedhours < creditHours)
	{
		creditHours = creditHours - attendedhours;
		extra = -100*creditHours;
		extra = salaryy - extra;

	}
	else if (attendedhours > creditHours)
	{
		creditHours = creditHours - attendedhours;
		extra = 100 * creditHours;
		extra = salaryy + extra;

	}

	cout << "FINAL SALARY " << extra << endl;
}
void Teacher::display()
{
	Faculty::display();
	cout << "Course Name:";
		cout << coursename;

	extrapayment();

}
