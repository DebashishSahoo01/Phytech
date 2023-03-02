#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp=fopen("student.txt","w");
    if (fp==NULL){
        printf("unable to open file");
        exit(1);
    }
    printf("sucessfully created");
}