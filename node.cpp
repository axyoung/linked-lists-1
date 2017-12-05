#include "node.h"

Node::Node(Student* student) {
	student = 0; // not sure about this part and the student pointer
	next = NULL;
}

Node::~Node() {
	delete &student;
	next = NULL;
}

void Node::setNext(Node* newStudent) {
	student = newStudent;
}

Node* Node::getNext(Node* newNext) {
	return next;
}
