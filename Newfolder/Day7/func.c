// fuctiln types check

#include<stdio.h>

// void main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("%d",a+b);
// }

int add(){
    static int count=0;
    printf("%d %d\n",count++,&count);
}

int main(){
    // int a=0,count;


    // a=add(count);
    // count=a;
    // a=add(count);
    // count=a;
    // a=add(count);
    // count=a;
    // a=add(count);
    // printf("%d",a);
    

    // count=add(a);
    // add(count++);
    // add(count++);
    // add(count++);
    // add(count++);
    // printf("%d",count);

    add();
    add();
    add();
    add();
    add();
}