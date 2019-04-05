/*Program to find product of two 2-D arrays
[1 1 1]    [1 1 1]   [3 3 3]
[1 1 1]  x [1 1 1] = [3 3 3]
[1 1 1]    [1 1 1]   [3 3 3]
*/
main()
{
  int a[3][3], b[3][3],c[3][3];
  int i,j,k;
  clrscr();
  printf("\nThis program finds product of two 3x3 matrices.")
  printf("\nEnter First Array");
  for(i=0;i<3;i++)
  {
	  for(j=0;j<3;j++)
	  {
		  printf("\nEnter A[%d][%d]", i,j);
		  scanf("%d", &a[i][j]);
	  }
  }
  printf("\nEnter Second Array");
  for(i=0;i<3;i++)
  {
	  for(j=0;j<3;j++)
	  {
		  printf("\nEnter B[%d][%d]", i,j);
		  scanf("%d", &b[i][j]);
	  }
  }

  for(i=0;i<3;i++)
  {
	  for(j=0;j<3;j++)
	  {
		  c[i][j] = 0; /*clear c[i][j] as it will accumulate products*/
		  for(k=0;k<3;k++)
		  {
			  c[i][j] = c[i][j] + a[i][k]*b[k][j];
		  }
	  }
  }
  printf("\nOutput Matrix is :");
  for(i=0;i<3;i++)
  {
	  for(j=0;j<3;j++)
	  {
		  printf("C[%d][%d]", c[i][j]);
	  }
	  printf("\n");
  }
  getch();
}