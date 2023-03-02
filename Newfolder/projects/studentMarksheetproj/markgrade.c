#include<stdio.h>
#include"result.h"
int main(){
    int m,p,c,b,e;
    char a[100];
    char matmatics,physics,chemestry,biology,english;
    printf("Enter the details\n");
    scanf("%[^\n]%*c",&a);
    printf("enter obtain mark in math:");
    scanf("%d",&m);
    printf("enter obtain mark in physics:");
    scanf("%d",&p);
    printf("enter obtain mark in chemistry:");
    scanf("%d",&c);
    printf("enter obtain mark in biology:");
    scanf("%d",&b);
    printf("enter obtain mark in english:");
    scanf("%d",&e);
    matmatics=mathm(m);
    physics=phy(p);
    chemestry=chem(c);
    biology=bio(b);
    english=eng(e);
    printf("%s \n",details(a));
    printf("Math:%c \n",matmatics);
    printf("Physics:%c \n",physics);
    printf("Chemestry:%c \n",chemestry);
    printf("Biology:%c \n",biology);
    printf("English:%c \n",english);
}