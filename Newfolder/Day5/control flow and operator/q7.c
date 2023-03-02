#include<stdio.h>

int main(){
    int a,b,c,count;
    char d1[]="sunny day",d2[]="unpretectable";
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Day:%d is %s \n",1,d1);
    printf("Day:%d is %s \n",2,d1);
    for (int i=3;i<=7;i++){
        scanf("%d",&c);
        if (c==a){
            a=c;
            printf("day : %d is %s \n",i,d1);
        }
        else if (c==b)
        {
            b=c;
            printf("day : %d is %s \n",i,d1);
        }
        else{
            printf("Day : %d is %s \n",i,d2);
            count++;
            if (count%2==0){
                b=c;
            }
            else{
                a=c;
            }
        }
        
    }
}