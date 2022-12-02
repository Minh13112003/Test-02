#include "List.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
Node::Node(Person a) {
	this->data = a;
	this->Next = NULL;
}

List::List() {
	this->Head->Next = this->Tail->Next = NULL;
}

List::List(Node* Head, Node* Tail) {
	this->Head->data = Head->data;
	this->Head->Next = Tail;
	this->Tail->data = Tail->data;
	this->Tail->Next = NULL;
	while (this->Head != NULL) {
		cout << this->Head->data;
		this->Head = this->Head->Next;
	}
}