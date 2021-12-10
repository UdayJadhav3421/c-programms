
#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter The 2 Numbers =");
    scanf("%d%d",&No1,&No2);

    if(No1 == No2)
    {
        printf("\n Both Given Numbers Are Equal.\n");
    }
    else
    {
        (No1 > No2) ? printf("\n 1st Number is Max = %d\n",No1) : printf("\n 2nd Number is Max = %d\n",No2);
    }
    getch();
    return 0;
}
