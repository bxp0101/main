#include<iostream>
using namespace std;
int main()
{
	//1.字符型变量创建
	char ch1 = 'a';
	cout << ch1 << endl;

	//2.字符型变量所占内存大小
	cout << "char所占内存大小是" << sizeof(ch1) << endl;

	//3.字符型变量常见错误-单引号、单字符
	//char ch2 = "b";
	//char ch3='abc';

	//4.字符型变量所对应的ASC11码值
	//a-97
	//A-65
	char ch2= 'A';
	cout << (int)ch1 << endl;
	cout << (int)ch2 << endl;

	return 0;
}