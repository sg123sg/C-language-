# include<stdio.h>
int main()
{
   int m,n,p;
   printf("enter rows and column of matrix A(m,n):");
   scanf("%d%d",&m,&n);
   printf("enter number of columns of matrix B(p):");
   scanf("%d",&p);
   int A[m][n], B[n][p], C[m][p];
   printf("enter elements of matrix A:\n");
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           scanf("%d",&A[i][j]);
       }
   }
   printf("enter elements of matrix B:\n");
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<p;j++)
      
       {
           scanf("%d",&B[i][j]);
       }
   }
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<p;j++)
       {
           C[i][j]=0;
       }
   }
   for(int i=0; i<m; i++){
      for(int j=0; j<p; j++){
         for(int k=0; k<n; k++){
            C[i][j] += A[i][k] * B[k][j];
         }
      }
   }
   printf("resultant matrix C(m*p):\n");
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<p;j++)
       {
           printf("%d ",C[i][j]);
       }
       printf("\n");
   }
   return 0;
}