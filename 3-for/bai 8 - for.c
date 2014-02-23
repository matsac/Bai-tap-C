#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int a[100][100],n,i,j,hangmax,hangmin=1,cotmax,cotmin=1,dem=1;

	printf ("nhap vao ma tran cap n ");
	scanf("%d",&n);
	cotmax=n;
	hangmax=n;
	for (;dem<n*n;)
	{
		for (j=cotmin;j<cotmax;j++)
		a[hangmin][j]=dem++;
		for (i=hangmin;i<hangmax;i++)
		a[i][cotmax]=dem++;
		for (j=cotmax;j>cotmin;j--)
		a[hangmax][j]=dem++;
		for (i=hangmax;i>hangmin;i--)
		a[i][cotmin]=dem++;
		
		hangmin++;
		hangmax--;
		cotmin++;
		cotmax--;
	}
	if (n%2!=0) 
	a[(n+1)/2][(n+1)/2]=n*n;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		printf ("%3d ",a[i][j]);
		printf("\n");
	}
	getch();
}