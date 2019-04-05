#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "degree.h"
#include "student.h"
#include <vector>

using namespace std;

class securityStudent : public student
{
public:

	degree getDegreeProgram();

	void Print();

	securityStudent(string student_id, string f_name, string l_name, string email_address, int AGE, int* DaysForCourses, degree security);

private:

	degree Security;
};