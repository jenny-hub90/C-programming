#include<stdio.h>
void main(){
	int salary,bonus;
	scanf("%d",&salary);
	if(salary>25000){
		bonus=0.1*salary;
		salary=salary+bonus;
	}
	else{
		bonus=0.05*salary;
		salary=salary+bonus;
	}
	printf("%d",salary);
}
