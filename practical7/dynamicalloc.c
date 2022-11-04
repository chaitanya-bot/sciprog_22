#include <stdio.h>
#include <stdlib.h>

int *allocatearray(int x)
{
  int *p;
  p = (int *)malloc(x * sizeof(int));   //Allocating memory using malloc
  return p;
}

void fillwithones(int *p, int n)
{
   int i;
   for(i=0;i<n;i++)
   {
       p[i] = 1;           //Filling the array with ones using loop
   }
   
}

void printarray(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d, ",p[i]);        //Printing the contents of array using for loop
    }
}

void deallocate(int *p)
{
    free(p);                     //Freeing memory allocated to array through malloc
}

int main()
{
    int n,*a;
    printf("Enter the size of array ");    //Asking the user to enter size of array
    scanf("%d",&n);
    a = allocatearray(n);    //Calling all 4 functions one after the other
    fillwithones(a,n);
    printarray(a,n);
    deallocate(a);

}



