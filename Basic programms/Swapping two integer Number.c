#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0;
    printf("\n Enter 2 Numbers=>");
    scanf("%d%d",&No1,&No2);
    getch();

    printf("\n\n Numbers Before Swap=>");
    printf("\n 1st Number = %d.",No1);
    printf("\n 2nd  Number = %d.",No2);

    No1=No1+No2;
    No2=No1-No2;
    No1=No1-No2;

    printf("\n\n Numbers After Swap=>");
    printf("\n 1st Number = %d.",No1);
    printf("\n 2nd Number = %d.",No2);
    return 0;
}
