#include<stdio.h>
#include<conio.h>

void Swap(int*,int*);

int main()
{
    int No1,No2;

    printf("\n Enter Two Numbers =>");
    scanf("%d%d",&No1,&No2);

    printf("\n\n Before Swapping : \n\t 1st Number = %d  \n\t 2nd Number => %d",No1,No2);

    Swap(&No1,&No2);

    printf("\n\n After Swapping  : \n\t 1st Number = %d  \n\t 2nd Number => %d",No1,No2);

    getch();
    return 0;
}

void Swap(int *P1,int *P2)
{
    int Temp = 0;

    Temp = *P1;
    *P1 = *P2;
    *P2 = Temp;

}
