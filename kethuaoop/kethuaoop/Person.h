#pragma once
#include<string>
using namespace std;
class Person
{
private:
	int id;
public:
	int idPerson;
	string fullname;
	string address;
	string sdt;
public:
	Person();
	Person(int, string, string, string);
	void setidPerson(int);
	int getidperson();
	void setfullname(string);
	string getfullname();
	void setaddress(string);
	string getaddress();
	void setsdt(string);
	string getsdt();
};

