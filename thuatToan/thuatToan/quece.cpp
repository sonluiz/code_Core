#include<iostream>
#include<string>

using namespace std;

void themphantu(int arr[], int &font, int &rear,int size) {
	if (rear == size) {
		cout << "mang da day khong them duoc nua" << endl;

	}
	else {
		//rear++;
		++rear;
		int n;
		cout << "nhap phan tu muon them vao: ";
		cin >> n;
		arr[rear-1] = n;

	}

}
void show(int arr[], int font, int rear) {
	cout << "mang arr la: ";
	for (int i = font; i < rear; i++)
	{
		cout << arr[i] << " ";
	}
}
int layphantu(int arr[], int &font, int &rear, int size) {
	int k;
	if (font == rear || font == size) {
		cout << "mang rong." << endl;

	}
	else {
		k = arr[font];
		arr[font] = 0;
		font++;
	}
	return k;
}

int mainquece() {
	int arr[20] = { 1,2,3,4 };
	int font = 0, rear = 4;
	int size = 20;
	show(arr, font, rear);
	
	themphantu(arr,font,rear,size);
	int k = layphantu(arr, font, rear, size);
	cout << "phan tu lay ra la: " << k << endl;
	show(arr, font, rear);
	return 0;
}