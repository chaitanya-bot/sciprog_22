#include <stdio.h>
#include <stdlib.h>

int *allocatearray(int x)
{
  int *p;
  p = (int *)malloc(x * sizeof(int));
  return p;
}

void fillwithones(int *p, int n)
{
   int i;
   for(i=0;i<n;i++)
   {
       p[i] = 1;
   }
   
}

void printarray(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d, ",p[i]);
    }
}

void deallocate(int *p)
{
    free(p);
}

int main()
{
    int n,*a;
    printf("Enter the size of array ");
    scanf("%d",&n);
    a = allocatearray(n);
    fillwithones(a,n);
    printarray(a,n);
    deallocate(a);

}



