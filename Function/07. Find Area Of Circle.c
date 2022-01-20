#include<stdio.h>
#include<conio.h>

float Area_Of_Circle(float R)
{
    float Area = 0.0;
    const float Pi = 3.14;

    Area = Pi * R * R;

    return Area;
}
int main()
{
    float Radius = 0.0;

    printf("\n Enter Radius of Circle => ");
    scanf("%f",&Radius);

    getch();

    printf("\n The Area Of Circle With Radius %0.2f => %0.2f\n",Radius,Area_Of_Circle(Radius));

    getch();
    return 0;
}
