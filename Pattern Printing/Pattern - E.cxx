#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x;
    printf("\n Enter a Number=");
    scanf("%d",&x);

    printf("\n\n Pattern Printing is=>\n\n");

    for(i=1; i<=x; i++)
    {
        for(j=1; j<=x; j++)
        {
            if(j==1||i==1||i==x||i==(x/2)+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}