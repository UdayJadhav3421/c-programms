#include<stdio.h>
#include<conio.h>

float Area_Of_Circle(float R)
{
    float Area = 0;
    const float Pi = 3.14;

    Area = Pi * R * R;

    return Area;
}
float Circumference_Of_Circle(float R)
{
    float Circum = 0;
    const float Pi = 3.14;

    Circum = 2 * Pi * R;

    return Circum;
}

int main()
{
    float Radius = 0;

    printf("\n Enter A Radius Of Circle => ");
    scanf("%f",&Radius);

    printf("\n Area Of Circle With Radius %0.2f => %0.2f\n",Radius,Area_Of_Circle(Radius));

    getch();

    printf("\n Enter A Circumference Of Circle => ");
    scanf("%f",&Radius);

    printf("\n Circumference Of Circle With Radius %0.2f => %0.2f\n",Radius,Circumference_Of_Circle(Radius));

    getch();
    return 0;

}
