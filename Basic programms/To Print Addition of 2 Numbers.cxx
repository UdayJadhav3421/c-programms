#include <stdio.h>
#include <conio.h>
int main()
{
	int No1 = 0, No2 = 0, sum = 0;
	printf("\n Enter 2 integer Numbers=");
	scanf("%d%d", &No1, &No2);

	sum = No1 + No2;

	printf("\n\n Addition of %d+%d=%d", No1, No2, sum);

	getch();
	return 0;
}