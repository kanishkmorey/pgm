//C program to print the elements of an array using recursion.
//Kanishk Morey.

#include<stdio.h>

void printArray(int ar[10], int n, int j)
{
    printf("%d\n", ar[j]);
    j++;
    if(j < n)
    {
        printArray(ar, n, j);
    }
}

void main()
{
    int i = 0, a[5] = {1,5,3,7,8}, x = 5;
    printArray(a, x, i);
}
