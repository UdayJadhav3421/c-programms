#include<stdio.h>
#include<conio.h>
int main()
{
    int values[5]= {10,55,35,99,12},i =0;

    for(i=0; i<5; i++)
    {
        printf("\n Value of %d Element = %d",i+1, values[i]);
    }
    getch();
    return 0;
}