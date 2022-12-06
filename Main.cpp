#include "LopSinhHoat.h"
#include "Person.h"
#include "Stack.h"
#include <iostream>
#include <string>

using namespace std;

bool asc(double a, double b) {
	return a > b;
}

bool desc(double a, double b) {
	return a < b;
}

int main() {
	SinhVien a;
	cin >> a;
	Stack b;
	b.Push(a);
	
	return 0;
}