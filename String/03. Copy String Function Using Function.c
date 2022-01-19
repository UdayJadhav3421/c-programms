#include<stdio.h>
#include<conio.h>
#include<string.h>

void CpyString(char*,char*);

int main()
{
    char Str [30] = "", CStr[30] = "";

    printf("\n Enter A String => ");
    gets(Str);

    CpyString(Str, CStr);

    printf("\n Main String => %s.",Str);
    printf("\n Copy String => %s.",CStr);

}

void CpyString(char *str, char *cstr)
{
    int i = 0;

    while(str[i] > 0)
    {
        cstr[i] = str[i];
        i++;
    }
}
