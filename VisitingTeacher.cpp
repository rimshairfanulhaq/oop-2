#include "VisitingTeacher.h"
bool VisitingTeacher::visitingorNOT()
{
	if (rank <= 0)
		return true;
	else
		return false;


}
void VisitingTeacher::display()
{
	Teacher::display();
	if (visitingorNOT() == true)

		cout << name << " STATUS: Visiting" << endl;

	else

		cout << name << " STATUS: Non-Visiting" << endl;
}