#include <stdio.h>
#include <conio.h>
int main()
{
	int No = 0, dcnt = 0;
	printf("\n Enter a Number=");
	scanf("%d", &No);

	while (No > 0)
	{
		No = No / 10;
		dcnt++;
	}

	printf("\n Digit in Given Number are = %d", dcnt);

	getch();
	return 0;
}