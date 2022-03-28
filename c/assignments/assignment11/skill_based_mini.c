#include<stdio.h>

int main()
{    
       int n;
       scanf("%d",&n);
       
       int A[n][n],j,k,sum=1,x;
       
       A[0][0]=1;
       
       for(j=1;j<n;j++)
       {
           sum=sum+j;
           A[0][j]=sum;
       }
       
       sum=2;
       
       for(j=1;j<n;j++)
       {
           A[j][0]=A[j-1][0]+sum;
           sum++;
       }
       
       for(j=1;j<n;j++)
       {
           sum=A[0][j]-A[0][j-1]+2;
           
           for(k=1;k<n;k++)
           {
               A[k][j]=A[k-1][j]+sum;
               sum++;
               x=k;
               if(sum>n)
               {
                   break;
               }
           }
           
           for(k=x+1;k<n;k++)
           {
               sum--;
               A[k][j]=A[k-1][j]+sum;
           }
       }
       
       sum=n;
       
       for(j=1;j<n;j++)
       {
           A[j][n-1]=A[j-1][n-1]+sum;
           sum--;
       }
       
       for(k=0;k<n;k++)
       {
           for(j=0;j<n;j++)
           {
               printf("%5d ",A[k][j]);
           }
           
           printf("\n");
       }  
    return 0;
}