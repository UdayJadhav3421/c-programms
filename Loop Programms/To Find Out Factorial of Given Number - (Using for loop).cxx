#include <stdio.h>
#include <conio.h>
int main()
{
	int No = 0, temp = 0, Fact = 1;
	printf("\n Enter a Number=");
	scanf("%d", &No);

	for (temp = No, Fact = 1; temp > 0; temp--)
	{
		Fact *= temp;
	}
	printf("\n Factorial of %d is = %d", No, Fact);

	getch();
	return 0;
}