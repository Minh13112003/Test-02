#pragma once
#ifndef Person_H
#define Person_H
#include <string>


using namespace std;

class Person {
protected:
	string name;
	int age;
	string address;
	bool gt;
public:
	Person();
	Person(string, int, string, bool);
	Person(const Person& );
	friend istream& operator >> (istream&, Person&);
	friend ostream& operator << (ostream&,const Person&);
	string GetName();
	int GetAge();
	string GetAddress();
	bool GetGt();
	~Person();
};

#endif // !Person_H

