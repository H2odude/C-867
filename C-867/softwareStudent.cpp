#include "softwareStudent.h"


degree softwareStudent::getDegreeProgram()
{
	return SOFTWARE;
}

void softwareStudent::Print()
{
	//int *daysforCourses = GetDaysForCourse();

	cout << GetStudentID() << "\t";
	cout << "First Name: " << GetFirstName() << "\t";
	cout << "Last Name: " << GetLastName() << "\t";
	cout << "Age: " << GetAge() << "\t";
	cout << "Days For Courses: {" << GetDaysForCourse(0) << "," << GetDaysForCourse(1) << "," << GetDaysForCourse(2) << "}\t";

	cout << "Degree Program: Software" << endl;

	cout << "\n";
}

softwareStudent::softwareStudent(string student_id, string f_name, string l_name, string email_address, int AGE, int* DaysForCourses, degree software) : student(student_id, f_name, l_name, email_address, AGE, DaysForCourses)
{
	Software = software;
}
