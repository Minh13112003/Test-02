#include "Person.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Person::Person() {
	this->name = " ";
	this->age = 0;
	this->gt = 0;
	this->address = " ";
}

Person::Person(string name, int age, string address, bool gt) {
	this->name = name;
	this->age = age;
	this->address = address;
	this->gt = gt;
}

Person::Person(const Person& a) {
	this->name = a.name;
	this->age = a.age;
	this->address = a.address;
	this->gt = gt;
}
Person::~Person() {

}

istream& operator >> (istream& in, Person& a) {
	cout << "nhap ho ten: ";
	getline(in, a.name);
	cout << "nhap tuoi: ";
	in >> a.age;
	cout << "nhap dia chi: ";
	in.ignore();
	getline(in, a.address);
	
	do {
		cout << "nhap gioi tinh (1:Nam,0:Nu): ";
		in >> a.gt;
		if (a.gt > 1 || a.gt < 0) {
			cout << "so lieu khong hop le moi ban nhap lai !" << endl;
		}
	} while (a.gt > 1 || a.gt < 0);
	cout << endl;
	return in;
}

ostream& operator << (ostream& out, const Person& a) {
	out << "ho va ten: " << a.name << endl;
	out << "tuoi: " << a.age << endl;
	out << "dia chi: " << a.address << endl;
	(a.gt == 1) ? out << "gioi tinh: Nam" : out << "gioi tinh: Nu" << endl;
	return out;
}
