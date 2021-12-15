#include <stdio.h>
#include <conio.h>
int main()
{
	int no = 0, num = 0, sum = 0, cnt = 0;

	printf("\n Enter Inputted Numbers to Calculate there Sum=");
	scanf("%d", &num);

	for (cnt = 0; cnt < num; cnt++)
	{
		printf("\n enter a number %d=",cnt);
		scanf("%d", &no);
		sum = sum + no;
	}
	printf("\n=========******=========");
	printf("\n sum of given number=%d", sum);
	printf("\n=========******=========");
	getch();
	return 0;
}