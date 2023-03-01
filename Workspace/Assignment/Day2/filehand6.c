#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *ftr;
	ftr=fopen("day1.txt","a+");
	if (ftr==NULL){
		printf("unable to open");
		exit(1);
	}
	else{
		printf("file is opened sucessfully");
		fputs("it is an appending with reading function",ftr);
	}
	fclose(ftr);
	return 0;
}
