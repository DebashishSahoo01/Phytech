#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *ftr;
	ftr=fopen("day1.txt","r+");
	fputs("welcome to sdi",ftr);
	fclose(ftr);
	return 0;

}
