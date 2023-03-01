#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *ftr;
	ftr=fopen("day1.txt","w");
	char neww[50]="i am in now in sdi";
	if (ftr ==NULL){
		printf("unable to open the file");
		exit(1);
	}
	else{
		printf("file opened");
		if (strlen(neww)>0){
			fputs(neww,ftr);
		}
       	}
	fclose(ftr);
	return 0;
}
