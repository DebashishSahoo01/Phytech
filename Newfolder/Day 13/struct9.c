#include<stdio.h>

int main(){
    struct zoho{
        int emp;
        char com[5];
        struct foun{
            char ceo[10];
        }p;
    };
    struct zoho zs={4000,"zoho","sri"};
    printf("%s,%d,%s",zs.com,zs.emp,zs.p.ceo);
}