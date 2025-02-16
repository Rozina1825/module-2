#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],result[100];
    printf ("enter first string = ");
    gets(str1);
    printf ("enter second string =");
    gets(str2);

    strcpy(result ,str1);
    strcat(result,str2);

    printf ("\n concatenated string : %s ",result);
    printf ("\n length of concatenated string : %lu",strlen (result));
}
