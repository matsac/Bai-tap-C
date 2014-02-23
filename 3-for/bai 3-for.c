//bai 3 -for //
#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	float x[100],y[100];
	int n,i,dem=0;
	printf ("\nnhap vao toa do diem n trong mat phang ");
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		printf ("\nnhap vao toa do cua diem thu %d : ",i);
		scanf("%f %f",&x[i],&y[i]);
	}
    for (i=0;i<n;i++)

    	if (x[i]>0&&y[i]>0)
	    {	
			dem += 1;
			printf ("\n(%.2f %.2f)",x[i],y[i]);
		}
	printf ("\ntong  so diem thuoc goc phan tu thu nhat la %d",dem);
	getch();
}
