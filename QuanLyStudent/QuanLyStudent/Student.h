#pragma once

#include<iostream>
using namespace std;

class Student
{
private:
	int rollNo, age;
	string fullName, email;
public:
	Student();
	Student(int, string, int, string);
	void setrollNo(int);
	int  getrollNo();
	void setfullName(string);
	string getfullName();
	void setage(int);
	int  getage();
	void setemail(string);
	string getemail();
};

