#include <stdio.h>
void main(){
	float celsius;
	float farenheit;
	printf("enter the farenheit temperature:");
	scanf("%f",&farenheit);
	celsius=(farenheit-32)/1.8;
	printf("farenheit: %.2f \n",farenheit);
	printf("celsius: %.2f \n",celsius);
}
