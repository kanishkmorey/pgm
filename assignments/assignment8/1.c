//C program to print first 50 natural numbers using recursion
//Kanishk Morey

#include<stdio.h>
int n = 1;
void printFifty()
{
    printf("%d ", n);
    n++;
    if(n <= 50)
    {
        printFifty();
    }
}

void main()
{
    printFifty();
}