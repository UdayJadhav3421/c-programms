#include<stdio.h>
#include<conio.h>
int main()
{
    char Dig=0;
    int No=0,dCount=0,temp=0;

    printf("\n Enter a Number=");
    scanf("%d",&No);
    
    printf("\n Enter Dugit To be Counted in Given Number=");
    Dig=getche();

    temp=No;

    while(temp>0)
    {
        if((temp%10) == (Dig-48))
        {
            dcount++;
        }
        temp/=10;
    }
    printf("\n Count of %d Digit in %d Number is = %d",(Dig-48),No,dcount);
    
    getch();
    return 0;
}