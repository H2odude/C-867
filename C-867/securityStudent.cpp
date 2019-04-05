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
	//cout << Days For Courses: {" << daysforCourses[0] << "," << daysforCourses[1] << "," << daysforCourses[2] << "}\t";

	cout << "Degree Program: " << getDegreeProgram();
	
	cout << "\n";
}

securityStudent::securityStudent(string student_id, string f_name, string l_name, string email_address, int AGE, int* DaysForCourses, degree security) : student(student_id, f_name, l_name, email_address, AGE, DaysForCourses)
{
	Security = security;
}
