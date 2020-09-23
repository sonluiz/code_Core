#include<iostream>
#include<map>
using namespace std;

int main() {

	map<int, string> mymap = { {1,"nguyen hong son"}, {2,"nguyen nam"}, {3,"lan huong"},{4,"hoang anh" } };
	map<int, string >::iterator t;
	for (auto t = mymap.begin(); t != mymap.end(); t++)
	{
		cout << "key => value  :  " << t->first << " => " << t->second << endl;
	}
	cout << endl;
	cout << "mymap.at[2] = " << mymap.at(2) << endl;
	mymap.at(1) = "son hong";
	for (auto t = mymap.begin(); t != mymap.end(); t++)
	{
		cout << "key => value  :  " << t->first << " => " << t->second << endl;
	}
	cout << "mymap.empty = " << mymap.empty() << endl;
	cout << "mymap.size = " << mymap.size() << endl;
	return 0;
}