#ifndef NODE_H
#define NODE_H

using namespace std;

class Node {
	public:
		Node();
		~Node();
		void setNext(Node* newNext);
		Node* getNext();

	private: 
		Student* student;
		Node* next;

};
#endif
