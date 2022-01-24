#include <stdio.h>

float circle(int);

int main()
{
    float area;
    int radius = 1;
    area = circle(radius);
    printf("\n%f", area);
}

float circle(int r)
    {
        float a;
        a = 3.14 * r * r;
        return (a);
    }