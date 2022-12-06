#pragma once
#ifndef Stack_H
#define Stack_H
#include "SinhVien.h"

class Stack {
private:
	int size;
	int top;
	SinhVien *data;
	static int count;
public:
	int Getsize();
	SinhVien Getdata(int x);
	Stack(const Stack& x);
	Stack(int n = 10);
	~Stack();
	void Push(SinhVien);
	void Pop(SinhVien&);
	bool isFull() const;
	bool isEmpty() const;
	void Show();
};
#endif // !Stack_H

