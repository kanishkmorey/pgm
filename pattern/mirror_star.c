#include <stdio.h>
void main()
{
    int i, j, r;
    printf("Enter the number of rows = ");
    scanf("%u",&r);
    for(i = 1; i <= r; ++i)
    {
        for(j = i; j < r; ++j)
        {
            printf(" ");
        }
        
        for(j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
}