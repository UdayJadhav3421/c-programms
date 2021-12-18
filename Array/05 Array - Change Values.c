#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int Values[5]={5,25,45,65,15};
    
    printf("\n Value of 1st Element = %d",Values[0]);
    printf("\n Value of 2nd Element = %d",Values[1]);
    printf("\n Value of 3rd Element = %d",Values[2]);
    printf("\n Value of 4th Element = %d",Values[3]);
    printf("\n Value of 5th Element = %d",Values[4]);
    
    getch();
    system("cls");
    
    Values[2]=100;
    Values[4]=30;
    Values[0]=12;
    
    printf("\n\n New Value=>\n");
    
    printf("\n Value of 1st Element = %d", Values[0]);
    printf("\n Value of 2nd Element = %d", Values[1]);
    printf("\n Value of 3rd Element = %d", Values[2]);
    printf("\n Value of 4th Element = %d", Values[3]);
    printf("\n Value of 5th Element = %d", Values[4]);
    
    getch();
    return 0;
}