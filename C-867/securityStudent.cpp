#include "securityStudent.h"


degree securityStudent::getDegreeProgram()
{
	return Security;
}

void securityStudent::Print()
{
	//int *daysforCourses = GetDaysForCourse();

	cout << GetStudentID() << "\t";
	cout << "First Name: " << GetFirstName() << "\t";
	cout << "Last Name: " << GetLastName() << "\t";
	cout << "Age: " << GetAge() << "\t";
	cout << "Days For Courses: {" << GetDaysForCourse(0) << "," << GetDaysForCourse(1) << "," << GetDaysForCourse(2) << "}\t";

	cout << "Degree Program: Security" << endl;
	
	cout << "\n";
}

securityStudent::securityStudent(string student_id, string f_name, string l_name, string email_address, int AGE, int* DaysForCourses, degree security) : student(student_id, f_name, l_name, email_address, AGE, DaysForCourses)
{
	Security = security;
}
