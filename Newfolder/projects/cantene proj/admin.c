#include<stdio.h>

int admin(char a,int *p1,int *p2,int *p3,int *p4,int *p5){
    if(a){
        if (a=='1'){
            printf("ADMIN");
            printf("price of Breakfast:");
            scanf("%d",p1);
            scanf("%d",p2);
            scanf("%d",p3);
            scanf("%d",p4);
            scanf("%d",p5);
            // printf("Item-1 Price:%d",p1);
            // printf("Item-2 price:%d",p2);
            // printf("Item-3 price:%d",p3);
            // printf("Item-4 price:%d",p4);
            // printf("Item-5 price:%d",p5);
        }      
        else if (a=='2'){
            printf("price of Lunch:");
            scanf("%d",p1);
            scanf("%d",p2);
            scanf("%d",p3);
            scanf("%d",p4);
            scanf("%d",p5);
            // printf("Item-1 price:%d",p1);        
            // printf("Item-2 price:%d",p2);
            // printf("Item-3 price:%d",p3);      
            // printf("Item-4 price:%d",p4);       
            // printf("Item-5 price:%d",p5);
            // return p1,p2,p3,p4,p5;
        }
        else if (a=='3'){
            printf("price of dinner:");
            scanf("%d",p1);
            scanf("%d",p2);
            scanf("%d",p3);
            scanf("%d",p4);
            scanf("%d",p5);
            // printf("Item-1 price:%d",&p1);
            // printf("Item-2 price:%d",&p2);
            // printf("Item-3 price:%d",&p3);
            // printf("Item-4 price:%d",&p4);
            // printf("Item-5 price:%d",&p5);
            // return p1,p2,p3,p4,p5;
        }
        else{
            printf("soory please coorect option");
    }

}
}