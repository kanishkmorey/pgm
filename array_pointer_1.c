#include <stdio.h>

void main()
{
	int n, i;
	printf("Enter number of elements in the array: ");
	scanf("%i", &n);
	int a[n];


	for(i = 0; i < n; ++i)
	{
		printf("Address of a[%i]: %p\n", i, &a[i]);
	}
}