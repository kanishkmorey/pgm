#include <stdio.h>

void main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\nx = %d\ny = %d\n", x, y); 
}