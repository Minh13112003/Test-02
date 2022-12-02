#include "Person.h"
#include "List.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	Person a;
	cin >> a;
	cout << a << endl;
	Person b("Nguyen Nhat Minh", 15, "Dien Bien Phu", 1);
	cout << b;
	Node* c = new Node(a);
	Node* d = new Node(b);
	List e(c, d);
	return 0;
}