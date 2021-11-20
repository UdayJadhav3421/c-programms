#include <stdio.h>
#include <conio.h>
int main()
{
	int i, j, R, C;
	printf("\n Ente Row Size=");
	scanf("%d", &R);

	printf("\n Enter Column Size=");
	scanf("%d", &C);

	printf("\n\n Pattren Printing is Stars=>\n\n");
	for (i = 1; i <= R; i++)
	{
		for (j = 1; j <= C; j++)
		{
			if (i == 1 || i == R || i + j == C + 1)
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