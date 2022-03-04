#include <stdio.h>

int main()
{
    int marks[5], sum = 0, perc = 0;
    for(int i = 0; i < 5; ++i)
    {
        printf("\nEnter marks of subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    perc = sum / 5;
    printf("\nSum is %d",sum);
    printf("\nPercentage is %d\n",perc);
    return 0;
}