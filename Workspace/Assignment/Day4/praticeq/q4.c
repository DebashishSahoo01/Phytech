#include<stdio.h>
#include<math.h>
int main(){
	float w1,w2,t1,t2;
	double avg;
	scanf("%f",&w1);
	scanf("%f",&w2);
	scanf("%f",&t1);
	scanf("%f",&t2);
	avg=((w1*t1)+(w2*t2))/(t1+t2);
	printf("avarage value is:%lf",avg);
	return 0;

}
