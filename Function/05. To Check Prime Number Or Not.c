#include<stdio.h>
#include<conio.h>

int check_Prime(int);

int main()
{
    int No = 0;

    printf("\n Enter Number =>");
    scanf("%d",&No);

    if(check_Prime(No))
    {
        printf("\n %d is Prime Number.",No);
    }
    else
    {
        printf("\n %d is Not Prime Number.",No);
    }
    getch();
    return 0;
}
int check_Prime(int Num)
{
    int i = 0;
    for(i = 0; i < Num/2; i++)
    {
        if(Num % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}
