#include<Stdio.h>
float area( float r)
{
	float a;
	a= 3.14 *r *r;
 return a;
}
void main(){
	float x,y;
	x= area(20.0);
	y= area(5.0);
	printf("%f \n",x);
	printf("%f \n",y);
}
