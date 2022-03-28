#include<stdio.h>

int main()
{
    double f,c;
    printf("Enter the temperature in centigrade\n");
    scanf("%lf",&c);
    f=((c*9)/5)+32;
    printf("Temperature in fahrenhiet is=%lf\n",f);
    return 0;

}

