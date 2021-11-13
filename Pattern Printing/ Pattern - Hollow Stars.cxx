#include <stdio.h>
#include <conio.h>
int main()
{
	int i, j, R, C;

	printf("\n\n Pattren Printing is Stars=>\n\n");
	for (R = 7, i = 1; i <= R; i++)
	{
		for (C = 5, j = 1; j <= C; j++)
		{
			if (i == 1 || i == R || j == 1 || j == C)
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