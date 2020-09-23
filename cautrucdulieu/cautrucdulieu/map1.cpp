// cautrucdulieu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int , int> gquiz1;
    // insert elements in random order 
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(10, 88));
    gquiz1.insert(pair<int, int>(9, 00));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
    gquiz1.insert(pair<int, int>(7, 10));

    map<int, int>::iterator itr;
    for (auto itr = gquiz1.begin(); itr != gquiz1.end(); itr++)
    {
        cout << '\t' << itr->first
            << '\t' << itr->second << '\n';
    }

    cout << endl;

    // assigning the elements from gquiz1 to gquiz2 
    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());

    // print all elements of the map gquiz2 
    cout << "\nThe map gquiz2 after"
        << " assign from gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
            << '\t' << itr->second << '\n';
    }
    cout << endl;

    // remove all elements up to 
    // element with key=3 in gquiz2 
    cout << "\ngquiz2 after removal of"
        " elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
            << '\t' << itr->second << '\n';
    }
    //cout << "\ngquiz1.rend()->second: " << gquiz1.rend()->second;
    //cout << "\ngquiz1.rbegin()->second: " << gquiz1.rbegin()->second;
    
    for (itr = gquiz2.rbegin(); itr != gquiz2.rend(); ++itr) {
        cout << '\t' << itr->first
            << '\t' << itr->second << '\n';
    }

    return 0;
}
