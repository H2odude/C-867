#include "securityStudent.h"


degree securityStudent::getDegreeProgram()
{
	return SECURITY;
}

void securityStudent::Print()
{
		//cout << "Student ID: " << ;
		//cout << "First Name: " << firstName;
		//cout << "Last Name: " << lastName;
		//cout << "E-mail Address: " << emailAddress;
		//cout << "Age: " << age;
		//cout << "Days to complete 3 Courses: " << daysforCourses;
		//cout << "Degree: " << degreeType;
}

securityStudent::securityStudent(string student_id, string f_name, string l_name, string email_address, int AGE, int* DaysForCourses, degree security) : student(student_id, f_name, l_name, email_address, AGE, DaysForCourses)
{
	Security = security;
}
