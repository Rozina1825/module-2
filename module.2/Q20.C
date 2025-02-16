#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a =");
    scanf ("%d",&a);
    printf ("\nenter the value of b =");
    scanf ("%d",&b);
    if (a<b)
    {
        printf("\n%d is smallest number",a,b);
    }
    else
    {
        printf ("\n%d is not smallest number",a,b);
    }
    return 0;
}
