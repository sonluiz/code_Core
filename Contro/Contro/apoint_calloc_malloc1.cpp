#include<iostream>
#include<string>
using namespace std;

//Sử dụng calloc an toàn hơn malloc vì sau khi khởi tạo vùng nhớ thì calloc
//sẽ khởi tạo vùng nhớ cấp phát = 0, còn vùng nhớ do malloc cấp phát vẫn chứa giá trị
//rác nên sẽ dễ gây ra lỗi nếu truy xuất tới vùn nhớ này trước khi gán cho nó 
//một giá trị xác định.

int main() {

	int* c = (int*)calloc(10, sizeof(int));
	int* m = (int*)malloc(10 * sizeof(int));



	return 0;
}