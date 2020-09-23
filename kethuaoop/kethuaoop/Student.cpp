#include "Student.h"
#include "Person.h"
#include<iostream>
using namespace std;

Student::Student(string tenlop, string monhoc, int id, string fullname, string address, string sdt) {
	settenlop(tenlop);
	gettenlop();
	setmonhoc(monhoc);
	getmonhoc();
	setidPerson(id);
	getidperson();
	setfullname(fullname);
	getfullname();
	setaddress(address);
	getaddress();
	setsdt(sdt);
	getsdt();
}

void Student::settenlop(string tenlop) {
	this->tenlop = tenlop;
};
string Student::gettenlop() {
	return this->tenlop;
};
void Student::setmonhoc(string monhoc) {
	this->monhoc = monhoc;
};
string Student::getmonhoc() {
	return this->monhoc;
};

void Student::setidPerson(int id) {
	this->idPerson = id;
};
int Student::getidperson() {
	return this->idPerson;
}
void Student::setfullname(string fullname) {
	this->fullname = fullname;
};
string  Student::getfullname() {
	return this->fullname;
};
void  Student::setaddress(string address) {
	this->address = address;
};
string  Student::getaddress() {
	return this->address;
};
void  Student::setsdt(string sdt) {
	this->sdt = sdt;
};
string  Student::getsdt() {
	return this->sdt;
};
void Student::showinfo() {
	cout << "id: " << Student::getidperson() << "\n";
	cout << "fullname: " << Student::getfullname() << "\n";
	cout << "dia chi: " << Student::getaddress() << "\n";
	cout << "so dien thoai: " << Student::getsdt() << "\n";
	cout << "ten lop: " << Student::gettenlop() << "\n";
	cout << "mon hoc: " << Student::getmonhoc() << "\n";

}

int main() {
	Student s("lop12", "toan", 3, "nguyen hong son", "hn", "0981778556");
	s.showinfo();
	return 0;
}