#include<stdio.h>

const char* val(char *a){
    return a;
}

int main(){
    char a[100];
    scanf("%[^\n]%*c",&a);
    printf("%s",val(a));
    return 0;
}