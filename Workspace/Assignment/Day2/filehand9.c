#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *ftr;
	ftr=fopen("day1.txt","a+");
	if (ftr==NULL){
		printf("unable to open\n");
	}
	else{
		char c[]="now";
		putc(c[0],ftr);
	}
	fclose(ftr);
	return 0;
}

