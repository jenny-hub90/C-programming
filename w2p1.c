#include<stdio.h>
int sum(int a, int b)
{
	int s;
	s=a+b;
	return s;
}
void main()
{
	int x;
	x= sum(5,10);
	printf("%d",x);
}
