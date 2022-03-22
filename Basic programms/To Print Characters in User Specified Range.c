#include <stdio.h>
#include <conio.h>

int main()
{
	char SP = '\0', EP = '\0';

	printf("\n Enter a Range to Print Characters=>\n");

	printf("\n\t Start Point=");
	SP = getche();

	printf("\n\t End Point=");
	EP = getche();

	if (SP > EP)
	{
		while (SP >= EP)
		{
			printf("\n %c", SP);
			SP--;
		}
	}
	else
	{
		while (SP <= EP)
		{
			printf("\n %c", SP);
			SP++;
		}
	}
	
	getch();
	return 0;
}
