#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "degree.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include <vector>

using namespace std;

const int numStudents = 5;

const string studentData[numStudents] =
{
"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Eric,Waters,ewate10@wgu.edu,25,15,25,30,SOFTWARE"
};

class Roster {
public:
	student *classRosterArray[numStudents] = { nullptr, nullptr, nullptr, nullptr, nullptr };
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degree Major);
	void remove(string studentID);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(degree Major);
	int Index = 0;
	~Roster();
private:
	int courseDays = 3;
	int numStudents = 5;
};