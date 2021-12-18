#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int Values[5]={};
    
    printf("Enter Element No.1=");
    scanf("%d",&Values[0]);
    
    printf("Enter Element No.2=");
    scanf("%d",&Values[1]);
    
    printf("Enter Element No.3=");
    scanf("%d",&Values[2]);
    
    printf("Enter Element No.4=");
    scanf("%d",&Values[3]);
    
    printf("Enter Element No.5=");
    scanf("%d",&Values[4]);
    
    getch();
    system("cls");
    
    printf("\n\n Element in Array are=>\n");
    
    printf("\n Value of 1st Element = %d",Values[0]);
    printf("\n Value of 2nd Element = %d",Values[1]);
    printf("\n Value of 3rd Element = %d",Values[2]);
    printf("\n Value of 4th Element = %d",Values[3]);
    printf("\n Value of 5th Element = %d",Values[4]);
    
    getch();
    return 0;
}