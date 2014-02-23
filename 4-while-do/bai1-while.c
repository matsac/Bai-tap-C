#include <stdio.h>
#include <conio.h>
#include "binh.h"
main()
{
	int n;
	printf ("nhap vao so tu nhien n :");
	scanf ("%d",&n);
	chuyencoso(n,2);
	chuyencoso(n,8);
	chuyencoso(n,16);
	getch();
}
