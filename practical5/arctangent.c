#include <stdio.h>
#include <math.h>

double artanh1(double x, double delta)
{
    double total = 0;
    int n =0;
    double elem,power;
    
    do
    {
    
     power = 2*n + 1;                            //2n +1 is given a variable. Easier to compute
     elem = pow(x,power)/power;                  //power is a function in math library
     total += elem;
     n++;
    
    }while(fabs(elem) >= delta);                 // if element value is greater than precision, loop ends
    
    return total;
}

double artanh2(double x)
{
  
  return((log(1+x) - log(1-x))/2) ;              // Formula given in question. log is a function in math library
}

int main()
{

  double delta,x;
  int i = 0;
  double tan1[1000];
  double tan2[1000];
  printf("Enter precision ");
  scanf("%lf",&delta);
  
  x = -0.9;
  while(x<=0.9 && i <1000)
  {
    tan1[i] = artanh1(x,delta);
    tan2[i] = artanh2(x);
    printf("The difference betwwen 2 functions when x = %lf is %.10lf \n",x,fabs(tan1[i] - tan2[i]));   //%.10lf gives 10 decimal digits
    i++;
    x = x + 0.1;
    
   }
   
   return 0;
   
}