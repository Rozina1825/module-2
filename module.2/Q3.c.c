#include <stdio.h>
int main()
{
    int a=10 ;
    const int b=20;
    float f= 98.56;
    char ch='cat';
    printf ("\nEnter any value");

    a=20;
    a=40;

    printf ("\nvalue of a=%d ",a);
    printf ("\nvalue of b=%d",b);
    printf ("\nvalue of f=%.2f",f);
    printf ("\nvalue of ch=%c",ch);
    return 0;
}
