#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,dcnt=0,temp=0;
    printf("\n Enter a Number=");
    scanf("%d",&No);
    
    temp=No;
    while(temp>0)
    {
        temp=temp/10;
        dcnt++;
    }
    printf("\n Digit in %d are = %d",No,dcnt);
    
    getch();
    return 0;
}