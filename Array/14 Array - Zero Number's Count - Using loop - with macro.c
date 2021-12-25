#include <stdio.h>
#include <conio.h>

#define size 5
int main()
{
	int i = 0, Zero_No = 0, Bill[size] = {0};

	for (i = 0; i < size; i++)
	{
		printf("\n Enter a Bill No%d=", (i + 1));
		scanf("%d", &Bill[i]);
	}

	for (i = 0; i < size; i++)
	{
		if (0 == Bill[i])
		{
			Zero_No++;
		}
	}
	printf("\n\n××××××××××××××$$$$$$×××××××××××××××××\n");
	printf("\n Zero Amount Count is = %d", Zero_No);
	printf("\n\n××××××××××××××$$$$$$×××××××××××××××××\n");

	getch();
	return 0;
}