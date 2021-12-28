#include <stdio.h>
#include <conio.h>
int main()
{
	int N1, N2, temp = 0, Pow = 1;
	printf("\n Enter a Number1=");
	scanf("%d", &N1);

	printf("\n Enter a Number2=");
	scanf("%d", &N2);

	temp = N2;

	for (temp = N2; temp > 0; temp--)
	{
		Pow = Pow * N1;
	}
	printf("\n Power of %d Raise to %d  = %d", N1, N2, Pow);

	getch();
	return 0;
}