#pragma once
#ifndef SinhVien_H
#define SinhVien_H
#include "Person.h"
//#include "LopSinhHoat.h"
class SinhVien :public Person{
	string Id;
	double GPA;
public:
	
	SinhVien();
	SinhVien(string, int,string, bool, string, double);
	string GetId();
	double GetGPA();
	friend istream& operator >> (istream&, SinhVien&);
	friend ostream& operator << (ostream&, const SinhVien&);
};
#endif // !SinhVien_H

