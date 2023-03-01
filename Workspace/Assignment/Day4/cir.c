#include<stdio.h>

int main(){
	float pi=3.14;
	int r;
	scanf("%d",&r);
	float a= pi * r *r;
	float p=2 * pi * r;
	printf("perimeter of the circle is:%0.3f \n",p);
	printf("area of the circle is :%0.3f \n",a);
	return (0);
	
}
