#include <stdio.h>
#include <conio.h>
int main()
{
	int No = 0, Dig = 0, Even_Count = 0, temp = 0;
	printf("\n Enter a Number=");
	scanf("%d", &No);

	temp = No;
	
	while (temp > 0)
	{
		Dig = temp % 10;
		
		if (Dig % 2 == 0)
		{
			Even_Count++;
		}
		temp = temp / 10;
	}
	printf("\n Even Digit in %d are = %d", No, Even_Count);

	getch();
	return 0;
}