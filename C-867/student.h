//
//  student.hpp
//  C-867
//
//  Created by Eric Waters on 2/22/19.
//  Copyright © 2019 Eric Waters. All rights reserved.
//

#ifndef student_hpp
#define student_hpp
#include <iostream>
#include <stdio.h>
#include <string>
#include "degree.h"
#include <vector>

using namespace std;

class student {
private:

	const static int courseDays = 3;

	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysforCourses[courseDays];          


public:

	//setters
	void SetStudentID(string student_ID);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmailAddress(string emailAddress);
	void SetAge(int age);
	void SetDaysForCourse(int[courseDays]);


	//getters
	string GetStudentID() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmailAddress() const;
	int GetAge() const;
	int GetDaysForCourse(int) const;


	//contructors and destructor
	student();
	//student(string student_ID, string firstName, string lastName, string emailAddress, int AGE, int courseDay1, int courseDay2, int courseDay3, degree major);
	student(string student_id, string f_name, string l_name, string email_address, int AGE, int* DaysForCourses);
	~student();

	//virtual base class functions
	virtual void Print() = 0;
	virtual degree getDegreeProgram() = 0;
};


#endif /* student_hpp */
