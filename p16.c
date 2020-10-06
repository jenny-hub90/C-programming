#include <stdio.h>
void main(){
	int i;
	
	printf("enter any number:\n");
	scanf("%d",&i);
	
	if(i%3==0 && i%5==0){
	printf("it is divisible by both 3 and 5");
		
	}else if(i%3==0){
	printf("it is divisible by 3 only");
    }else if(i%5==0){
	printf("it is divisible by 5 only");
}
	else{
		printf("it is not divisible by both 3 and 5");
		
	}
	
}
