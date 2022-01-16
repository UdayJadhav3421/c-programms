#include <stdio.h>
#include <conio.h>
int main()
{
	char Month = 0;

	printf("\n Enter a Month(1-12) = ");
	scanf("%d", &Month);

	switch (Month)
	{
	case 1:
		printf("\n Jan \n");
		break;

	case 2:
		printf("\n Feb \n");
		break;

	case 3:
		printf("\n March \n");
		break;

	case 4:
		printf("\n April \n");
		break;

	case 5:
		printf("\n May \n");
		break;

	case 6:
		printf("\n Jun \n");
		break;

	case 7:
		printf("\n July \n");
		break;

	case 8:
		printf("\n Aug \n");
		break;

	case 9:
		printf("\n Sep \n");
		break;

	case 10:
		printf("\n Oct \n");
		break;

	case 11:
		printf("\n Nov \n");
		break;

	case 12:
		printf("\n Dec \n");
		break;

	default:
		printf("\n INVALID MONTH VALUE.");
	}
	printf("\n Thanks for Input..");

	getch();
	return 0;
}
