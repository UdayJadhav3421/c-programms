#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n Enter a character=");
    ch= getche();
    if(ch>='A' && ch<='Z')
    {
        printf("\n %c is UPPER CASE Alphabet",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\n %c is LOWER CASE Alphabet",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("\n %c is Digit",ch);
    }
    else
    {
        printf("\n %c is Special Symbol",ch);
    }
    getch();
    return 0;
}