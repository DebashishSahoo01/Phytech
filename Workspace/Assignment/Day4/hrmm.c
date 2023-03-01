#include<stdio.h>
int main(){
	int a=25300;
	int hr;
	hr=a/3600;
	int min;
	min = (a-(hr*3600))/60;
	int sec;
	sec =(a-(hr*3600))-(min*60);
	printf("%dhr:%dmin:%dsec \n",hr,min,sec);
	return 0;
}
