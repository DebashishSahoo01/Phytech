#include<stdio.h>

int main(int argc ,char *argv[]){
    int sum=0,n,pro=1,div,mod;
    char stri[5];
    sscanf(argv[1],"%[^\n]%*c", stri);
    if (strcmp(argv[1],"-s")==0){
        for (int i=2;i<argc;i++){
            sscanf(argv[i],"%d",&n);
            sum=sum+n;
        }
        printf("%d",sum);
    }
    else if(strcmp(argv[1],"-p")==0){
        for (int i=2;i<argc;i++){
            sscanf(argv[i],"%d",&n);
            pro=pro*n;
        }
        printf("%d",pro);
    }
    else if (strcmp(argv[1],"-d")==0){
        for (int i=2;i<argc;i++){
            sscanf(argv[i],"%d",&n);
            div=n/2;
            printf("%d",div);
        }
    }
    else if (strcmp(argv[1],"-m")==0){
        for (int i=2;i<argc;i++){
            sscanf(argv[i],"%d",&n);
            mod=n%i;
            printf("%d",mod);
        }

    }
    // printf("%d",sum);
}