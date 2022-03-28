#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a%2==0)
    printf("It is an even number=%d\n",a);
    else
    printf("It is an odd number=%d\n",a);
    return 0;
}

