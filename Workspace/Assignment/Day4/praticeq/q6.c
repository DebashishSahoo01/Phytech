#include<stdio.h>

int main(){
	int a,d,y,m;
	scanf("%d",&a);
	y=a/365;
	printf("%d years\n",y);
	m=(a-(y*365))/30;
	printf("%d months\n",m);
	d=(a-(y*365)-(m*30));
	printf("%d days\n",d);
	return 0;
}
