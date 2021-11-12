#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n Enter a Number=>");
    scanf("%d",&num);

    if(num>1)
    {
        printf("\n %d is Positive Number.\n",num);
    }
    else
    {
        printf("\n %d is Negative Number.\n",num);
    }
    getch();
    return 0;
}