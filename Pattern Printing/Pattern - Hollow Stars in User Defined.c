#include <stdio.h>
#include <conio.h>
int main()
{
	int i, j, x;
	printf("\n Enter a Number=");
	scanf("%d", &x);

	printf("\n\n Pattren Printing is Stars=>\n\n");
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= x; j++)
		{
			if (i == 1 || i == x || j == 1 || j == x)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
	return 0;
}
