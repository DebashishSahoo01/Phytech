#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int main(){
	char buf[MAX];
	FILE *ftr;
	ftr=fopen("day1.txt","a+");
	if (ftr==NULL){
		printf("unable to open the file");
		exit(1);
	}
	else{
		printf("file is now open");
		fgets(buf,MAX ,stdin);
	}
	fclose(ftr);
	return 0;
}
