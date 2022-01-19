#include <stdio.h>

void subMatrix(int result[][10], int row, int column)
{
	int first[10][10], second[10][10];
	printf("Enter rows and column for the matrices: ");
	scanf("%d %d", &row, &column);

	printf("\nMatrix 1: ");
	for(int i = 0; i < row; ++i)
	{
		for(int j = 0; j < column; ++j)
		{
			printf("\nEnter element[%i][%i]: ", i + 1, j + 1);
			scanf("%i", &first[i][j]);
		}
	}
	printf("\nMatrix 2: ");
	for(int i = 0; i < row; ++i)
	{
		for(int j = 0; j < column; ++j)
		{
			printf("\nEnter element[%i][%i]: ", i + 1, j + 1);
			scanf("%i", &second[i][j]);
		}
	}	

	for(int i = 0; i < row; ++i)
	{
		for(int j = 0; j < column; ++j)
		{
			result[i][j] = first[i][j] - second[i][j];
		}
	}
	printf("\033[0;34m");
	printf("\nThe substraction matrix is: \n");
	for(int i = 0; i < row; ++i)
	{
		for(int j = 0; j < column; ++j)
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