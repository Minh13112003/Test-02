#include "List.h"
#include "Person.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
Node::Node(Person a) {
	this->data = a;
	this->Next = NULL;
}


List::List(Node *a) {
	this->Head->data = a->data;
	this->Head->Next = this->Tail->Next = NULL;
	a = this->Head;
	cout << a->data;
}

List::List(Node* Head, Node* Tail) {
	this->Head->data = Head->data;
	this->Head->Next = Tail;
	this->Tail->data = Tail->data;
	this->Tail->Next = NULL;
	while (this->Head != NULL) {
		this->Head->data.show();
		this->Head = this->Head->Next;
	}
}
