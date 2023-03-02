#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include"head.h"
int main(){
    int choose;
    main:
    detail();
    printf("welcome to billing center\n");
    do
    {
        printf("\nchoose any of those option given below\n");
        printf("choose 1:for Urban area\nchoose 2:for Rural area\nchoose 3: restart\nchoose 4: exit");
        scanf("%d",&choose);
        switch (choose)
        {
        case 1:
            urban();
            break;
        case 2:
            rural();
            break;
        case 3:
            goto main;
        case 4:
            break;
        default:
            printf("please choose correct option");
            printf("the option are given above");
            break;
        }
    } while (choose !=4);
    printing();

}
