#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;
    printf("\n Enter the 2 Number =");
    scanf("%d%d",&No1,&No2);

    if(No1 ==No2)
    {
        printf("\n Both Numbers are Equal");
    }
    (No1 > No2)? printf("\n %d is the Maximum Number",No1) : printf("\n %d is the Maximum Number",No2);

    return 0;
}
