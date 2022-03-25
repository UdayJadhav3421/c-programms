
#include <stdio.h>
#include <conio.h>

int main()
{
	char ch = 'A';

	printf("\n Value of character=%c.\n\n", ch);
	printf("\n Enter New character value for getch():");
	ch = getch();

	printf("\n\n New value of character=%c.\n", ch);
	printf("\n Enter New character value for getche():");
	ch = getche();

	printf("\n\n New value of character=%c.\n", ch);
	printf("\n Enter New character value for getchar():");
	ch = getchar();

	printf("\n\n New value of character=%c.\n", ch);

	printf("\n\n Thanks for using our App.\n press a key to exist");

	getchar();
	return 0;
}    
