In practical3 we have to run a program to print the area under the curve using the instructions given below.

1. So a = 0 and b =p/3.
2. Get the firt part of the sum tan(0) + tan(
p/3). For C use tan which is part of the maths
library. You used the maths library in the last practical for Conversion.c. tan is available in
FORTRAN by default.
3. Create a loop that generates 11 equidistant points between 0 ?
p/3. Thus N = 12 and
x0 = a = 0 and x12 = b =
p/3.
4. Change the loop so that you are adding 2 tan(xi) for the each of the 11 points.
5. Add that sum to that of the end points and multiply by b-a
2N .
6. Compare this against log(2) you should not be too far out.


Used for loop and tan function from math libraray to add all the 11 2tan(x) points
Multiplied by b-a/2N and got an answer very close to log2