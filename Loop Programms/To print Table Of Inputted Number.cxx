#include <stdio.h>
#include <conio.h>
int main()
{
	int Row = 0, Col = 0, SP = 0, EP = 0;
	printf("\n Enter a Start Point=>");
	scanf("%d", &SP);

	printf("\n Enter a End Point=>");
	scanf("%d", &EP);
    
    printf("\n Enter a TABLE=>\n");
    
	printf("\n==========***$***=========\n\n");
	for (Row = 1; Row <= 10; Row++)
	{
		if (SP < EP)
		{
			for (Col = SP; Col <= EP; Col++)
			{
				printf("%4d", (Row * Col));
			}
		}
		else
		{
			for (Col = SP; Col >= EP; Col--)
			{
				printf("%4d", (Row * Col));
			}
		}
		printf("\n");
	}
	printf("\n==========***$***=========\n");
	return 0;
}