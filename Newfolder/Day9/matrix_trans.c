#include<stdio.h>
int main(){
    int mat[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int trans[3][3];
    int i=0;
    while (i<3)
    {
        for (int j = 0; j <3; j++)
        {
            trans[i][j]=mat[j][i];
            printf("%d ",trans[i][j]);
        }
        printf("\n");
        i++;
    }
    // int k=0;
    // while (k<3)
    // {
    //     for (int j = 0; j <3; j++)
    //     {
    //         printf("%d ",trans[k][j]);
    //     }
    //     printf("\n");
    //     k++;
    // }
}