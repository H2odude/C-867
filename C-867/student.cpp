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
		//this->studentID = "";
		//this->firstName = "";
		//this->lastName = "";
		//this->emailAddress = "";
		//this->age = 0;															//FIX ME
		//this->daysforCourses = new[daysforCourses];
		// initialize daysforCourses array
		//for (int i = 0; i<courseDays; i++) this->daysforCourses[i] = 0;
		//degreeType;
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
		//cout << "Student ID: " << studentID;
		//cout << "First Name: " << firstName;
		//cout << "Last Name: " << lastName;
		//cout << "E-mail Address: " << emailAddress;
		//cout << "Age: " << age;
		//cout << "Days to complete 3 Courses: " << daysforCourses;
		//cout << "Degree: " << degreeType;
	};

	degree student::getDegreeProgram() {
		return SOFTWARE;
	}


	student::~student()
	{

	};