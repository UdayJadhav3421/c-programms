#include<stdio.h>
#include<conio.h>

#define size 5
int main()
{
    int i=0,Neg_No=0,Bill[size]= {0};

    for(i=0; i<size; i++)
    {
        printf("\n Enter a Bill No%d=",(i+1));
        scanf("%d",&Bill[i]);
    }

    for(i=0; i<size; i++)
    {
        if(Bill[i]<0)
        {
            Neg_No++;
        }
    }
    printf("\n\n××××××××××××××$$$$$$×××××××××××××××××\n");
    printf("\n Negative Amount Count is = %d",Neg_No);
    printf("\n\n××××××××××××××$$$$$$×××××××××××××××××\n");
   
   getch();
     return 0;
}