#include "Student.h"
#include<iostream>
#include<string>
using namespace std;
Student::Student() {
	this->rollNo = 0;
	this->fullName = "";
	this->age = 0;
	this->email = "";
}
Student::Student(int rollNo, string fullName, int age, string email) {

	setrollNo(rollNo);
	getrollNo();
	setfullName(fullName);
	getfullName();
	setage(age);
	getage();
	setemail(email);
	getemail();
}
void Student::setrollNo(int rollNo) {
	this->rollNo = rollNo;
}
int Student::getrollNo() {
	return this->rollNo;
}

void Student::setfullName(string fullName) {
	this->fullName = fullName;
}
string Student::getfullName() {
	return this->fullName;
}

void Student::setage(int age) {
	this->age = age;
}
int Student::getage() {
	return this->age;
}

void Student::setemail(string email) {
	this->email = email;
}
string Student::getemail() {
	return this->email;
}