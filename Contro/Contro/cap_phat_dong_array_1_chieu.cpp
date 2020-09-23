#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

//nhap mang
void nhapmang(int* arr, int n) {
	cout << "nhap vao mang." << endl;
	for (int i = 0; i < n; i++) {
		cout << "arr[ " << i << " ]= ";
		cin >> *(arr + i);
	}
}
void xuatmang(int* arr, int n) {

	cout << "mang vua nhap la: " << endl;
	for (size_t i = 0; i < n; i++)
	{
		cout << *(arr + i) << "  ";
	}
}

int main() {
	int* arr, n;
	cout << "nhap vao so luong phan tu arr: " << endl;
	cin >> n;
	arr = (int*)calloc(n, sizeof(int));
	nhapmang(arr, n);
	xuatmang(arr, n);

}
