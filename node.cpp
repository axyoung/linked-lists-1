#include "node.h"

Node::Node(Student* current) {
	student = current;
	next = NULL;
}

Node::~Node() {
	delete student;
	next = NULL;
}

void Node::setNext(Node* newNode) {
	next = newNode;
}

Node* Node::getNext() {
	return next;
}

Student* Node::getStudent() {
	return student;
}
