#include <stdio.h>
void main(){
int a=10;
here:
	printf("%d \n",a);
	a--;
	if(a==5){
		goto there;
		}
		if(a>0){
			goto here;
		}
	there:
		printf("");
}
