#include <stdio.h>
 
void print_square(int n)
{
    int i, j;
     
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i==1 || i==n || j==1 || j==n)
            {
                printf("*");
            }                      
            else 
            {
                printf(" ");       
            }                   
        }
        printf("\n");
    }
 
}
 
int main()
{
    int rows;
    printf("Enter the number of rows: ");
	scanf("%d",&rows);
    print_square(rows);
    return 0;
}