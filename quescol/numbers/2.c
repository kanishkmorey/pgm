#include <stdio.h>
#include <math.h>

void main()
{
    int num, i = 0, temp, n = 0, num2;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    num2 = num;
    while(num != 0)
    {
        num = num / 10;
        i++;
    }

    while(temp != 0)
    {
        n += pow(temp % 10, i);
        temp = temp / 10;
    }
    if(n == num2)
    {
        printf("\n%d is an armstrong number.\n",num2);
    }

    else
    {
        printf("\n%d is not an armstrong number.\n",num2);
    } 
}