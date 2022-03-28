#include<stdio.h>

void main()
{
    int number;

    printf("Enter the number of stars by side: \n");

    scanf("%d", &number);

    int i, j;

    for (i = 1; i <= number; i++)
    {
        for (j = 1; j <= number; j++)
        {
            if
            (
                i == 1 || i == number ||
                j == 1 || j == number ||
                i == j || j == (number - i + 1)
            ){
                printf("*");
            }else{
                printf(" ");
            }
        }

        printf("\n");
    }
}