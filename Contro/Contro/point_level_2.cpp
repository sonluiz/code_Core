#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

void nhaparray(int** c) {

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> c[i][j];
		}
	}
}
void xuatarray(int** c) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << c[i][j] << "  ";
		}
		cout << endl;
	}
}

int main() {
	
	int** c = (int**)calloc(3, sizeof(int*));
	for (int i = 0; i < 3; i++) {

		c[i] = (int*)calloc(4, sizeof(int));
	}
	cout << "point level 2:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			//cout <<( int**)c[i][j] << "  ";
			cout << c[i][j] << "  ";
		}
		cout << "\n";
	}
	cout << "nhap value for point level 2:" << endl;
	nhaparray(c);
	cout << "Value for point level 2:" << endl;
	xuatarray(c);
	//free calloc memory
	for (int i = 0; i < 3; i++) {
		free(c[i]);
	}
	free(c);
	cout << endl;
	cout << "free point level 2:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << c[i][j] << "  ";
		}
		cout << "";
	}

	return 0;
}