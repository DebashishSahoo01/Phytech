#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *ftr;
	ftr=fopen("day1.txt","r");
	if (ftr==NULL){
		printf("unable to open the file\n");
	}
	else{
		char c=getc(ftr);
		printf("%c",c);
	}
	fclose(ftr);
	printf("file is closed sucessfully");
	return 0;
}
