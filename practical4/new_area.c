#include <stdio.h>
#include <math.h>

float angles[13];

float degtorad(float arg) {
    return( (M_PI * arg)/180.0);       //Convert degrees to radians
}

float area_curve(int n){
 int i;
 float a = 0;
 float b = M_PI/3;
 float sum = angles[0] + angles[n];      //f(X0) and f(Xn)
 float area;
 for(i=1;i<n;i++)
 {
     sum = sum + (2*angles[i]);          //F(X0) + 2f(X1) + 2f(X2) + ......f(Xn)
 }
 
area = ((b-a)/(2*n)) * sum;              //Formula for area under curve
return area;
}

int main(void)
{
    int i;
    float rad;
    float area;
    for(i=0;i<=12;i++)
    {
        rad = degtorad(i*5);              //Calling function
        angles[i] = tan(rad);
    }
    
    printf("Array values are: ");
    for (i=0;i<=12;i++)
    {
        printf("%f ",angles[i]);
    }
    
    area = area_curve(12);                //Calling function
    printf("\nThe area under the curve is: %f \n",area);
    
}

