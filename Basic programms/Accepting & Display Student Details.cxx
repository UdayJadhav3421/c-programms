#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int Roll_No = 0;
	char Name[80] = "";
	float Per = 0.0;
	char Course[40] = "";

	printf("\n Accepting Student Details=");

	printf("\n\n Enter Student Roll No=");
	scanf("%d", &Roll_No);

	fflush(stdin);

	printf("\n Enter Student Name=");
	gets(Name);

	printf("\n Enter Student Percentage=");
	scanf("%f", &Per);

	fflush(stdin);

	printf("\n Enter Student Course Name=");
	gets(Course);

	printf("\n\n================********===============");

	printf("\n Displaying Given Student Details=>\n");
	printf("\n Roll No =%d", Roll_No);
	printf("\n Name =%s", Name);
	printf("\n Percentage =%0.2f", Per);
	printf("\n Course Name =%s", Course);

	printf("\n\n================********===============");
	return 0;
}