#include<stdio.h>
int main()
{
	int a = 1;
	int s = 0;
	do
	{
		s = s + a;
		a++;
	} while (a > 100);
	printf("s=%d", s);
	return 0;
}