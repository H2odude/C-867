#include <iostream>
#include <stdio.h>
#include <string>
#include "student.h"
#include <vector>

using namespace std;

void student::SetStudentID(string student_id)
{
	studentID = student_id;
}

void student::SetFirstName(string f_name)
{
	firstName = f_name;
}

void student::SetLastName(string l_name)
{
	lastName = l_name;
}

void student::SetEmailAddress(string email_address)
{
	emailAddress = email_address;
}

void student::SetAge(int AGE)
{
	age = AGE;
}

void student::SetDaysForCourse(int[courseDays])
{
	for (int i = 0; i < courseDays; i++) {
		daysforCourses[i] = daysforCourses[i]; //fix me
	}
}

string student::GetStudentID() const
{
	return studentID;
}

string student::GetFirstName() const
{
	return firstName;
}

string student::GetLastName() const
{
	return lastName;
}

string student::GetEmailAddress() const
{
	return emailAddress;
}

int student::GetAge() const
{
	return age;
}

int student::GetDaysForCourse(int index) const
{
	return daysforCourses[index];
}

	student::student () {
	}

	student::student(string student_id, string f_name, string l_name, string email_address, int AGE, int* DaysForCourses) {
		studentID = student_id;
		firstName = f_name;
		lastName = l_name;
		emailAddress = email_address;
		age = AGE;
		daysforCourses[0] = DaysForCourses[0];
		daysforCourses[1] = DaysForCourses[1];
		daysforCourses[2] = DaysForCourses[2];
	};

	void student::Print() {
	};

	degree student::getDegreeProgram() {
		return SOFTWARE;
	}


	student::~student() {
	};