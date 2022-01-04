#include <stdio.h>
#include <conio.h>
int main()
{
	int No = 0, dsum = 0, temp = 0;
	printf("\n Enter a Number=");
	scanf("%d", &No);

	for (dsum = 0, temp = No; temp > 0; dsum += (temp % 10), temp /= 10);

	printf("\n Digit in %d are = %d", No, dsum);

	getch();
	return 0;
}