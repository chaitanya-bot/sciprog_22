#include <stdio.h>

int main()
{
    int n=5,p=3,q=4,i,j,k;
    double a[n][p],b[p][q],c[n][q] ;
    for(i=0;i<n;i++)                           //The number of rows in A matrix
    {
        for(j=0;j<p;j++)                       //The number of columns in A matrix
        {
            a[i][j] = i+j;                     //Every element in A is the sum of row and column number
        }
    }
    
    for(i=0;i<p;i++)                           //The number of rows in B matrix
    {
        for(j=0;j<q;j++)                       //The number of columns in B matrix
        {
            b[i][j] = i-j;                     //Every element in B is the difference between row and column number
        }
    }
    
    printf("Matrix A = \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%3.0f ",a[i][j]);          //Printing every element of A matrix
        }
        
        printf("\n");
    }
    
    printf("Matrix B = \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%3.0f ",b[i][j]);          //Printing every element of B matrix
        }
        
        printf("\n");
    }
    
matmult(n,p,q,a,b,c);                          //Getting C matrix from matmult function
    
    printf("Matrix C = \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%3.0f ",c[i][j]);          //Printing every element of matrix C
        } 
        
        printf("\n");
    }
    
    
    
    
}
