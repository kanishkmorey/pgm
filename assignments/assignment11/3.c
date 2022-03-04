#include<stdio.h>

int main()
{
    double area,r,cir;
    printf("Enter the radius of the circle\n");
    scanf("%lf",&r);
    area=3.14*r*r;
    cir=2*3.14*r;
    printf("Area of circle is=%lf\n",area);
    printf("Circumference of circle is=%lf\n",cir);
    return 0;
}
