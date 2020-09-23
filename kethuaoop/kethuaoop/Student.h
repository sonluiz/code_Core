#include<string>
#include "Person.h"

using namespace std;
class Student : public Person {
public:
	string tenlop;
	string monhoc;
	Student(string, string, int, string, string, string);

	void settenlop(string);
	string gettenlop();
	void setmonhoc(string);
	string getmonhoc();
	virtual void setidPerson(int);
	virtual int getidperson();
	virtual void setfullname(string);
	virtual string getfullname();
	virtual void setaddress(string);
	virtual string getaddress();
	virtual void setsdt(string);
	virtual string getsdt();

	void showinfo();

};


