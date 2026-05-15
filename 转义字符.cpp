#include<iostream>
using namespace std;
int main()
{
	//转义字符

	//1.换行--\n;
	cout << "hello world" << endl;
	cout << "hello world\n";

	//2.反斜杠--\\;
	cout << "\\" << endl;

	//3.水平制表--\t;整齐输出数据
	cout << "aaa\thello world" << endl; 
	cout << "aaaa\thello world" << endl;
	cout << "aaaaa\thello world" << endl;

	cout << "aaa hello world" << endl;
	cout << "aaaa hello world" << endl;
	cout << "aaaaa hello world" << endl;

	return 0;
}