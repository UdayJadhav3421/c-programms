#include <stdio.h>
#include <conio.h>
int main()
{
	int num = 0, cnt = 10;
	printf("\n Enter a Number To Print its Table=");
	scanf("%d", &num);

	printf("\n Table of %d is=>", num);

	while (cnt >= 1)
	{
		printf("\n %d*%d=%d", num, cnt, (num * cnt));
		cnt--;
	}
	getch();
	return 0;
}

//Same prog.but output changes=>
//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//    int num=0,cnt=1;
//    printf("\n Enter a Number To Print its Table=");
//    scanf("%d",&num);

//  printf("\n Table of %d is=>",num);

//    while(cnt<=10)
//   {
//      printf("\n %d*%d=%d",num,cnt,(num*cnt));
//       cnt++;
//    }
//  getch();
//   return 0;
//}
//*