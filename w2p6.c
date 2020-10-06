#include<stdio.h>
int fact(int n)
{
	int i;
	int f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}

void main(){
	int x,y,z,result;
	x = fact(3);
	y = fact(5);
	z = fact(7);
	result= x*y*z;
	printf("%d",result);
}
