#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"
#define MAX_FILE_SIZE 50

int matrix_dim(char filename[MAX_FILE_SIZE])  //Function to get number of rows in the matrix
{
    FILE *f;
    f = fopen(filename,"r");            //Opening the file where the matrix is stored
    int c;
    int count;
    while((c = fgetc(f)) != EOF)         
    {
          if(c == '\n')               //If end of line is reached count is increased by 1
          {
              count++;
          }
    }
    
    fclose(f);
    return count;
}

int main()
{
    int n,i,j;
    FILE *f;
    f = fopen("matrix.txt","r");                //Opening the file where matrix is stored
    n = matrix_dim("matrix.txt");               //Dimension of matrix received from function
    int **arr=malloc(n*sizeof(int *));          //Creating a 2D array through pointers
    for(i = 0;i<n;i++)
    {
      arr[i] = malloc(n *sizeof(int));
    }
    
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fscanf(f,"%d",&arr[i][j]);        //Copying the matrix from file to 2D pointer array
            
        }
    }
    

    if(isMagicSquare(arr,n)==1){                     //Calling the magic square function(M = (n * (n*n + 1))/2) and rowsum,colsum,main and secondary diagonals sum should be equal to m

        printf("The matrix is magicsquare!!");       //I have entered a 3*3 matrix in file. for n=3, M will be 15. If all sums listed above are equal to 15, this will be printed.
    }
    else{
        printf("The matrix is not magicsqaure");
        }
    fclose(f);    

}
