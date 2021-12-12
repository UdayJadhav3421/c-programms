#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,sum=0,cnt=0;
    while(cnt<10)
    {
        printf("\n enter a number %d=",cnt ++);
        scanf("%d",&no);
        sum=sum+no;
    }
    printf("\n=========******=========");
    printf("\n sum of given number=%d",sum);
    printf("\n=========******=========");
    getch();
    return 0;
}