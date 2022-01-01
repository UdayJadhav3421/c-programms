#include <stdio.h>
#include <conio.h>
int main()
{
	int No = 0, temp = 0, Dig = 0, Rev = 0;

	printf("\n Enter a Numbers To Reverse It=");
	scanf("%d", &No);

	temp = No;

	while (temp > 0)
	{
		Dig = temp % 10;
		Rev = (Rev * 10) + Dig;
		temp = temp / 10;
	}
	printf("\n Reverse of Given Number %d is = %d", No, Rev);

	getch();
	return 0;
}