#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, Sum = 0;

    printf("\n Enter 2 Numbers = ");
    scanf("%d%d",&No1,&No2);

    Sum = Add(No1,No2);

    printf("\n Addition of Given Number = %d",Sum);
    getch();
    return 0;
}
int Add(int No1,int No2)
{
    int Sum = 0;
    Sum = No1 + No2;
    return Sum;
}
