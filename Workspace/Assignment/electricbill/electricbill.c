#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct billing{
    char area[50];
    char name[50];
    int mnum;
    float mread;
    char email[20];
    char address[100];
    int mob;
}Bill;


void detail(){
    printf("enter your area:\n");
    scanf("%s",Bill.area);
    printf("\nenter your name:\n");
    scanf("%s",Bill.name);
    printf("\nenter meter num\n");
    scanf("%d",&Bill.mnum);
    printf("\nenter the unit is consumed\n");
    scanf("%f",&Bill.mread);
    printf("\nenter your mails:\n");
    scanf("%s",Bill.email);
    printf("\nenter your address:\n");
    scanf("%s",Bill.address);
    printf("\nenter your phone number\n");
    scanf("%d",&Bill.mob);
}

void urban(){
    int amount=0;
    Bill.mread;
    printf("\ni am in void urban");
    if (Bill.mread<=30 && Bill.mread>0){
       	amount=Bill.mread *3.25;
    }else if(Bill.mread<=100 && Bill.mread>=31){
        amount=Bill.mread *4.70;
    }else if (Bill.mread<=200 && Bill.mread>=101){
        amount=Bill.mread *6.25;
    }else{
        amount=Bill.mread *7.30;
    }
    printf("%s:name\n",Bill.name);
    printf("\nyour total amount bill is:%d\n",amount);
}

void rural(){
    int amount=0;
    Bill.mread;
    printf("i am in void rural");
    if (Bill.mread<=30 && Bill.mread>0){
        amount=Bill.mread *3.15;
    }else if(Bill.mread<=100 && Bill.mread>=31){
        amount=Bill.mread *4.40;
    }else if (Bill.mread<=200 && Bill.mread>=101){
        amount=Bill.mread *5.95;
    }else{
        amount=Bill.mread *6.80;
    }
    printf("%s:name",Bill.name);
    printf("\nyour total amount bill is:%d",amount);
}
