#include <iostream>
#include <cstring>
using namespace std;

char* getName(char* fullname) {

	if (fullname == NULL)
		return NULL;

	char* pTemp = strrchr(fullname, ' ');

	if (pTemp == NULL)
		return fullname;
	else
		return pTemp + 1;
}

int main() {

	char* fullName = new char[50];

	cout << "Enter your full name: ";
	cin.getline(fullName, 50);

	cout << "Your last name is: ";
	char* name = getName(fullName);

	//delete[] fullName;
	//delete[] name;
	cout << name << endl;
	name = NULL;
	//cout << fullName << endl;

	int* p = new int;
	delete p; // con tro lung lo , truy cap se bị crash chuong trinh
	// delete con tro se tra lai quyen truy cap cho truong trinh chu k phai xoa data .., chuong trinh se
	// co quyen cap va gan cac gia tri cho cac bien or con tro khac. 
	// khi delete trao lai vung nho cho he dieu hanh, ta phai gan con tro ve null de tranh nhiêu con tro 
	// tro vào cùng môt vùng nhớ
	// con tro null la con trỏ không được cấp phát vùng nhớ cho con trỏ này


	int* p1 ;
	cout << p1 << "&b: " << &p1 << endl;
	return 0;
}