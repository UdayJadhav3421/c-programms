#include<stdio.h>
#include<conio.h>

void Sub(int,int);

int main()
{
    int No1 = 0, No2 = 0, Sum = 0;

    printf("\n Enter 2 Numbers = ");
    scanf("%d%d",&No1,&No2);

    Sub(No1,No2);
    getch();
    return 0;
}
void Sub(int N1,int N2)
{
    int Sum = 0;
    Sum = N1 - N2;
    printf("\n Substraction of Given Number = %d",Sum);

    return ;
}
