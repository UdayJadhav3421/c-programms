#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name1[20] = "";
    char Name2[20] = "";

    int Cnt = 0;

    printf("\n Enter Your First String => ");
    gets(Name1);

    printf("\n Enter Your Second String => ");
    gets(Name2);

    strcmp(Name1,Name2);

    if(Cnt == 0)
    {
        printf("\n Letters in Given String Are Equal.");
    }
    else if(Cnt > 0)
    {
        printf("\n First String is Alphabetically Greater Than Second String.");
    }
    else
    {
        printf("\n First String is Alphabetically Less Than Second String.");
    }

    getch();
    return 0;
}
