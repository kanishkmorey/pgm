#include <stdio.h>

float findAverage();

void main()
{
    int n;
    float avg, a[n];
    printf("\nHow many numbers' average would you like to find: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter number %d: ",i + 1);
        scanf("%f",&a[i]);
    }
    avg = findAverage(a[100],n);
    printf("\nThe average of the entered numbers is: %f", avg);
    
}

float findAverage(float a[100], int n)
{
    int sum = 0;
    float avg;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    avg = sum / n;
    return(avg);
}
