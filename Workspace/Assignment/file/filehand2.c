#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char ch;
	fp=fopen("student3.txt","a+");
	if (fp==NULL){
		printf("the file is empty");
		exit(0);
	}
	printf("enter the data you want to append");
	while((ch=getchar())!=EOF){
		putc(ch,fp);
	}
	printf("after appending\n");
	fseek(fp,0,SEEK_SET);
	while((ch=getc(fp))!=EOF){
		putchar(ch);
	}
	fclose(fp);
}

