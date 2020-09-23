
#include <iostream>
#include "Student.h"
#include<string>
#include<vector>
using namespace std;
vector<Student> S;
vector<int> myvector;

void hienthidanhsach(vector<Student> S) {
	if (S.size() == 0) {
		cout << "Danh sach sinh vien rong" << endl;
	}
	else {
		cout << "Danh sach sinh vien." << endl;
		for (int i = 0; i < S.size(); i++)
		{
			cout << "\nstudent:" << i + 1 << endl;
			cout << "Ma Sv: " << S.at(i).getrollNo()
				<< "  - Ten SV: " << S.at(i).getfullName()
				<< "  - TUOI: " << S.at(i).getage()
				<< "  - Email: " << S.at(i).getemail() << endl;
		}
	}
}

//kiem tra ma sv
bool checkmaSV(vector<Student> &S, int rollNo) {
	int n = S.size();
	for (int i = 0; i < n; i++)
	{
		if (rollNo == S.at(i).getrollNo()) {
			return false;
		}
	}
	return true;
}


//them danh sach sv
void themdanhsachSV(vector<Student> &S) {

	int rollNo, age;
	string fullName, email;
	int n;
	cout << "nhap vao so luong SV muon them vao: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "nhap vao Student " << i + 1 << endl;
		cout << "nhap vao rollNo: ";
		cin >> rollNo;
		cin.ignore();
		cout << "nhap vao fullName: ";
		getline(cin, fullName);
		cout << "nhap vao age: ";
		cin >> age;
		cin.ignore();
		cout << "nhap vao email: ";
		getline(cin, email);
		if (checkmaSV(S, rollNo)) {
			Student s1(rollNo, fullName, age, email);
			S.push_back(s1);
		}
		else {
			cout << "\nMa sinh vien trung nen khong them vao duoc:" << endl;
		}
		
	}


}

//kiem tra ma sinh vien der cap nhap
bool checkmaSVup(vector<Student>& S, int masv) {
	int n = S.size();
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (masv == S.at(i).getrollNo()) {
			count++;
		}
	}
	if (count == 1) {
		return true;
	}
	else {
		return false;
	}
	
}

//capnhapthongtinSV
void capnhapthongtinSV(vector<Student> &S) {
	int masv;
	int rollNo, age;
	string fullName, email;
	cout << "Nhap vao MaSV muon cap nhap: " << endl;
	cin >> masv;
	for (Student& student : S) {
		if (masv == student.getrollNo()) {
			cout << "nhap vao Student " << masv << endl;
			cout << "nhap vao rollNo: ";
			cin >> rollNo;
			cin.ignore();
			cout << "nhap vao fullName: ";
			getline(cin, fullName);
			cout << "nhap vao age: ";
			cin >> age;
			cin.ignore();
			cout << "nhap vao email: ";
			getline(cin, email);
			student.setrollNo(rollNo);
			student.setfullName(fullName);
			student.setage(age);
			student.setemail(email);
			hienthidanhsach(S);
			return;
		}

	}
	if (checkmaSVup(S, masv) == false) {
		cout << "khong co ma sinh vien trong danh sach." << endl;
	}
		
}

//tim kiem sv
void timkiemsvtheoid(vector<Student>& S) {
	int id;
	int dem = 0;
	int n = S.size();
	cout << "nhap vao ma sinh vien tim kiem: ";
	cin >> id;
	for (int i = 0; i < n; i++)
	{
		if (id == S.at(i).getrollNo()) {
			cout << "\nstudent:" << id << endl;
			cout << "Ma Sv: " << S.at(i).getrollNo()
				<< "  - Ten SV: " << S.at(i).getfullName()
				<< "  - TUOI: " << S.at(i).getage()
				<< "  - Email: " << S.at(i).getemail() << endl;
		}
		else {
			dem++;
		}
	}
	if (dem == n) {
		cout << "khong co ma sinh vien trung";
	}
}
//xoa chuong trinh
void xoasinhvien(vector<Student>& S) {
	
	int id;
	int n = S.size();
	cout << "nhap vao ma sv: ";
	cin >> id;
	cout <<"Size: "<< S.size() << endl;
	auto index = S.begin();
	for (int i = 0; i < n; i++)
	{
		if (id == S.at(i).getrollNo()) {
			index = index + i;
			cout << i << endl;
			S.erase(index);
			return;
			//if (i != n - 1) {
			//	S.at(i) = S.at(i + 1);
			//}	
		}
	}
	
	if (checkmaSVup(S, id) == false) {
		cout << "khong co ma sinh vien trong danh sach." << endl;
	}
}

//thoat chuong trinh;
bool thoatchuongtrinh(bool& check) {
	char check1;
	cout << "thoat chuong trinh ban bam Y or N.";
	cin >> check1;
	if (check1 == 'Y' || check1 == 'y') {
		return false;
	}
	else if (check1 == 'n' || check1 == 'N') {
		return true;
	}
}
int main() {
//	Student stu;
	
	//S.push_back(stu);
	int chose;
	bool check = true;
	cout << "Chon 1.Hien thi danh sach sinh vien.\n"
		<< "Chon 2:Them moi sinh vien vao trong danh sach.\n"
		<< "Chon 3:Cap nhap thong tin sinh vien.\n"
		<< "Chon 4:Xoa sinh vien khoi danh sach.\n"
		<< "Chon 5:Tim kiem nhanh 1 sinh vien theo ma nhan vien.\n"
		<< "Chon 6:Thoat chuong trinh.";

	while (check) {
		cout << "\nMoi ban chon lua menu.\n";
		cin >> chose;
		switch (chose) {
		case 1:
			hienthidanhsach(S);
			break;
		case 2:
			themdanhsachSV(S);
			break;
		case 3:
			capnhapthongtinSV(S);
			break;

		case 4:
			xoasinhvien(S);
			
			break;
		case 5:
			timkiemsvtheoid(S);
			break;
		case 6:
			check = thoatchuongtrinh(check);
			break;
		}
		
	}
return 0;
}
