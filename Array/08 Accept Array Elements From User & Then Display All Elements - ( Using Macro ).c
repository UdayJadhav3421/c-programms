#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5
int main()
{
    int i=0,Bill[size]={0};
    
    for(i=0;i<size;i++)
    {
    printf("\n Enter Bill No.%d=",(i+1));
    scanf("%d",&Bill[i]);
    }
    
    getch();
    system("cls");
    
    printf("\n\n Element in Array are=>\n");
    
    for(i=0;i<size;i++)
    {
    printf("\n Amount in Bill No.%d = %d",(i+101),Bill[i]);
    }
    getch();
    return 0;
}