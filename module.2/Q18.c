#include<stdio.h>
int main()
{
    int marks;
    printf ("Enter the marks =");
    scanf ("%d",&marks);
    if (marks > 90){
        printf("grade A \n");
    }
    else if (marks >70 &&marks  >=90){
            printf ("grade B\n");
    }
    else if (marks > 50 && marks >=75){
        printf("grade C \n");
    }
    else if (marks < 50 ){
        printf ("grade D\n");
    }
  return 0;
}
