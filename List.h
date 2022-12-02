#pragma once
#ifndef List_H
#define List_H
#include "Person.h"
struct Node {
	Person data;
	Node* Next;
	Node(Person);
};

class List {
private:
	Node* Head;
	Node* Tail;
public:
	List();
	List(Node*, Node*);
	List(const List&);
	friend istream& operator >> (istream&, List&);
	friend ostream& operator << (ostream&, const List&);
	List operator [] (int);

};
#endif // !List_H

