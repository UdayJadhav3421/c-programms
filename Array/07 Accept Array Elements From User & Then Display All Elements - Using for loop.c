#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int i = 0, j = 0, values[5] = {};

	for (i = 0, j = 1; i < 5; i++, j++)
	{
		printf("Enter Element No.%d=", j);
		scanf("%d", &values[i]);
	}

	getch();
	system("cls");

	printf("\n\n Enter Element in Array are=>\n");

	for (i = 0,j=101; i < 5; i++,j++)
	{
		printf("\n Value of %d Element = %d", j, values[i]);
	}

	getch();
	return 0;
}