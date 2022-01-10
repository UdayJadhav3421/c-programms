#include<stdio.h>
#include<conio.h>

int main()
{
  printf("\n Multiplication of given number = %d",Mult());
  getch();
  return 0 ;
}
int Mult()
{
    int No1 = 0, No2 = 0;
    printf("\n Enter a Number = ");
    scanf("%d%d",&No1,&No2);

    return(No1*No2);
}
