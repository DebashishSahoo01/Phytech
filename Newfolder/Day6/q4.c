// leap year

#include<stdio.h>

int main(){
    int y;
    scanf("%d",&y);
    if (y%4==0){
        printf("%d is leap year",y);
    }else if(y%100==0){
        printf("%d not a leap year",y);
    }
    else if (y%400==0){
        printf("%d is leap year",y);
    }
    else{
        printf("%d is not an leap year",y);
    }
}