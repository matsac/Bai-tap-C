#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	int i, n ;
	 float tong;
	printf ("nhap vao gia tri n :");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	tong= 0;
	tong = float (tong +float (1/i));
	printf ("gia tri cua   giao thua la :%f ",tong);
	getch();
}