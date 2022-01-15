
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 3


struct Stud
{
    int Roll_No;
    char Name[30];
    char City[20];
    long long int Mob_No;
    float Per;
};
int main()
{
    struct Stud Std[size];

    int i = 0,SRNo = 0;

    printf("\n Enter Accept Student Details =>\n");

    for(i = 0; i < size; i++)
    {
        printf("\n\n Enter Details of Student For Roll No %d => ",i+1);
        Std[size].Roll_No = i+1;

        fflush(stdin);
        printf("\n Enter Student Name=> ");
        gets(Std[i].Name);

        fflush(stdin);
        printf("\n City name =>");
        gets(Std[i].City);

        printf("\n Mobile No => ");
        scanf("%lld",&Std[i].Mob_No);

        printf("\n Percentage => ");
        scanf("%f",&Std[i].Per);
    }
    getch();
    system("cls");

            for(;;)
            {
                printf("\n Enter Roll No To Search Information......");
                printf("\n Note: Enter a Zero or -ve Value To Stop Searching => ");
                scanf("%d",&SRNo);

                if(SRNo <= 0)
                {
                    break;
                }
                for(i = 0; i < size; i++)
                {
                    if((i + 1) == SRNo);
                    {
                        printf("\n\n Enter %d Student Details of Roll No %d Are => ",SRNo,SRNo);

                        printf("\n Student Name => %s",Std[i].Name);
                        printf("\n City Name => %s",Std[i].City);
                        printf("\n Mobile No => %lld",Std[i].Mob_No);
                        printf("\n Percentage => %f",Std[i].Per);

                        break;
                    }
                }
                if(i == size)
                {
                    printf("\n Given Roll No Student is Not Found !!!");
                }
                printf("\n Enter Any Key to Search New Roll No = ");

                getch();
                system("cls");
            }
            printf("\n Thanks For Use This.....");

            getch();
            return 0;
}
