#include <stdio.h>
int main()
{
    int num1,num2;
    printf ("Enter two integer =");
    scanf ("%d %d",&num1,&num2);
    printf ("\nArithmetic operators :");
    printf ("\n %d +%d = %d ",num1,num2,num1+num2);
    printf ("\n %d -%d = %d ",num1,num2,num1-num2);
    printf ("\n %d *%d = %d ",num1,num2,num1*num2);
    if (num2 !=0)
    {
    printf ("\n %d /%d = %.2f ",num1,num2,(float)num1/num2);
    printf ("\n %d %% %d = %d ",num1,num2,num1%num2);
    }
    else
    {
        printf ("\ndivision and modulus is not allowed by zero.");
    }
    printf ("\n Relational operators:");
    printf ("\n %d ==%d = %d ",num1,num2,num1==num2);
    printf ("\n %d !=%d = %d ",num1,num2,num1!=num2);
    printf ("\n %d <%d = %d ",num1,num2,num1<num2);
    printf ("\n %d >%d = %d ",num1,num2,num1>num2);
    printf ("\n %d <=%d = %d ",num1,num2,num1<=num2);
    printf ("\n %d >=%d = %d ",num1,num2,num1>=num2);

    printf ("\nLogical operators :");
    printf ("\n (%d && %d) = %d ",num1,num2,num1&&num2);
    printf ("\n( %d || %d) = %d ",num1,num2,num1||num2);
    printf ("\n !%d =%d = %d ",num1, !num2);
    printf ("\n !%d =%d = %d ",num1, !num2);

    return 0;
}
