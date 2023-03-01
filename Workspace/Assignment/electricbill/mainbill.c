#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"electricbill.h"
void detail();
int main(){
    detail();
    int choose;
    printf("welcome to billing center\n");
    do
    {
        printf("choose any of those option given below\n");
        printf("choose 1:for Urban area\nchoose 2:for Rural area\nchoose 3: for exit\n");
        scanf("%d",&choose);
        switch (choose)
        {
        case 1:
	    printf("i am in urban");
            urban();
            break;
        case 2:
	    printf("i am in rural");
            rural();
            break;
        default:
            printf("please choose correct option");
            printf("the option are given above");
            break;
        }
    } while (choose !=3);
    
}
