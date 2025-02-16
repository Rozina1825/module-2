#include<stdio.h>
int main()
{
    char str[100];
    int i,vowel=0,consonant=0,digits=0,specialchar=0;
    printf("enter string =");
    gets(str);
    for (i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if (ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U' )
        {
            vowel++;
        }
        else if (ch >='a' && ch<='z' ||ch >='A' && ch<='Z')
        {
            consonant++;
        }
        else if (ch >='0' && ch<='9')
        {
            digits++;
        }
        else
        {
            specialchar++;
        }
    }
    printf("\n vowel is %d",vowel);
    printf("\n consonant is %d",consonant);
    printf("\n digits is %d",digits);
    printf ("\n special char is %d",specialchar );
    return 0;

}
