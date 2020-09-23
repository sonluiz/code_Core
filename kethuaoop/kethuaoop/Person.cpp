#include "Person.h"
#include<iostream>
#include<string>
using namespace std;

Person::Person() {
	this->idPerson = 0;
	this->fullname = "";
	this->address = "";
	this->sdt = "";
}
Person::Person(int id, string fullname, string address, string sdt) {
	setidPerson(id);
	getidperson();
	setfullname(fullname);
	getfullname();
	setaddress(address);
	getaddress();
	setsdt(sdt);
	getsdt();
}
void Person::setidPerson(int id) {
	this->idPerson = id;
};
int Person::getidperson() {
	return this->idPerson;
};
void Person::setfullname(string fullname) {
	this->fullname = fullname;
};
string Person::getfullname() {
	return this->fullname;
};
void Person::setaddress(string address) {
	this->address = address;
};
string Person::getaddress() {
	return this->address;
};
void Person::setsdt(string sdt) {
	this->sdt = sdt;
};
string Person::getsdt() {
	return this->sdt;
};
