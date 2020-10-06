#include <stdio.h>
float abc(char ch);
void main()
{
	float x;
	x=abc('A');
	printf("%f",x);
	
}
float abc(char ch){
	return 10.577;
}
