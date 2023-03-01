#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *ftr;
	ftr=fopen("day1.txt","a");
	if (ftr==NULL){
		printf("unable to the file");
		exit(0);
	}
	else{
		fputs("you are now in second batch of sdi ",ftr);
	}
	fclose(ftr);
	return 0;
}
