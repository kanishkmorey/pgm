//13
#include<stdio.h>

int main()
{
    int n,i,pr=1;
    printf("Enter the number of which you want to find factorial.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        pr=pr*i;
    }
    printf("Factorial of %d is =%d\n",n,pr);
    return 0;
}

