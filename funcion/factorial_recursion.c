#include <stdio.h>

int factorial(int num);

void main()
{
	int n, a;
	printf("\n\nEnter the number to find it's factorial: ");
	scanf("%i", &n);
	a =  factorial(n);
	printf("\nFactorial of %i is %i\n\n",n, a);
}

int factorial(int num)
{
	if(num == 0)
	{
		return 1;
	}
	else
	{
		return(num * factorial(num - 1));
	}
}
