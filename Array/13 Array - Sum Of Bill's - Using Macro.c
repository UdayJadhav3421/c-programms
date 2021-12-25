#include <stdio.h>
#include <conio.h>

#define size 5

int main()
{
	int i = 0, sum = 0, Bill[size] = {0};

	for (i = 0; i < size; i++)
	{
		printf(" Enter Bill No.%d=", (i + 1));
		scanf("%d", &Bill[i]);

		sum += Bill[i];
	}

	getch();

	printf("\n Bill Generated Today=>\n");

	for (i = 0; i < size; i++)
	{
		printf("\n Amount in Bill No.%d = %d", (i + 101), Bill[i]);
	}

	printf("\n\n\t============💸💸💸💵💸💸💸============\n");
	printf("\n\t Total Amount Received Today=%d", sum);
	printf("\n\n\t============💸💸💸💵💸💸💸============\n");

	getch();
	return 0;
}