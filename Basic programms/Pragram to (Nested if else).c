#include<stdio.h>
#include<conio.h>
int main()

{
	float budget=0.0;
	printf("\n enter budget =");
	scanf("%f",&budget);
	
	if (budget>10000)
	{
		if(budget>20000)
		{
			if(budget>50000)
			{
				printf("\n A++");
			}
			else
			{
				printf("\n A");
			}
		}
		else
		{
			if(budget>15000)
			{
				printf("\n B");
			}
			else
			{
				printf("\n C");
			}
		}
	}
	
	else if(budget>5000)
	{
		if (budget>7500)
		{
			printf("\n D");
		}
		else
		{
			printf("\n E");
		}
	}
	else
	{
		printf("\n F");
	}
	return 0;	
}
