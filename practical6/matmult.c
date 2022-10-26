
void matmult(int n,int p, int q, double a[n][p],double b[p][q],double c[n][q])
{
  int i,j,k;
  for(i=0;i<n;i++)                                     //The number of rows in C matrix
    {
        for(j=0;j<q;j++)                               //The number of columns in C matrix
        {   
            c[i][j] = 0;                               //Initializing all values of C matrix to zero
            for(k=0;k<p;k++)                           //The number of columns in A and number of rows in B(Should be same for matrix multiplication)
            {
              c[i][j] += a[i][k] * b[k][j] ;  
            }
                
        }
        
    }
    
}    