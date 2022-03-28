#include <stdio.h>
int main() 
{
	int n,n1,i,j;
    int count=1;
    scanf("%d",&n1);
    int a[1000][1000];
    for(i=1;i<=n1;i++)
        for(j=1;j<=n1;j++)
           a[i][j]=0;
        
    for(i=1;i<=n1;i++)
        for(j=1;j<=n1;j++){
            if(a[i][j]==0){
                int k=j;
                int l=i;
                while(k>=1 && l<=n1)
                {
                    a[l][k] = count;
                    count++;
                    l++;
                    k--;
                }
            }
        }
    
    for(i=1;i<=n1;i++){
        for(j=1;j<=n1;j++)
            printf("%d ",a[i][j]);
            printf("\n");
        }
    return 0;
}

