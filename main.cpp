#include"Administratorteacher.h"
#include"Admistrator.h"
#include"Alumnus.h"
#include"CommunityMember.h"
#include"Employee.h"
#include"Faculty.h"
#include"NonScholarshipHolder.h"
#include"Permanent.h"
#include"Scholarshipholder.h"
#include"Staff.h"
#include"Student.h"
#include"Teacher.h"
#include"Undergraduate.h"
#include"VisitingTeacher.h"
#include<iostream>
int main()
{
    CommunityMember communityMember;
    communityMember.name = "Rimsha Irfan";
    communityMember.id = 123;
    communityMember.member = "Employee";
    communityMember.year = 2015;

   
    cout << "Displaying CommunityMember:" << endl;
    cout << "-----------------------------------" << endl;
    communityMember.display();

    cout << "-----------------------------------" << endl;
    
    Undergraduate undergraduate;
    undergraduate.name = "Abdul rafey";
    undergraduate.id = 456;
    undergraduate.member = "Student";
    undergraduate.year = 2020;
    undergraduate.semester = 3;
    undergraduate.degree = "Computer Science";
    undergraduate.cgpa = 3.6;
    undergraduate.currentGPA = 3.8;
    cout << "Displaying Undergraduate:" << endl;
    undergraduate.display();
    cout << "-----------------------------------" << endl;


   Administratorteacher adminTeacher;
    adminTeacher.name = "Admin Teacher";
    adminTeacher.id = 123;
    adminTeacher.member = "Employee";
    adminTeacher.year = 2015;
    adminTeacher.cabinNo = 30;
    adminTeacher.officeHours = 40;
    adminTeacher.attendedhours = 16;
    adminTeacher.creditHours = 16;
    adminTeacher.coursename = "BSCS";
    adminTeacher.email = "adminteacher";


    
    cout << "Displaying Administratorteacher:" << endl;
    adminTeacher.display();
    cout << "-----------------------------------" << endl;

   
    cout << "Testing ifboth function of Administratorteacher:" << endl;
    if (adminTeacher.ifboth()) {
        cout << "Employee has both roles." << endl;
    }
    else {
        cout << "Employee does not have both roles." << endl;
    }
    cout << "-----------------------------------" << endl;
}