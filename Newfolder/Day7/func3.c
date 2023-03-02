#include<stdio.h>


int a=20;
int main(){
    // printf("%d",a);
    // {
    //     {
    // static int a=30;
    // printf("%d",a);
    // }
    // int a=50;
    // printf("%d",a);
    // }
    // int a=90;
    // printf("%d",a);
    

    static int a=1;
    {
        static int a=2;
    }
    {
        static int a=3;
    }
    {
        static int a=4;
    }
    {
        printf("%d",a);
    }
    {
        printf("%d",a);
    }
    {
        printf("%d",a);
    }
    printf("%d",a);
}

