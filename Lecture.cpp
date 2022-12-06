#include "Lecture.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Lecture::Lecture() :Person() {
	this->id = "";
	this->rank = "None";
}

Lecture::Lecture(string name,int age,string address,bool gt,string id,string rank) :Person(name,age,address,gt) {
	this->id = id;
	this->rank = rank;
}
Lecture::Lecture(const Lecture& a) {
	this->name = a.name;
	this->age = a.age;
	this->address = a.address;
	this->gt = a.gt;
	this->rank = a.rank;
	this->id = a.id;
}

istream& operator >> (istream& in, Lecture& a) {
	cout << "nhap ho ten: ";
	getline(in, a.name);
	cout << "nhap tuoi: ";
	in >> a.age;
	cout << "nhap dia chi: ";
	in.ignore();
	getline(in, a.address);
	int g;
	do {
		cout << "nhap gioi tinh (1:Nam,0:Nu): ";
		in >> g;
		if (g> 1 || g < 0) {
			cout << "so lieu khong hop le moi ban nhap lai !" << endl;
		}
	} while (g > 1 || g < 0);
	if (g == 1) a.gt = true;
	else a.gt = false;
	cout << endl;
	in.ignore();
	cout << "nhap cap bac: ";
	in >> a.rank;
	in.ignore();
	return in;
}

ostream& operator << (ostream& out, const Lecture& a) {
	out << "Ten giang vien: " << a.name << endl;
	out << "id: " << "102" + a.name << endl;
	out << "tuoi: " << a.age << endl;
	out << "dia chi: " << a.address << endl;
	(a.gt == 1) ? out << "gioi tinh: Nam" : out << "gioi tinh: Nu" << endl;
	return out;
}
