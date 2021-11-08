
#include <stdio.h>
#include <conio.h>
int main()
{
	char Letter = 0;

	printf("\n Enter an Alphate = ");
	scanf("%c", &Letter);

	switch (Letter)
	{
	case 'a':
		printf("\n\t Welcome \n");
		break;

	case 'A':
		printf("\n\t WELCOME \n");
		break;

	case 'b':
		printf("\n\t Good Bye \n");
		break;

	case 'B':
		printf("\n\t GOOD BYE \n");
		break;

	case 'c':
		printf("\n\t Have a Nice Day  \n");
		break;

	case 'C':
		printf("\n\t HAVE A NICE DAY \n");
		break;

	case 'd':
		printf("\n\t Good Day \n");
		break;

	case 'D':
		printf("\n\t GOOD DAY \n");
		break;

	default:
		printf("\n No Messages For You!!!.");
	}
	printf("\n Thanks for Input..");

	getch();
	return 0;
}