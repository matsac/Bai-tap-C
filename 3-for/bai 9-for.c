#include <stdio.h>
#include <conio.h>
main ()
{
	int a[100],b[100],c[200],m,n,k=0,i,j;
	printf ("\nnhap vao so phan tu :");
	scanf ("%d %d",&n,&m);
	for (i=1; i<=n; i++)
	{
		printf("\n[%d] = ",i);
		scanf("%d",&a[i]);
		
	}
	for (j=1;j<=m;j++)
	{
		printf ("\n[%d]=",j);
		scanf("%d",&b[j]);
		 
	}
	i=1;j=1;
	while (i<=n&&j<=m)
	if (a[i]<=b[j])
	{
	k++;
	c[k]=a[i];
	i++;
	}
	else 
	{
	k++;
	c[k]=b[j];
	j++;
	}	
		if (i<n)
	for (int t=i+1; t<=n; t++)
	{
		k++;
		c[k]=a[t];
	}
	else
	if (j<m) 
	for (int l=j+1; l<=m; l++)
	{
		k++;
		c[k] = b[l];
	}

	for (int i=1; i<=k; i++)
		printf("%5d",c[i]);
	getch();
		getch();
}
