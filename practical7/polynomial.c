#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,n,i,j;
    n = 15;
    x = 1;
    double sum,fact;
    fact = 1;
    sum = 1;
    double *a;
    a= (double *) malloc(20 * sizeof(double));  //Initializing a dynamic array using malloc
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j>0;j--)
        {
            fact = fact * j;         //Calculating factorail. For Ex 4! = 4 * 3 * 2 * 1
        }
        
        sum = sum + ((pow(x,i))/fact);    //Sum is 1 initially. Adding elements according to formula
        fact = 1;
        a[i] = sum;                      //Storing the results of sum in dynamic array
    }
    
    for(i=0;i<n;i++)
    {
        printf("The difference between the real value and formula for f(%d) is %.14lf \n",i+1,(exp(1) - a[i]));
    }
    
    free(a);            //frees memory
}
