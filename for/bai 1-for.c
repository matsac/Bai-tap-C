// tinh gia tri n giai thua //
#include <stdio.h>
#include <conio.h>

main()
{
	int i,n, tong;

	
	printf ("nhap n giai thua:");
	scanf ("&d",&n);
	for (i=1;i<=n;i++)
	tong =1 ;
	tong= tong *i ;
	printf ("gia tri cua   giao thua la :%d ",tong);
	getch();

	
}