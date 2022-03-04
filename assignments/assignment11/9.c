#include<stdio.h>
int main()
{
    int yr;
    printf("Enter year that you want to check\n");
    scanf("%d",&yr);
    if(yr%4==0)
    printf("%d is a leap year.\n",yr);
    else
    printf("%d is not a leap year.\n",yr);
    return 0;
}

