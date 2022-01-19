#include<stdio.h>
#include<conio.h>

void RevString(char*,char*);

int main()
{
    char Str[35] = "",RevStr[35] = "";

    printf("\n Enter a String => ");
    gets(Str);

    RevString(Str,RevStr);

    printf("n Main String => %s",Str);
    printf("\n Reverse String => %s",RevStr);

    getch();
    return 0;
}
void RevString(char *Str,char *RStr)
{
    int i = 0, j = 0;

    While(Str[i] > '\0')
    {
        i++;
    }
    i = i - 1;

    While(i >= 0)
    {
        RStr[j] = Str[i];
        i++;
        j++;
    }
}
