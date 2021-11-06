#include <stdio.h>
#include <conio.h>
int main()
{
	int Month_Num = 0;
	printf("\n Enter a Month Numbers(1-12)=");
	scanf("%d", &Month_Num);

	if (Month_Num == 1)
	{
		printf("\n Jan");
	}
	else if (Month_Num == 2)
	{
		printf("\n Feb");
	}
	else if (Month_Num == 3)
	{
		printf("\n March");
	}
	else if (Month_Num == 4)
	{
		printf("\n April");
	}
	else if (Month_Num == 5)
	{
		printf("\n May");
	}
	else if (Month_Num == 6)
	{
		printf("\n June");
	}
	else if (Month_Num == 7)
	{
		printf("\n Jule");
	}
	else if (Month_Num == 8)
	{
		printf("\n Aug");
	}
	else if (Month_Num == 9)
	{
		printf("\n Sep");
	}
	else if (Month_Num == 10)
	{
		printf("\n Oct");
	}
	else if (Month_Num == 11)
	{
		printf("\n Nov");
	}
	else if (Month_Num == 12)
	{
		printf("\n Dec");
	}
	else
	{
		printf("\n Invalid Number..");
	}
	getch();
	
	printf("\n Thanks for using our service! ");

	getch();
	return 0;
}