#include <stdio.h>
#include <conio.h>

main()
{
	int a[100], n,i,soduong=0,soam=0,tsd=0,tsa=0;
	printf ("\nnhap vao so phan tu n :");
	scanf ("%d",&n);
	for(i=0;i<n;i++)
	 {
		 printf("\nnhap vao phan tu thu %d : ",i);
		 scanf("%d",&a[i]);
	 }
	for (i=0;i<n;i++)
	{
		if (a[i]>0)
		{
			soduong+=a[i];
			tsd+=1;
		}
		if (a[i]<0)
		{
			soam+=a[i];
			tsa+=1;	
		}
	}
	printf ("Tong so duong: %d. Tong so am: %d. So so duong: %d. So so am: %d.",soduong,soam,tsd,tsa);
	getch();
}