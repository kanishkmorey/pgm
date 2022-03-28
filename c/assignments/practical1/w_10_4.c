#include<stdio.h>

void main()
{    
	int i,j,n,k;
	printf("Enter the number of rows for Rhombus: ");
	scanf("%d",&n);
		for(i=n;i>=1;i--)
        {
		    for(j=1;j<=n-i;j++)
            {
                printf(" ");
		    }
		    for(k=1;k<=n;k++)
            {
		        printf("*");
		    }
		    printf("\n");
	    }
} 