#include <stdio.h>

void swapV(int x, int y)
{ 
    x = x + y;
    y = x - y;
    x = x - y; 
}

void main()
{
    int a, b;
    printf("\n value of a before swaping: ");
    scanf("%d", &a);
    printf("\n value of b before swaping: ");
    scanf("%d", &b);
    
    swapV(a, b);
    
    printf("\n value of a after swaping %p", &a);
    printf("\n value of b after swaping %p\n", &b);
}

