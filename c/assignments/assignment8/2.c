//C program to add numbers from 1 to n using recursion
//Kanishk Morey

#include <stdio.h>
int sum = 0,i = 1;
void add(int num)
{
    sum = sum + i;
    i++;
    if(i <= num)
    {
        add(num);
    }
}
void main()
{
    int n;
    printf("Enter the number upto which you want the sum of numbers: ");
    scanf("%d",&n);
    add(n);
    printf("\n%d\n", sum);
}