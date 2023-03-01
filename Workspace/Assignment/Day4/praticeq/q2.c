#include<stdio.h>
#include<math.h>
int main(){
	int a,y,w,d;
	a=1329;
	y=(a/365);
	w=(a-(y*365))/7;
	d=(a-(y*365)-(w*7));
	printf("Years:%d\n",y);
       	printf("Weeks:%d\n",w);
       	printf("Days:%d\n",d);
	return 0;
}
