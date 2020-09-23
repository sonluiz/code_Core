#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main11()
{
    //mo file - doc file- dong file
   //b1 tao doi tuong fstream ddeer tro toi file
    fstream fs("string.txt", ios::in); // laasy file ra chi de doc va xu ly
 

    string s;
    while (!fs.eof()) {
       // fs >> s; //doc tung chu mot khi nao gap dau cach
        getline(fs, s);
        cout << s << "\n";
   }
    return 0;
}