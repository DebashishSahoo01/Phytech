#include<stdio.h>

int main(){
	char n[30],d[20],p[15];
	scanf("%[^\n]%*c",n);
	scanf("%[^\n]%*c",d);
	scanf("%[^\n]%*c",p);
	printf("Name:%s\n",n);
	printf("DOB:%s\n",d);
	printf("mobile:%s\n",p);
	return 0;
}
