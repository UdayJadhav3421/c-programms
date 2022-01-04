#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,dsum=0,temp=0;
    printf("\n Enter a Number=");
    scanf("%d",&No);
    
    temp=No;
    while(temp>0)
    {
        dsum=dsum+(temp%10);
        
        temp=temp/10;
    }
    printf("\n Digit in %d are = %d",No,dsum);
    
    getch();
    return 0;
}