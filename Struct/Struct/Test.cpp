#include<iostream>
#include<string>
using namespace std;

bool nguyento() {
	return false;
}

int main() {

	
	cout << "kieu bool defaul";
	if (nguyento() == 1) {
		cout << "ham tra ve true";
	}
	else
		cout << "han tra ve false";

	return 0;
}
