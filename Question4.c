#include <stdio.h>
void main(){
	char ch;
	printf("enter any character:");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90){
		printf("%c",ch+32);
	}
	else if(ch>=97 && ch<=122){
		printf("%c",ch);
	}
	else{
		printf("error");
	}
}

