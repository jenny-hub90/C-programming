#include <stdio.h>
void main(){
	int i;
	int j;
	printf("enter any number:\n");
	scanf("%d",&i);
	
	for (j=1;j<i;j++){
		if(j==8){
			break;
		}
		if(j==2){
			continue;
		}
		printf("%d",j);
	}
	char ch;
	printf("type ! to end:");
	while(1){
		ch=getche();
		if(ch=='!'){
			break;
		}
	}
}
