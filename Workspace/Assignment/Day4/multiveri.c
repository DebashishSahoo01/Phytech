#include<stdio.h>

int main(){
	int a=125;
	int b=12345;
	long ax=1234567890;
	short s=4043;
	float x=2.13459;
	double dx=1.1415927;
	char c='W';
	unsigned long ux=2541567890;
	printf("addition of a+c is %d\n",a+c);
	printf("addition of x+c is %f\n",x+c);
	printf("addition of dx+x is %f\n",dx+x);
	printf("addition of (int(dx))+ax is %ld\n",(int(dx))+ax);
	printf("addition of a+x is %f\n",a+x);
	printf("addition of s+b is %d\n",s+b);
	printf("addition of ax+b is %ld \n",ax+b);
	printf("addition of s+c is %hd\n",s+c);
	printf("addition of ax+c is %ld \n",ax+c);
	printf("addition of ax+ux is %lu \n",ax+ux);
	return (0);

}
