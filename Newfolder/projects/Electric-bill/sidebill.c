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
    float amount;
}Bill[];

static int count=0;
int detail(){
    int val=count+1;
    for(int i=count;i<val;i++){
        printf("enter your area:\n");
        scanf("%s",Bill[i].area);
        printf("\nenter your name:\n");
        scanf("%s",Bill[i].name);
        printf("\nenter meter num\n");
        scanf("%d",&Bill[i].mnum);
        printf("\nenter the unit is consumed\n");
        scanf("%f",&Bill[i].mread);
        printf("\nenter your mails:\n");
        scanf("%s",Bill[i].email);
        printf("\nenter your address:\n");
        scanf("%s",Bill[i].address);
        printf("\nenter your phone number\n");
        scanf("%d",&Bill[i].mob);
        count++;
    }
}
static int val=0;
int urban(){
    int res=val+1;
    for(int i=val;i<res;i++){
        if (Bill[i].mread<=30 && Bill[i].mread>0){
            Bill[i].amount=Bill[i].mread * 3.25;
        }else if(Bill[i].mread<=100 && Bill[i].mread>=31){
            Bill[i].amount=Bill[i].mread * 4.70;
        }else if (Bill[i].mread<=200 && Bill[i].mread>=101){
            Bill[i].amount=Bill[i].mread * 6.25;
        }else{
            Bill[i].amount=Bill[i].mread * 7.30;
        }
        val++;
    }
}
int rural(){
    int new=val+1;
    for(int i=val;i<new;i++){
        if (Bill[i].mread<=30 && Bill[i].mread>0){
            Bill[i].amount=Bill[i].mread * 3.15;
        }else if(Bill[i].mread<=100 && Bill[i].mread>=31){
            Bill[i].amount=Bill[i].mread * 4.40;
        }else if (Bill[i].mread<=200 && Bill[i].mread>=101){
            Bill[i].amount=Bill[i].mread * 5.95;
        }else{
            Bill[i].amount=Bill[i].mread * 6.80;
        }
        val++;
    }
}

void printing(){
    int n;
    printf("print no");
    scanf("%d",&n);
    system("cls");
    for(int i=0;i<n;i++){
        printf("\n                       ***** ElectricBill *****                    ");
        printf("\n----------------------------------------------------------------------------------\n");
        printf("S.N.|    M.ID    |   NAME   |    AREA    |    UNIT CONSUMED   |   NET BILL |\n");
        printf("------------------------------------------------------------------------------------\n");
        printf("%d \t  %d \t     %s \t  %s \t   %.2f \t   %.2f",i+1,Bill[i].mnum,Bill[i].name,Bill[i].area,Bill[i].mread,Bill[i].amount);
        printf("\n\n");
    }
}