#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "degree.h"
#include "student.h"
#include <vector>

using namespace std;

class softwareStudent : public student
{
public:

	degree getDegreeProgram();

	void Print();

	softwareStudent(string student_id, string f_name, string l_name, string email_address, int AGE, int* DaysForCourses, degree software);


private:

	degree Software;
};