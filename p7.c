#include <stdio.h>
void main(){
	int num=5;
	if(num>0&&num<=10){
		printf("it is between 0 to 10");
	}
	else if(num>11 &&num<=20){
		printf("it is between 11 to 20");
	}
	else if(num>21 &&num<=30){
		printf("it is between 21 to 30");
	}
	else{
		printf("it is greater than 30");
	}
}
