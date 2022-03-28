//C program to calculate sum, avg, standard deviation of 5 integers entered by user.
//Program by Kanishk Morey.

#include <stdio.h>
#include <math.h>

void fun(int a[], float *sum, float *avg, float *sD)
{
    *sum = a[0] + a[1] + a[2] + a[3] + a[4];
    *avg = *sum / 5;
    *sD = sqrt(((a[0]-*avg)*(a[0]-*avg)+(a[1]-*avg)*(a[1]-*avg)+(a[2]-*avg)*(a[2]-*avg)+(a[3]-*avg)*(a[3]-*avg)+(a[4]-*avg)*(a[4]-*avg))/5);
}

void main()
{
    int aM[5];
    float sDM, sumM, avgM;
    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter number %d: ",i+1);
        scanf("%i", &aM[i]);
    }
    fun(aM, &sumM, &avgM, &sDM);

    printf("\nSum: %f\nAverage: %f\nStandard Deviation: %f\n", sumM, avgM, sDM); 
}
