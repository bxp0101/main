#include<iostream>
using namespace std;
int main()
{
	//单精度
	float f1 = 3.14f;
	float f2 = 3.1415926f;
	float f3 = 3e2;
	cout << "f1=" << f1 << endl;
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;
	cout << "float所占字节大小是" << sizeof(float) << "." << endl;
	//双精度
	double d1 = 3.14;
	double d2 = 3.1415927;
	double d3 = 3e-2;
	cout << "d1=" << d1 << endl;
	cout << "d2=" << d2 << endl;
	cout << "d3=" << d3 << endl;
	cout << "double所占字节大小是" << sizeof(double) << endl;
	system("pause");
	return 0;
}