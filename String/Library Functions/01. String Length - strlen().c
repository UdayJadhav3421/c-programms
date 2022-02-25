#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[20] = {'U','D','A','Y','\0'};
    char City[20] = "Karad - 50";
    char Course[20] = "Bcs Comp Sci";
    char College[40];

    printf("\n Enter Your College Name => ");
    gets(College);

    getch();

    printf("\n Length Of College Name = %d",strlen(College));
    printf("\n Length Of City = %d",strlen(City));
    printf("\n Length Of Name Of Course = %d",strlen(Name));
    printf("\n Length Of Course = %d",strlen(Course));

    getch();
    return 0;
}
