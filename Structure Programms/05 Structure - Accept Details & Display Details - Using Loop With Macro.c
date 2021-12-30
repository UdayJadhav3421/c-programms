#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 3

struct Stud
{
    int Roll_No;
    char Name[80];
    char City[40];
    float Per;

};
int main()
{
    struct Stud Std[size];

    printf("\n Accepting Student Details =>\n\n");

    int i = 0;
    for(i = 0; i < size; i++)
    {
         printf("\n %d Student Details => ",i+1);

         printf("\n Enter Roll No => ");
         scanf("%d",&Std[i].Roll_No);

         fflush(stdin);
         printf("\n Name => ");
         gets(Std[i].Name);

         fflush(stdin);
         printf("\n City Name => ");
         gets(Std[i].City);

         printf("\n Percentage => ");
         scanf("%f",&Std[i].Per);
    }
     getch();
     system("cls");

    printf("\n\n============= Display Student Details =============\n\n");

    for(i = 0; i < size; i++)
    {
        printf("\n %d Student Details =>\n",i+1);

        printf("\n Roll No    => %d",Std[i].Roll_No);
        printf("\n Name       => %s",Std[i].Name);
        printf("\n City Name  => %s",Std[i].City);
        printf("\n Percentage => %0.2f",Std[i].Per);

        printf("\n\n============= ******************** =============\n\n");
        getch();
    }

    return 0;
}
