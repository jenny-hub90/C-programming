#include <stdio.h>
void main(){
	int f1=1,f2=1,f3=1, result,i;
	for(i=1;i<=3;i++)
	{
		f1=f1*i;
	}
	for(i=1;i<=5;i++)
	{
		f2=f2*i;
	}
	for(i=1;i<=7;i++)
	{
		f3=f3*i;
	}
	result=f1*f2*f3;
	printf("%d",result);
	}
