#include<stdio.h>

int main(){
    char s[]="welcome to yooo hd";
    int i=0,count=0;
    while (s[i]!='\0'){
        if (s[i]==' ' && s[i+1]!=' '){
            count++;
        }
        i++;
    }
    printf("%d",count+1);

}