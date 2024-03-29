#include "roster.h"
#include "degree.h"
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

Roster::Roster() {};
Roster::~Roster() {};

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degree Major) {
	int DaysInCourse[] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	if (Major == degree::NETWORKING) {
		classRosterArray[Index++] = new networkStudent(studentID, firstName, lastName, emailAddress, age, DaysInCourse, Major);
	}
	if (Major == degree::SECURITY) {
		classRosterArray[Index++] = new securityStudent(studentID, firstName, lastName, emailAddress, age, DaysInCourse, Major);
	}
	if (Major == degree::SOFTWARE) {
		classRosterArray[Index++] = new softwareStudent(studentID, firstName, lastName, emailAddress, age, DaysInCourse, Major);
	}
}

void Roster::remove(string studentID) {
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] != NULL) {
			if (studentID == (classRosterArray[i])->GetStudentID()) {
				classRosterArray[i] = nullptr;
				return;
			}
		}
	}
	cout << "The student ID: " << studentID << " was not found." << endl;
	cout << endl;
}

void Roster::printAll() {
	cout << "Displaying Student Roster:" << endl;
	for (int i = 0; i < 5; i++) {
		(classRosterArray[i])->Print();
	}
	cout << endl;
}

void Roster::printDaysInCourse(string studentID) {
	for (int i = 0; i < 5; i++) {
		if ((classRosterArray[i])->GetStudentID() == studentID) {
			int average = 0;
			average = ((classRosterArray[i])->GetDaysForCourse(0) + (classRosterArray[i])->GetDaysForCourse(1) + (classRosterArray[i])->GetDaysForCourse(2)) / 3;
			cout << "The average days for Student " << studentID << " to finish last three courses: " << average << endl;
		}
	}
	cout << endl;
}

void Roster::printInvalidEmails() {
	cout << "Printing invalid Email address':" << endl;

	for (int i = 0; i < 5; i++) {
		bool foundATSIGN = false;
		bool foundSPACE = false;
		bool foundPERIOD = false;
		string email = ((classRosterArray[i])->GetEmailAddress());
		for (char &c : email) {
			if (c == '@') {
				foundATSIGN = true;
			}
			if (c == ' ') {
				foundSPACE = true;
			}
			if (c == '.') {
				foundPERIOD = true;
			}
			
			}
		if (foundPERIOD == false || foundSPACE == true || foundATSIGN == false) {
			cout << "Email address: " << (classRosterArray[i])->GetEmailAddress() << " is not valid" << endl;

		}
		
	}
	cout << endl;
}

void Roster::printByDegreeProgram(degree Major) {
	cout << "Printing students in Software Program:" << endl;
	for (int i = 0; i < 5; i++) {
		if ((classRosterArray[i])->getDegreeProgram() == Major) {
			(classRosterArray[i])->Print();
		}
	}
	cout << endl;
}


int main() {
	cout << "C-867 Scripting and Programming" << endl;
	cout << "C++" << endl;
	cout << "000868408" << endl;
	cout << "Eric Waters" << endl;
	cout << endl;

	Roster classRoster;


	degree Major;

	for (int i = 0; i < 5; i++) {
		stringstream ss(studentData[i]);

		vector<string> INPUT;

		while (ss.good()) {
			string substr;
			getline(ss, substr, ',');
			INPUT.push_back(substr);
		}
		if (INPUT[8] == "SECURITY") {
			Major = degree::SECURITY;
		}
		if (INPUT[8] == "SOFTWARE") {
			Major = degree::SOFTWARE;
		}
		if (INPUT[8] == "NETWORK") {
			Major = degree::NETWORKING;
		}
		classRoster.add(INPUT[0], INPUT[1], INPUT[2], INPUT[3], stoi(INPUT[4]), stoi(INPUT[5]),
			stoi(INPUT[6]), stoi(INPUT[7]), Major);
	}


	classRoster.printAll();

	classRoster.printInvalidEmails();

	for (int i = 0; i < 5; i++) {
		classRoster.printDaysInCourse((classRoster.GetClassRoster(i))->GetStudentID());
	}

	classRoster.printByDegreeProgram(SOFTWARE);

	classRoster.remove("A3");

	classRoster.remove("A3");

	system("pause");

	return 0;

};