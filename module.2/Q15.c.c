#include <stdio.h>
int main()
{
    int num;
    printf ("\nEnter any number = ");
    scanf ("%d",&num);
    if (num==0)
    printf ("\nThe value is equal to zero");
    else if (num>0)
    {
        printf ("\nThe number is positive ");
    }
    else
    {
        printf ("\nThe number is negative ");
    }
}
