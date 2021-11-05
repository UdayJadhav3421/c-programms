#include <stdio.h>
#include <conio.h>
int main()
{
	int cnt = 0;
	printf("\n\n\t ASCII TABLE=>\n");

	while (cnt < 128)
	{
		printf("\n %d = %c", cnt, cnt);
		cnt++;
	}
	getch();
	return 0;
}