#include <stdio.h>
#define PI 3.14

void func_ap(float r, float *areaA, float *cirA)
{
    *areaA = PI * r * r;
    *cirA = 2 * PI * r;
}

void main()
{
    float r, area, cir;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    func_ap(r, &area, &cir);
    printf("\nArea : %.2f", area);
    printf("\nCircumference: %f.2\n", cir);
}