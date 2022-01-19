
#include<stdio.h>
#include<conio.h>
#include<string.h>

int GetLength(char*);

int main()
{
    char Str[25] = "";

    printf("\n Enter A String To Get Length => ");
    gets(Str);

    printf("\n Given String Length is = %d",GetLength(Str));

    getch();
    return 0;
}

int GetLength(char *Str)
{
    int i = 0;
    while(Str[i] > '\0')
    {
        i++;
    }
    return i;
}
