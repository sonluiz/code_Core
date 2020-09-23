#include<iostream>
#include<string>
using namespace std;

/*Sử dụng calloc an toàn hơn malloc vì sau khi khởi tạo vùng nhớ 
thì calloc sẽ khởi tạo vùng nhớ cấp phát = 0, còn vùng nhớ do malloc cấp phát 
vẫn chứa giá trị rác nên sẽ dễ gây ra lỗi nếu truy xuất tới vùn nhớ này 
trước khi gán cho nó một giá trị xác định.*/

int main() {

	int* c = (int*)calloc(10, sizeof(int));
	int* m = (int*)malloc(10 * sizeof(int));
	cout << "for calloc demo:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "calloc value " << i << ": " << *(c+i) << endl ;
		cout << "calloc address " << i << ": " << c + i << endl;
	}
	cout << "c=for cho malloc: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << "malloc value " << i << ": " << *(c + i) << endl;
		cout << "malloc address " << i << ": " << c + i << endl;
	}
	return 0;
}