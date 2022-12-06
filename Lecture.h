#pragma once
#ifndef Lecture_H
#define Lecture_H
#include "Person.h"

class Lecture : public Person{
	string id;
	string rank;
public:
	Lecture();
	Lecture(string,int,string,bool,string, string);
	Lecture(const Lecture&);
	friend istream& operator >> (istream&, Lecture&);
	friend ostream& operator << (ostream&, const Lecture&);
	~Lecture(){};
};
#endif // !Lecture_H

