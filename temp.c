#include <stdio.h>
void array(int c[]);
int main()
{
    int a[6] = {2, 3, 4, 5, 6, 7};
    array(a);
    return 0;
}
void array(int c[])
{
    for (int i = 0; i <= 5; i++)
    {
        printf(" %d", c[i]);
        
    }
}