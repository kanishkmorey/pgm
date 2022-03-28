#include<stdio.h>

int main()
{
    int a,b,temp=0;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    printf("The two number before swapping\n");
    printf("a=%d;b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("The two number after swapping\n");
    printf("a=%d;b=%d\n",a,b);
    return 0;
}

