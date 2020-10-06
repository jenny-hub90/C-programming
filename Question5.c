#include<stdio.h>
void main(){
char ch;
ch=getche();
while(ch!=13){
	if(ch>='A'&& ch<='Z'){
		ch=ch+32;
	}
	printf("\n %c",ch);
	printf("\n enter the character again");
	ch=getche();
	
}
}

