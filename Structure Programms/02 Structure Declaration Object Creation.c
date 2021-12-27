#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    struct Stud
    {
        int Roll_No;
        char Name[40];
        long long int Mob_No;
        float Per;
    };

    struct Stud Std;

    Std.Roll_No = 21;
    strcpy(Std.Name,"Abhi Desai");
    Std.Mob_No = 8551504697;
    Std.Per = 75.86493;

    printf("\n\n Student Details =>\n");

    printf("\n 1st Student Roll No = %d",Std.Roll_No);
    printf("\n 1st Student Name = %s",Std.Name);
    printf("\n 1st Student Mobile No = %d",Std.Mob_No);
    printf("\n 1st Student Income = %0.2f",Std.Per);

    getch();
    return 0;
}
