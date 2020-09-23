#include<iostream>
#include<cstdlib>
using namespace std;

/*

A giữ địa chỉ nhà chú B => A = &B;
Chú B biết địa chỉ nhà thằng C => B = &C;

(*A) tương đương (*(&B)) tương đương &C;
*(*A) tương đương *(*(&B)) tương đương C;

*/

int main() {

	int a = 12;
	int *b = &a;
	int** ptr = &b;
	int** ptr2 = NULL;
	cout << "contro gan null: " << ptr2 <<" - add: "<< &ptr2 << endl;
	cout << "gia tri a la: " << a << "- dia chi a la: " << &a << endl;
	cout << "gia tri b la: " << b << "- dia chi b la: " << *b <<": "<<&b << endl;
	cout << "gia tri ptr cap 2: " << ptr << "-gia tri b la: " << *ptr << ": gia tri a: " << **ptr
		 << "- dia chi ptr cap 2: " << &ptr << endl;

	return 0;
}