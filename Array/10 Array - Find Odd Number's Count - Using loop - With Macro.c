#include <stdio.h>
#include <conio.h>

#define size 5

int main()
{
	int i = 0, Odd_No = 0, Bill[size] = {0};

	for (i = 0; i < size; i++)
	{
		printf("\n Enter Bill No %d =", i + 1);
		scanf("%d", &Bill[i]);
	}
	for (i=0;i<size;i++)
	{
		if (Bill[i]%2 == 1)
			{
				Odd_No++;
			}
	}

	getch();

	printf("\n \n Bills Generated Today=>\n");

	for (i = 0; i < size; i++)
	{
		printf("\n Amount of Bill No %d =%d", i + 1, Bill[i]);
	}

	printf("\n\n ================================\n");

	printf("\n Odd Amount Recived Today = %d", Odd_No);
	printf("\n\n ================================\n");

	getch();
	return 0;
}