#include "networkStudent.h"


degree networkStudent::getDegreeProgram()
{
	return NETWORKING;
}

void networkStudent::Print()
{
	//fix me
}

networkStudent::networkStudent(string student_id, string f_name, string l_name, string email_address, int AGE, int* DaysForCourses, degree networking) : student(student_id, f_name, l_name, email_address, AGE, DaysForCourses)
{
	Networking = networking;
}
