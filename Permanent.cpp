#include "Permanent.h"
#include "Teacher.h"
bool Permanent::per()
{
	if (rank >= 2)

		return true;
	else
	
		return false;
	

}
void Permanent::display()

{
	Teacher::display();
	if (per() == true)
	{
		cout <<  " STATUS: Permanent" << endl;
	}
	else

		cout << " STATUS: Permanent" << endl;
}