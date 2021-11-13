#include <stdio.h>
#include <conio.h>
int main()
{
	int i, j, x;
	printf(" \n Enter a Number=");
	scanf("%d", &x);

	printf("\n\n Pattren Printting is Stars=>\n\n");
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= x; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}