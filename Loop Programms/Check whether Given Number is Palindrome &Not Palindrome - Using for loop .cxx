#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,temp=0,Rev=0;

    printf("\n Enter a Number=");
    scanf("%d",&No);

    for(temp=No; temp>0; temp/=10)
    {
        Rev=(Rev*10)+(temp%10);
    }
    if(No == Rev)
    {
        printf("\n As, Given Number %d & Its Reverse %d are Equal",No,Rev);
        printf("\n So Given Number is Palindrome");
    }
    else
    {
        printf("\n As, Given Number %d & Its Reverse %d are Not Equal",No,Rev);
        printf("\n So Given Number is Not Palindrome");
    }
    getch();
    return 0;
}