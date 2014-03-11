//* tinh da thuc bac n //
#include <stdio.h>
#include <conio.h>
#define max 100
float tinhdathuc(float heso[],float x,int n )
{
	float tong=0.0;
	int i ;
	for (i=0;i<= n ;i++)
	{
		tong =(tong+heso[i])*x;
		
	}
	tong +=heso[n];
	return tong ;
}
 main ()
	{
		float heso[max],x;
		int n,i;
		printf("\n cho biet he so bac :");
		scanf ("%d",&n );
		printf ("nhap vao cac he so :");
		for (i=0;i<=n;i++)
		scanf ("%f",&heso[i]);
		printf ("\n nhap vao gia tri x :");
		scanf ("%f",&x);
	
		printf ("\n ket qua tinh =%f ",tinhdathuc(heso,x,n));
		
		getch();
	}
