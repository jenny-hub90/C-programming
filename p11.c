#include <stdio.h>
void main(){
	float degf;
	float degc;
	
	degf= 55;
	degc=(degf - 32)/1.8;
	
	printf("farenheit: %.2f \n",degf);
	printf("celsius: %.2f \n",degc);	
}
