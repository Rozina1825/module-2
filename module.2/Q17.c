#include<stdio.h>
int main()
{
    int num;
    printf ("enter any number=");
    scanf ("%d",&num);
    if (num % 3==0 && num %5 == 0){
        printf ("is multiple of 3 and 5\n",num);
    }
    else {
        printf ("is not multiple of 3 and 5\n",num);
    }
    return 0;
}
