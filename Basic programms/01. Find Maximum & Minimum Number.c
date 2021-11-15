#include <stdio.h>
#include <conio.h>
int main()
{
	int num1 = 0, num2 = 0;
	printf("\n Enter The Numbers=>");
	scanf("%d%d", &num1, &num2);

	if (num1 > num2)
	{
		printf("\n Maximum Number is %d\n Minimum Number is %d", num1 ,num2);
	}
	else
	{
		printf("\n Maximum Number is %d\n Minimum Number is %d", num2, num1);
	}
	return 0;
}
