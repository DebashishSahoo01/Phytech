#include<stdio.h>
#include<math.h>
int main(){
    int a[5];
    int small=pow(10,9),large=0;
    for (int i=0;i<5;i++){
        scanf("%d",&a[i]);
        if (a[i]>large){
            large=a[i];
        }
        if (a[i]>small){
            small=small;
        }
        else{
            small=a[i];
        }

    }
    printf("largest:%d\nsmallest:%d\n",large,small);
}