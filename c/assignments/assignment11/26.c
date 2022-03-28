//C program to apply various matrix operations.
//Program made by kanishk morey.


#include <stdio.h>
#include <stdlib.h>

//Global Variables
int multiply[50][50];

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



void addMatrix(int result[][10], int row, int column)
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
			result[i][j] = first[i][j] + second[i][j];
		}
	}
	printf("\033[0;34m");
	printf("\nThe addition matrix is: \n");
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

int main()
{	
	printf("\033[0;31m");
	printf("\n\n       WELCOME TO MATRIX OPERATION PROGRAM\n\n\n");
	printf("\033[0m"); 

	int choice, result[10][10],row,column,n = 0;
	do
	{
		printf("\nWhich operation you would like to apply:\n1.Addition\n2.Multiplication\n\n");
		scanf("%i", &choice);
		switch(choice)
		{
			case 1:
			{
				printf("\n");
				addMatrix(result, row, column);
				break;
			}
			case 2:
			{
				multiplyMatrix(result);
				break;
			}
			default:
			{
				printf("\nWrong Choice!!");
			}
		}
		printf("\nDo you want to run the program again?\n(enter 1 to continue,anything else to exit.)");
		scanf("%d", &n);
	}while(n == 1);	
	 return 0;
}
