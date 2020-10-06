#include<stdio.h>
float farenheit;
float celsius;//global scope
void calc(){
	printf("calc:%.2f",farenheit);
	
}

void main(){
	printf("enter the farenheit temperature:\n");
	scanf("%f",&farenheit);
	calc();
	celsius=( farenheit-32)/1.8;
	printf("farenheit: %.2f \n",farenheit);
	printf("celsius: %.2f \n",celsius);
}
