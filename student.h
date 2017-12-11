#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

// this is a header file for the student class

using namespace std;

class Student {
	// the student class has includes the Student and the function to get the ID
	public:
		Student(int);
		int getStudentID();

	private:
		int studentID;
};
#endif
