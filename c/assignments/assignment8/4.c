//C program to count the digits of a number using recursion.
//Kanishk Morey
#include <stdio.h>

int j = 0;

void digitCount(int num)
{
    if(num != 0)
    {
        j++;
        num = num / 10;
        digitCount(num);
    }
}
void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    digitCount(n);
    printf("\nNumber of digits of the entered number: %d\n", j);
}
