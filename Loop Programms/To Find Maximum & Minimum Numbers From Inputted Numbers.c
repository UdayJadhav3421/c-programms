#include<stdio.h>
#include<conio.h>
int main()
{
    int  No = 0, Max = 0, Min = 0, Cnt = 0, Num = 0;

    printf("\n Enter The How Many Numbers You Have = ");
    scanf("%d",&Num);

    for(Cnt =1; Cnt <= Num; Cnt++)
    {
        printf("\n Enter a Number %d =",Cnt);
        scanf("%d",&No);

        if(Cnt == 1 || No > Max)
        {
            Max = No;
        }
        if(Cnt == 1 || No < Min)
        {
            Min = No;
        }
    }

    printf("\n Maximum From Given %d Numbers is = %d", Num, Max);
    printf("\n Minimum From Given %d Numbers is = %d", Num, Min);


    getch();
    return 0;

}
