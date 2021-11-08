#include<stdio.h>
#include<conio.h>
int main()
{
    char Letter=0;

    printf("\n Enter an Alphabet = ");
    scanf("%c",&Letter);

    switch(Letter)
    {
    case 'a':
    case 'A':
        printf("\n\t _WELCOME_ \n");
        break;

    case 'b':
    case 'B':
    case 'c':
    case 'C':
        printf("\n\t _GOOD BYE_\n");
        break;

    case 'z':
    case 'Z':
    case 'h':
    case 'H':
    case 'k':
        printf("\n\t _HAVE A NICE DAY_\n");
        break;

    case 'f':
    case 'F':
    case 's':
    case 'u':
    case 'U':
        printf("\n\t _Good Day_ \n");
        break;

    default:
        printf("\n No Message For You!!.");
        break;
    }
    printf("\n Thanks for Input..");
    
    getch();
    return 0;
}