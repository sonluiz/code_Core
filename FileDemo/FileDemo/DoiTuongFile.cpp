#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Person {

public:
	int age;
	string address;
	string name;
	string email;
public:
	Person();
	Person(int age, string name,string address , string email) {
		this->age = age;
		this->name = name;
		this->address = address;
		this->email = email;
	};
	void showthongtin();
};
Person::Person() {
	this->age = 0;
	this->name = "";
	this->address = "";
	this->email = "";
};
void Person::showthongtin() {
	cout << "name: " << name <<
		"\ntuoi: " << age <<
		"\naddress: " << address <<
		"\nemail: " << email;
	cout << "\n==============================================";
};
void showinfo(Person* persons, int n) {
	for (int i = 0; i < n; i++)
	{
		persons[i].showthongtin();
	}
}
int main() {
	fstream fs("thongtinPerson.txt", ios::in);
	if (fs.fail())
	{
		std::cout << "Failed to open this file!" << std::endl;
		return -1;
	}
	Person* persons = new Person[3];
	int i =0;
	int age;
	string address;
	string name;
	string email;
	while (!fs.eof()) {
		fs >> age;
		fs.ignore();
	//	getline(fs, age);
		getline(fs,name);
		getline(fs,address);
		getline(fs, email);
		Person p(age, name, address, email);
		persons[i] = p;
		i++;
	}
	showinfo(persons, i);
	fs.close();
	return 0;

}