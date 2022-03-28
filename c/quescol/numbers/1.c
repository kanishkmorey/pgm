#include<stdio.h>

void main()
{
    int num, rev = 0;
    printf("\nEnter an integer: ");
    scanf("%d", &num);

    while(num != 0)
    {
        rev = rev*10 + num % 10;
        num = num / 10;
    }
    printf("\n Reversed number is :%d\n",rev);
}