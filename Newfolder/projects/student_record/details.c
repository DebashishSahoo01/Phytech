#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
    char Name[30];
    char Gender[30];
    int Mob;
};

struct Mark{
    struct Student detail;
    int math;
    int phy;
    int chem;
    int total;
};

int result(struct Mark std[]){
    int b;
    for (int i=0;i<3;i++){
        printf("enter Name:\n");
        scanf("%s",std[i].detail.Name);
        printf("enter gender ex:-{ M,F }\n");
        scanf("%s",std[i].detail.Gender);
        printf("enter Mobile no\n");
        scanf("%d",&std[i].detail.Mob);
        printf("Enter your math mark\n");
        scanf("%d",&std[i].math);
        printf("enter your Physics Mark\n");
        scanf("%d",&std[i].phy);
        printf("enter you chemistry mark\n");
        scanf("%d",&std[i].chem);
        std[i].total=std[i].chem + std[i].phy + std[i].math;
    }
    for(int i=0;i<3;i++){
        printf("NaME:%s Gender:%s Mob:%d\n Total:%d\n",std[i].detail.Name,std[i].detail.Gender,std[i].detail.Mob,std[i].total);
        if (std[i].total>250 && std[i].total<300){
            printf("GRADE:O\n");
        }
        else if (std[i].total>220 && std[i].total<250){
            printf("GRADE:A\n\n");
        }else if(std[i].total>180 && std[i].total<220){
            printf("GRADE:B\n\n");
        }else if (std[i].total>120 && std[i].total<180){
            printf("GRADE:C\n\n");
        }else if(std[i].total>100 && std[i].total<120){
            printf("GRADE:D\n\n");
        }else if (std[i].total>70 && std[i].total<100){
            printf("GRADE:E\n\n");
        }else{
            printf("GRADE:F\n");
            printf("YOU are fail\n\n");
        }
    }
    }
int main(){
    int n;
    scanf("%d",&n);
    struct Mark stud[3];
    result (stud);
}