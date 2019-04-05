#include "softwareStudent.h"


degree softwareStudent::getDegreeProgram()
{
	return SOFTWARE;
}

void softwareStudent::Print()
{
	// Fix me
}

softwareStudent::softwareStudent(string student_id, string f_name, string l_name, string email_address, int AGE, int* DaysForCourses, degree software) : student(student_id, f_name, l_name, email_address, AGE, DaysForCourses)
{
	Software = software;
}
