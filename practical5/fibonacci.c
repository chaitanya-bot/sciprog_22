#include <stdio.h>
#include <stdlib.h>

void fib(long *f1,long *f0)
{
    long f2;
    f2 = *f1 + *f0;           //f2 is the sum of f1 and f0
    *f0 = *f1;                //f0 takes value of f1
    *f1 = f2;                 //f1 takes value of f2
}

int main()
{
  long f0,f1,n,i;
  n = 0;
  f0 = 0;
  f1 = 1;
  printf("Enter a positive number ");               
  scanf("%d",&n);
  if(n<=0)
  {
    printf("Positive number not entered");          //Program will exit if positive number not entered
    exit(0);
  }
  printf("Fibonacci series when number is %d \n",n);
  if (n >= 1)
  {
      printf("%d ",f0);                            // Prints 0 as it is the 1st number in fibonacci series
  }
  
  if(n >= 2)
  {
      printf("%d ",f1);                            // Prints 1 as it is the 2nd number in fibonacci series
  }
  
  if(n>= 3)
  {
      for(i=3;i<=n;i++)                            //To add numbers and print in the series function is called
      {
          fib(&f1,&f0);
          printf("%ld ",f1);
      }
  }
}
