#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	FILE *ftr;
	ftr=fopen("day1.txt","a");
	if (ftr==NULL){
		printf("unable to open");
		exit(1);
	}
	else{
		fseek(ftr,2,SEEK_END);
		fputs("now append is done sucessfully by using the fseek method",ftr);
	}
	fclose(ftr);
	return 0;

}
