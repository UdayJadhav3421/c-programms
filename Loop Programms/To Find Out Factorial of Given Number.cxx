#include <stdio.h>
#include <conio.h>
int main()
{
	int No = 0, temp = 0, Fact = 1;
	printf("\n Enter a Number=");
	scanf("%d", &No);

	temp = No;

	while (temp > 1)
	{
		Fact = Fact * temp;
		temp--;
	}
	printf("\n Factorial of %d is = %d", No, Fact);

   getch();
	return 0;
}