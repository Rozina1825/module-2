#include<stdio.h>
int main()
{
    int matrix1[3][3],matrix2[3][3],result[3][3];
    int i,j,k;
    printf ("enter the element first 3x3 matrix :\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf ("element [%d][%d] :",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

     printf ("enter the element second 3x3 matrix :\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf ("element [%d][%d] :",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
    result[i][j]=0;
    for (k=0;k<3;k++){
        result[i][j] += matrix1[i][k]*matrix2[k][j];
        }
    }
}
    printf ("resultant 3x3 matrix after multiplication");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
                printf ("%d",result[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
