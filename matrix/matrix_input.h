#include <stdio.h>	
#include <stdlib.h>

void inputMatrix(int matrix[][10])
{	
	int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
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

	for(int i = 0; i < row; ++i)
	{
		for(int j = 0; j < column; ++j)
		{
			printf("\nEnter element[%i][%i]: ", i + 1, j + 1);
			scanf("%i", &matrix[i][j]);
		}
	}
}