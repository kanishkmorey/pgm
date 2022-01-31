//C program to print the divisiors of a given number.

#include <stdio.h>

void main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n");
    for(i = num; i > 0; i--)
    {
        if(num % i == 0)
        {
            printf(" %d ",i);
        }
    }
    printf("\n\n");
}