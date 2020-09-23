#include<iostream>
#include<string>
#include<cstdlib>
#include<stdlib.h>
using namespace std;


int main() {
	int n, m;

	cout << "nhap vao hang: ";
	cin >> n;
	cout << "nhap vao cot: ";
	cin >> m;
	int** c = (int**)calloc(n, sizeof(int*));
	for (int i = 0; i < n; i++) {

		c[i] = (int*)calloc(m, sizeof(int));
		for (int j = 0; j < m; j++)
		{
			cin >> c[i][j];
		}
	}

	cout << "point level 2:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//cout <<( int**)c[i][j] << "  ";
			cout << c[i][j] << "  ";
		}
		cout << "\n";
	}
	return 0;

}
