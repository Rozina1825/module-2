#include<stdio.h>
int main()
{
    int matrix1[2][2], matrix2[2][2],result[2][2];
    int i,j;
    printf ("enter the element of first 2x2 matrix :\n");
    for(i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf ("element [%d][%d] :", i,j);
            scanf ("%d",&matrix1[i][j]);
        }
    }

printf ("enter the element of second 2x2 matrix :\n");
    for(i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf ("element [%d][%d] :", i,j);
            scanf ("%d",&matrix2[i][j]);
        }
    }

    for (i=0;i<2;i++){
        for (j=0;j<2;i++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf ("Resultant 2x2 matrix after addition :\n ");
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf ("%d",result[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
