#include <stdio.h>

int sum(int p,int q,int *arr){
    int sm=0;
    for(int i=p;i<q+1;i++){
        sm=sm+arr[i];
    }
    return sm;
    
}
int product(int p,int q,int *arr){
    int prt=1;
    for(int i=p;i<q+1;i++){
        prt=prt*arr[i];
    }
    return prt;
}

int main()
{
    int n,a,b;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int A[n];
    printf("\n");
    for(int j=0;j<n;j++)
    {
        printf("Element %d: ",j + 1);
        scanf("%d",&A[j]);
    }
    int ans=0;
    for(int k=0;k<n;k++)
    {
        for(int l=k;l<n;l++)
        {
            a = sum(k,l,A);
            b = product(k,l,A);
            if(sum(k,l,A) != product(k,l,A))
            {
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;   
}