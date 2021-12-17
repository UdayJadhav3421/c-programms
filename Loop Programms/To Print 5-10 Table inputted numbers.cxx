#include <stdio.h>
#include <conio.h>
int main()
{
	int Row = 0, Col = 0;
	printf("\n Enter a Tables 5-10\n");

	printf("\n\n=========***$***=========\n\n");

	for (Row = 1; Row <= 10; Row++)
	{
		for (Col = 5; Col <= 10; Col++)
		{
			printf("%4d", (Row * Col));
		}
		printf("\n");
	}
	printf("\n=========***$***=========\n");
	return 0;
}