#include <stdio.h>
#include <conio.h>
int main()
{
	char ch = '\0';
	for (ch = 'Y'; ch >= 'A'; ch--)
	{
		printf("\n %c", ch);
	}
	getch();
	return 0;
}
