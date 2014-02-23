// ma tran//
#include <conio.h>
#include <stdio.h>
#include <math.h>

main()
{
	int a[100][100],i,j,n,max=0,dem=0;
	printf ("\nnhap vao ma tran cap n :");
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	  for (j=0;j<n;j++)
	  {
     	printf ("\nnhap vao ma tran a[%d,%d]:",i,j);
     	scanf ("%d",&a[i][j]);
	  }
	  max=a[0][0];
    for (i=0;i<n;i++)
      for (j=0;j<n;j++)
      {
      	
       if (a[i][j]>max)
         max=a[i][j];
         if ((a[i][j]==max)&&i+j>n-1)
		 dem++;
      }
      printf ("\ngia tri lon nhat: %d,sogt lon nhat cua ma tran: %d",max,dem);
      getch();
}