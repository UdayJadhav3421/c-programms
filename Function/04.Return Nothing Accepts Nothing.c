#include<stdio.h>
#include<conio.h>

void Div();
int main()
{
    Div();
    getch();
    return 0;
}
void Div()
{
    int No1, No2;
    printf("\n Enter a Number = ");
    scanf("%d%d",&No1,&No2);

    printf("\n Division of 2 Given Numbers = %d",(No1/No2));
    return;
}
