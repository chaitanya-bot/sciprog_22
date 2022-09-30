#include <stdio.h>
#include <math.h>

int main(void) {
int i,n=12;    
double sum,a,b,area,c,number;
a = 0;
b = M_PI/3;
c = M_PI/36;                      //Radian value for 5 degrees
sum = tan(b) + tan(a);
for(i = 1;i <n ; i++)             //Spliting into 11 equidistant points 
{  
    number = 2 * tan(c*i);        //c*i creates radian value of 5degree, 10 degree and so on
    sum = sum + number;
    
}
area = sum*((b-a)/(2*n));
printf("The area under the curve is %lf \n",area);
}

