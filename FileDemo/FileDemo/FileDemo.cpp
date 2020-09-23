// FileDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
using namespace std;

void showarr(int* arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\ndone";
}

int main1()
{
    //mo file - doc file- dong file
   //b1 tao doi tuong fstream ddeer tro toi file
    fstream fs("son1.txt", ios::in); // laasy file ra chi de doc va xu ly
   // ifstream ifs("C:\\Users\\ABC\\Desktop\\err.txt");
    //fstream fs1;
    //fs1.open("C:/Users/ABC/Desktop/err.txt");

    int n;
    int* arr;
    fs >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        fs >> arr[i];
    }
    showarr(arr, n);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
