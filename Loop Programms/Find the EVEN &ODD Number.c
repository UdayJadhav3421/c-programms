#include<stdio.h>
#include<conio.h>
int main()
{
    int No;
    printf("\n Enter a Number=");
    scanf("%d",&No);

    if(No%2==0)
    {
        printf("\n %d = The Number is EVEN",No);
    }
    else
    {
        printf("\n %d = The Number is ODD",No);
    }
    getch();
    return 0;
}
