#include <stdio.h>
#include <conio.h>
int main()
{
	int No = 0, temp = 0, Zero_Count = 0;

	printf("\n Enter Number To Find no. of Digits=");
	scanf("%d", &No);

	temp = No;

	while (temp > 0)
	{
		if ((temp % 10) == 0)
		{
			Zero_Count++;
		}
		temp /= 10;
	}
	printf("\n Count of Zero Digits in %d is = %d", No, Zero_Count);

	getch();
	return 0;
}