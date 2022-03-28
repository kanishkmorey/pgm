#include <stdio.h>
#include <stdlib.h>


void multiplyMatrix(int result[][10])
{
	int first[10][10], second[10][10], r1, c1, r2, c2;
	printf("Enter rows and column for the first matrix: ");
	scanf("%d %d", &r1, &c1);
	printf("Enter rows and column for the second matrix: ");
	scanf("%d %d", &r2, &c2);

	// Taking input until
	// 1st matrix columns is not equal to 2nd matrix row
	while (c1 != r2 )
	{
		printf("Error! Enter rows and columns again.\n");
		printf("Enter rows and columns for the first matrix: ");
		scanf("%d%d", &r1, &c1);
		printf("Enter rows and columns for the second matrix: ");
		scanf("%d%d", &r2, &c2);	
	}

	printf("\nMatrix 1: ");
	for(int i = 0; i < r1; ++i)
	{
		for(int j = 0; j < c1; ++j)
		{
			printf("\nEnter element[%i][%i]: ", i + 1, j + 1);
			scanf("%i", &first[i][j]);
		}
	}

	printf("\nMatrix 2: ");
	for(int i = 0; i < r2; ++i)
	{
		for(int j = 0; j < c2; ++j)
		{
			printf("\nEnter element[%i][%i]: ", i + 1, j + 1);
			scanf("%i", &second[i][j]);
		}
	}

	for(int i = 0; i < r1; ++i)
	{
		for(int j = 0; j < c2; ++j)
		{
			result[i][j] = 0;
		}
	}

	for(int i = 0; i < r1; ++i)
	{
		for(int j = 0; j < c2; ++j)
		{
			for(int k = 0; k < c1; ++k)	
			{
				result[i][j] += first[i][k] * second[k][j];
			}
		}
	}
	printf("\033[0;34m");
	printf("\nThe Multiplication matrix is: \n");
	for(int i = 0; i < r1; ++i)
	{
		for(int j = 0; j < c2; ++j)
		{
			if(j == 0)
			{
				printf("\n");
			}
			printf(" %d ",result[i][j]);
		}
	}
	printf("\033[0m"); 
	printf("\n\n");
}
