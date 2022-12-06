#include "SinhVien.h"
#include "Person.h"
#include <iostream>
#include <string>

SinhVien::SinhVien() :Person() {
	this->Id = " ";
	this->GPA = 0.0;
}
SinhVien::SinhVien(string name, int age, string address, bool gt, string id, double gpa) {
	this->name = name;
	this->age = age;
	this->address = address;
	this->gt = gt;
	this->Id = id;
	this->GPA = gpa;
}
string SinhVien::GetId(){
	return this->Id;
}
double SinhVien::GetGPA() {
	return this->GPA;
}

istream& operator >> (istream& in, SinhVien& a) {
    cout << "Nhap ten: "; 
    getline(in, a.name);
    cout << "nhap tuoi: ";
    in >> a.age;
    cout << "Nhap dia chi: ";
    in.ignore();
    getline(in, a.address);
    do {
        cout << "nhap gioi tinh (1:Nam,0:Nu): ";
        in >> a.gt;
        if (a.gt > 1 || a.gt < 0) {
            cout << "so lieu khong hop le moi ban nhap lai !" << endl;
        }
    } while (a.gt > 1 || a.gt < 0);
    while (1) {
        try {
            cout << "nhap ID: "; in >> a.Id;
            if (a.Id.length() != 10) {
                throw("Khong dat do dai quy dinh!\n");
            }
            if (a.Id[0] == '0') {
                throw("Phan tu dau phai khac 0!\n");
            }
            break;
        }
        catch (const char* c) {
            cerr << c;
        }
    }
    while (1) {
        try {
            cout << "Nhap diem: "; in >> a.GPA;
            if (a.GPA > 4 || a.GPA < 0) {
                throw("Khong dung diem yeu cau!\n");
            }
            break;
        }
        catch (const char* c) {
            cerr << c;
        }
    }
}

ostream& operator << (ostream& out, const SinhVien& a) {
    out << "ho va ten: " << a.name << endl;
    out << "tuoi: " << a.age << endl;
    out << "dia chi: " << a.address << endl;
    (a.gt == 1) ? out << "gioi tinh: Nam" << endl : out << "gioi tinh: Nu" << endl;
    out << "Id: " << a.Id << endl;
    out << "Diem: " << a.GPA << endl;
    return out;
}
