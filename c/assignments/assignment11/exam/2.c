#include <stdio.h>

int main() 
{
    int num, num1, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    num1 = num;

    while (num1 != 0) 
    {
        remainder = num1 % 10;
        result += remainder * remainder * remainder;
        num1 /= 10;
    }

    if (result == num)
    {
        printf("%d is an Armstrong number.", num);
    }
    else
    {
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}