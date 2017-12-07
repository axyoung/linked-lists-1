/* 
 * Linked Lists prt 1
 * Alex Young
 * C++ Galbraith Period 6
 * 12/6/2017
 */

#include <iostream>
#include "node.h"
#include "student.h"

using namespace std;

int main() {
	Student* one = new Student(420);
	Student* two = new Student(42);
	Student* three = new Student(4);

	Node* n1 = new Node(one);
	Node* n2 = new Node(two);
	Node* n3 = new Node(three);

	n1 -> setNext(n2);
	n2 -> setNext(n3);
	
	cout << n1 -> getNext() -> getStudent() -> getStudentID() << endl;

	return 0;
}
