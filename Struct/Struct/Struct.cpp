#include <iostream>
#include <cstring>
#include<string>
using namespace std;

struct Books
{
    char  tieude[50];
    char  tacgia[50];
    char  chude[100];
    int   book_id;
};
struct Test
{
    char  tieude[50];
    char  tacgia[50];
    char  chude[100];
    int   book_id;

};
Books *timsach(Books *sach2) {

    return sach2;
}

int main()
{
    
    Books sach1;
    Books* sach2;
    sach2 = &sach1;
    //cout << sach3->chude;
    strcpy_s(sach1.tieude, "Het THuong Can nho");
    strcpy_s(sach1.tacgia, "duc phuc");
    strcpy_s(sach1.chude, "nhac viet");
    sach1.book_id = 5;
    cout << "\nTieu de cua Quyen sach thu nhat la: " << sach1.tieude << endl;
    cout << "Tac gia cua Quyen sach thu nhat la: " << sach1.tacgia << endl;
    cout << "Chu de cua Quyen sach thu nhat la: " << sach1.chude << endl;
    cout << "ID cua Quyen sach thu nhat la: " << sach1.book_id << endl;
    cout << "tesst con tro: "<< endl;
    cout << "\nTieu de cua Quyen sach thu nhat la: " << sach2->tieude << endl;
    cout << "Tac gia cua Quyen sach thu nhat la: " << sach2->tacgia << endl;
    cout << "Chu de cua Quyen sach thu nhat la: " <<sach2->chude << endl;
    cout << "ID cua Quyen sach thu nhat la: " << sach2->book_id << endl;

    Books* sach3 = timsach(sach2);
    cout << "tesst tim sach con tro ham: " << endl;
    cout << "\nTieu de cua Quyen sach thu nhat la: " << sach3->tieude << endl;
    cout << "Tac gia cua Quyen sach thu nhat la: " << sach3->tacgia << endl;

    return 0;
}