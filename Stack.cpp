#include <iostream>
#include "Stack.h"
#include "SinhVien.h"
using namespace std;
int Stack::count = 0;



Stack::Stack(int n) {

    size = n;
    data = new SinhVien [size];
    top = -1;
    count++;
}
int Stack::Getsize() {
    return this->size;
}
SinhVien Stack::Getdata(int x) {
    return data[x];
}
Stack::Stack(const Stack& x) :size(x.size) {
   
    data = new SinhVien[size];
    top = x.top;
    for (int i = 0; i <= top; i++)
        this->data[i] = x.data[i];
    count++;
}
Stack::~Stack() {  //destructor
    delete[] data;
    count--;
}
void Stack::Push(SinhVien x) {
    if (!isFull()) {
        data[++top] = x;
        cout << top;
        
    }
    else cout << "full of stack";
}
void Stack::Pop(SinhVien& x) {
    if (!isEmpty()) {
        x = data[top--];
    }
    else cout << "out of stack";
}
bool Stack::isFull() const {
    return (top == size - 1);
}
bool Stack::isEmpty() const {
    return (top == -1);
}
void Stack::Show() {
    cout << isEmpty();
    if (!isEmpty()) {
        for (int i = top - 1; i >= 0; i--) {
            cout << data[i];
        }
    }
}

