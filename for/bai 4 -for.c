//tim max min cua 1 day so //
#include <stdio.h>
#include <conio.h>
main()
{
	int a[1000],i,n ,max,min,vitrimax=0,vitrimin=0;
	printf ("nhap vao day so n :");
	scanf ("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf ("vi tri thu %d",i);
		scanf("%d",&a[i]);
	}
	max=a[0] ;
	min = a[0];
	for (i=0;i<n;i++)
	if (a[i]>max)
	{
		max=a[i];vitrimax=i;
		
	}
	if (a[i]<min)
	{
		min=a[i];vitrimin=i;
		
	}
	printf("gia tri max %d ,gia tri min %d,vi tri max %d ,vi tri min %d ",max,min,vitrimax,vitrimin);
	getch();
}
