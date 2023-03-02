#include<stdio.h>
// #define len=10;
// int main(){
//     int a[]={1,2,3,5};
//     int pos,count;
//     scanf("%d",&pos);
//     count=sizeof(a)/sizeof(a[0]);

//     for (int i=count-1;i>=pos-1;i--){
//         a[i+1]=a[i];
//     }
//     a[pos-1]=4;
//     count=sizeof(a)/sizeof(a[0]);
//     for (int i=0;i<count;i++){
//         printf("%d",a[i]);
//     }
// }

int main(){
    int a[20];
    int pos,count,size,val;
    scanf("%d",&pos);
    scanf("%d",&size);
    for (int i=0;i<size;i++){
        scanf("%d",&val);
        a[i]=val;
    }
    for (int i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=4;
    for (int i=0;i<size+1;i++){
        printf("%d",a[i]);
    }
}