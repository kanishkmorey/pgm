#include<stdio.h>
void fibonacci(int n)
{
   int a=0, b=1, c;
   for(int i=0; i<n; i++)
   {
     printf("%d\t", a);
     c = a+b;
     a = b;
     b = c;
   }
}

int main()
{
   int term;
   printf("Enter the term: ");
   scanf("%d", &term);
   printf("The fibonacci series is: \n");
   fibonacci(term);
    return 0;
}