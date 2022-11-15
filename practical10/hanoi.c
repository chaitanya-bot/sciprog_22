#include <stdio.h>

void hanoi(int n,int rod1,int rod3,int rod2)
{
    if(n==1)
    {
        printf("Move Disc %d from %d to %d \n",n,rod1,rod3);               //When only 1 disc is present, move between rod1 and rod3
    }
    
    else
    {
        hanoi(n-1,rod1,rod2,rod3);                                         //Moving discs from rod1 to rod2 with rod3 as intermediary
        printf("Move Disc %d from %d to %d \n",n,rod1,rod3);
        hanoi(n-1,rod2,rod3,rod1);                                         //Moving discs from rod2 to rod3 with rod1 as intermediary
    }
}

int main(void)
{
    int n;
    printf("Enter the number of discs: ");                    //Asking the user for the number of discs
    scanf("%d",&n);
    hanoi(n,1,3,2);                                           //Calling the hanoi function
    return 0;
}