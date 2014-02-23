//bai 3 while //
#include <stdio.h>
#include <conio.h>
main()
{
	int nam=2000;
	float k,n,v;
	printf("\nnhap vao tong thu nhap gdp cua nuoc ta 2000       :");
	scanf("%f",&n);
	printf("\nnhap vao toc do tang truong binh quan ");
	scanf("%f",&v);
	printf("\nnam                        gdp");
	k=n;
	while (k<2*n)
		{
			printf("\n%6d                           %.1f",nam,k);
			nam+=nam;
			k+=k*v;
		}
	getch();
	
}
