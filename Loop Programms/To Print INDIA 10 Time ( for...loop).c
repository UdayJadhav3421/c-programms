#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, cnt = 1;
    printf("\n Enter a Number =>");
    scanf("%d",&No);
    printf("\n\n Printing Message =>");

    for(cnt = 0; cnt < No; cnt++)
    {
        printf("\n\t\t I Love Karad");
    }
    getch();
    return 0;
}
