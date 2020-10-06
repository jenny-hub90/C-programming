//function with no argument and return type
#include <stdio.h>
int sum(){
	int a=2,b=5,c;
	c=a+b;
	return c;
}
void main(){
	int x;
	x=sum();
	printf("%d",x); 
}
