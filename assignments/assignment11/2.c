#include<stdio.h>
#include<math.h>

int main()
{
    double p,a,r,si,ci,amt,d1;int t;
    printf("Enter the principal value\n");
    scanf("%lf",&p);
    printf("Enter the rate of interest \n");
    scanf("%lf",&r);
    printf("Enter the time in year\n");
    scanf("%d",&t);
    si=(p*r*t)/100;
    d1=(1+r/100);
    amt=p*(pow(d1,t));
    ci=amt-p;
    printf("Simple interest is=%lf\n",si);
    printf("Compound Interest is=%lf\n",ci);
    return 0;
}