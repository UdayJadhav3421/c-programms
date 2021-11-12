#include <stdio.h>
#include <conio.h>
int main()
{
	int No = 0;
	printf("\n Enter a Number=>");
	scanf("%d", &No);
	if ((No % 5 == 0) && (No % 7 == 0))
	{
		printf("\n %d is divisible by both 5&7", No);
	}
	else if (No % 5 == 0)
	{
		printf("\n %d is only divisible by 5 not by 7", No);
	}
	else if (No % 7 == 0)
	{
		printf("\n %d is only divisible by 7 not by 5", No);
	}
	else
	{
		printf("\n %d is Not divisible by both 5&7", No);
	}
	getch();
	return 0;
}