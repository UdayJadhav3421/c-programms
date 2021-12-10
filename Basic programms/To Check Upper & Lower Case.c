#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '0';
    printf("\n Enter the Character =>");
    ch = getche();

   if(ch>='A'  && ch<='z');
   {
       printf("\n\t %c is the UPPER CASE",ch ,ch);
   }
   else
   {
       printf("\m\t is the LOWER CASE",CH,CH);
   }
   return 0;
}
