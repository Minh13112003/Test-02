#pragma once
#ifndef LopSinhHoat_H
#define LopSinhHoat_H
#include "SinhVien.h"
#include "Lecture.h"
#include "Stack.h"
class LopSinhHoat {
	string nameclass;
	Lecture GVCN;
	Stack a;
	int siso;
public:
	LopSinhHoat();
	friend istream& operator >> (istream&, LopSinhHoat&);
	friend ostream& operator << (ostream&, const LopSinhHoat&);
	int binarySearch(Stack, double, bool cmp(double, double));
};
#endif // !LopSinhHoat_H

