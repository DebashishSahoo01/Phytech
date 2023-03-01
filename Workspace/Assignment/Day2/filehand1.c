#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *ftr;
	ftr=fopen("day1.txt","w");
	if (ftr==NULL){
		printf("unable to open the file");
		exit(1);
	}
	else{
		printf("file opened");
	}
	fclose(ftr);
	return 0;
}
