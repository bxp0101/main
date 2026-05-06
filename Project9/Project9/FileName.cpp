#include<iostream>
using namespace std;
int main()
{
	short a = 1;
	cout << "short所占内存空间是：" << sizeof(short) << endl;
	int b = 2;
	cout << "int所占内存空间是：" << sizeof(int) << endl;
	long c = 3;
	cout << "long所占内存空间是：" << sizeof(long) << endl;
	long long d = 4;
	cout << "long long所占内存空间是：" << sizeof(long long) << endl;
	return 0;
}