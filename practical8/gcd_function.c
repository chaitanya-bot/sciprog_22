#include <stdio.h>

int gcd(int a,int b)                     //GCD function which returns an integer
{
   int temp;
   while(b!=0)                           //While loop as given in psudocode
   {
    temp = b;
    b = a % b ;
    a = temp;
   }
   
   return(a);
}

int main()
{
  int a,b,g;
  printf("Enter the 1st non-zero number ");      //Entering a non-zero number
  scanf("%d",&a);
  printf("Enter the 2nd non-zero number ");      //Entering 2nd non-zero number
  scanf("%d",&b);
  g = gcd(a,b);                                  //Getting return value from function
  printf("The gcd of %d and %d is %d",a,b,g);
  
}