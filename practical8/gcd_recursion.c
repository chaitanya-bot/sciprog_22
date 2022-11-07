#include <stdio.h>

int gcdr(int a,int b)                     //Finding gcd using a recursive function
{
  if (b != 0)
        return gcdr(b, a % b);
    else
        return a;
}

int main()
{
  int a,b,g;
  printf("Enter the 1st non-zero number ");      //Entering a non-zero number
  scanf("%d",&a);
  printf("Enter the 2nd non-zero number ");      //Entering 2nd non-zero number
  scanf("%d",&b);
  g = gcdr(a,b);                                  //Getting return value from function
  printf("The gcd of %d and %d is %d",a,b,g);
  
}