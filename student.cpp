#include "student.h"

// constructor
// the student has an ID that is unique to itself
// this can be extended to be a name, gpa, etc.
Student::Student(int id) {
	studentID = id;
}

// get the student's ID with this command
int Student::getStudentID() {
	return studentID;
}
