#include<stdio.h>
#include<conio.h>

int main()
{
    struct Stud
    {
        int Roll_No;
        char Name[50];
        char city[40];
        long long int Mob_No;
        int Phy;
        int Chem;
        int Bio;
    };

    int Num = 0;

    struct Stud Std1;

    printf("\n Size of Integer = %d",sizeof(int));
    printf("\n Size of Integer Variable  = %d",sizeof(Num));
    printf("\n Size of Student Structure = %d",sizeof(struct Stud));
    printf("\n Size of Student Structure Object = %d",sizeof(Std1));

    getch();
    return 0;

}
