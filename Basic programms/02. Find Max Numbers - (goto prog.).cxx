#include <stdio.h>
#include <conio.h>
int main()
{
	int No1 = 0, No2 = 0;
	up:
	printf("\n Enter the 2 Numbers=");
	scanf("%d%d", &No1, &No2);

	if (No1 == No2)
	{
		printf("\n Both Given Numbers Are Equal.\n");
	goto up;
	}
    
	if (No1 > No2)
	{
		printf("\n 1st Number is  Maximum = %d\n", No1);
	}
	else
	{
		printf("\n 2nd Number is Maximum = %d\n", No2);
	}
	getch();
	return 0;
}