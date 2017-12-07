#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "node.h"

using namespace std;

class Student {
	public:
		Student(int);
		int getStudentID();

	private:
		int studentID;
};
#endif
