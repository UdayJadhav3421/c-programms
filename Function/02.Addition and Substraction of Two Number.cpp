using namespace std;

#include<iostream>
#include<conio.h>

int Add(int No1, int No2)
{
    int Ans = 0;

    Ans = No1 + No2;

    return Ans;
}
int Sub(int No1, int No2)
{
    int Ans = 0;

    Ans = No1 - No2;

    return Ans;
}
int main()
{
    int Num1,Num2,Res;

    printf("\n Enter 2 Number For Addition => ");
    scanf("%d%d",&Num1,&Num2);

    Res = Add(Num1,Num2);
    printf("\n Given Number Addition is => %d + %d = %d.\n\n",Num1,Num2,Res);

    getch();

    printf("\n Enter 2 Number For Substraction => ");
    scanf("%d%d",&Num1,&Num2);

    Res = Sub(Num1,Num2);
    printf("\n Given Number Substraction is => %d - %d = %d.\n",Num1,Num2,Res);

    getch();
    return 0;
}
