//bai 7-for//
#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	int a[100][100],b[100,100],c[100][100],n,m,p,i,j,k;
	printf("\nnhap vao 3 so n,m,p  :");
	scanf ("%d %d %d",&n,&m,&p);
	for (i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
		printf ("\nnhap vao ma tran thu nhat :[%d,%d]",i,j );
		scanf ("%d",&a[i][j]);

		}
	for (i=0;i<m;i++)
		for(j=0;j<p;j++)
		{
		printf ("\nnhap vao ma tran thu hai :[%d,%d]",i,j );
		scanf ("%d",&a[i][j]);
	for (i=0;i<n;i++)
		for(j=0;j<p;j++)
			for(k=0;k<m;k++)
				c[i][j] +=  
}	