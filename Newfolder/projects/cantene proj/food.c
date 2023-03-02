#include<stdio.h>

int food(char a,int *a1,int *a2,int *a3,int *a4,int *a5){
    if(a){
        if (a=='1'){
            printf("\nToday Breakfast 5 items are available\nItem-1:Bara\nItem-2:piaji\nItem-3:puri\nItem-4:bara\nItem-5:chop\nplease select the quantity of each item\n");
            scanf("%d",a1);
            scanf("%d",a2);
            scanf("%d",a3);
            scanf("%d",a4);
            scanf("%d",a5);
            // printf("Item-1 quantity:");
            // printf("Item-2 quantity:");
            // printf("Item-3 quantity:");
            // printf("Item-4 quantity:");
            // printf("Item-5 quantity:");
            // return a1,a2,a3,a4,a5;
        }
        else if (a=='2')
        {
            printf("Today lunch 5 items are available\nItem-1:chicken\nItem-2:mutton\nItem-3:biryani\nItem-4:panner\nItem-5:dalfry\nplease select the quantity of each item");
            scanf("%d",a1);
            scanf("%d",a2);
            scanf("%d",a3);
            scanf("%d",a4);
            scanf("%d",a5);
            // printf("Item-1 quantity:");
            // printf("Item-2 quantity:");
            // printf("Item-3 quantity:");
            // printf("Item-4 quantity:");
            // printf("Item-5 quantity:");
            // return a1,a2,a3,a4,a5;
        }     
        else if (a=='3')
        {
            printf("Today dinner 5 items are available\nItem-1:\nItem-2:\n Item-3:\nItem-4:\nItem-5:\nplease select the quantity of each item");
            scanf("%d",a1);
            scanf("%d",a2);
            scanf("%d",a3);
            scanf("%d",a4);
            scanf("%d",a5);
            // printf("Item-1 quantity:");
            // printf("Item-2 quantity:");
            // printf("Item-3 quantity:");
            // printf("Item-4 quantity:");
            // printf("Item-5 quantity:");
            // return a1,a2,a3,a4,a5;
        }
        else{
            printf("Sorry please Try again!");
        }
    }
}