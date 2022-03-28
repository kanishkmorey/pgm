//Program to sort an array in ascending order.
#include <stdio.h>

void main()
{
    int n, i, j, x;
    printf("Enter the elements you want in the array: ");
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter element %i: ", i + 1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                x = a[j];
                a[j] = a[i];
                a[i] = x;
            }
        }
    }
    for(i = n - 1; i >= 0; i--)
    {
        printf(" %i ", a[i]);
    }
}