#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stud
{
    int Roll_No;
    char Name[80];
    char City[40];
    long long int Mob_No;
    float Per;
};

int main()
{
    struct Stud Std[5];

         printf("\n Enter Student Details =>\n\n");
    int i = 0;
    for(i = 0; i < 5; i++)
    {
        printf("\n %d Student Details =>\n",i + 101);

        printf("\n Student Roll No => ");
        scanf("%d",&Std[i].Roll_No);

        fflush(stdin);
        printf("\n Enter Student Name => ");
        gets(Std[i].Name);

        fflush(stdin);
        printf("\n Enter City => ");
        gets(Std[i].City);

        printf("\n Enter Mobile No => ");
        scanf("%d",&Std[i].Mob_No);

        printf("\n Enter Percentage => ");
        scanf("%f",&Std[i].Per);

    }
       getch();
       system("cls");

       printf("\n\n============== Student Details ==============\n");

       for(i = 0;i <5; i++)
       {
           printf("\n %d Student Details =>\n",i+101);

           printf("\n ROll No => %d",Std[i].Roll_No);
           printf("\n Name => %s",Std[i].Name);
           printf("\n City => %s",Std[i].City);
           printf("\n Mobile No => %d",Std[i].Mob_No);
           printf("\n Percentage => %0.2f",Std[i].Per);

           printf("\n\n============== ************** ==============\n");
       }
       getch();
       return 0;
}
