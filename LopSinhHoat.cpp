#include "LopSinhHoat.h"
#include "Lecture.h"
#include "Stack.h"
#include <iostream>
#include <string>

using namespace std;

LopSinhHoat::LopSinhHoat() {
	this->siso = 0;
}

int LopSinhHoat::binarySearch(Stack a, double k, bool cmp(double, double)) {
	int l = 0, r = a.Getsize() - 1;
	int res = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a.Getdata(mid).GetGPA() == k) {
			res = mid;
			r = mid - 1;
		}
		else if (cmp(k, a.Getdata(mid).GetGPA()))
			l = mid + 1;
		else r = mid - 1;
	}
	return res;
}