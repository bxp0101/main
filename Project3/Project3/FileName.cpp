#include<stdio.h>
int main()
{
	int a=1;
	int sum=0;
	do
	{
		sum = sum + a;
		a++;
	} while (a <= 100);
	//else
	printf("%d", sum);
	return 0;
}