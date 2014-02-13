// giai he phuong trinh tuyen tinh bac nhat 2 an //
#include <conio.h>
#include <stdio.h>
main()
{
	float  a,b,c,d,e,f,x,y,dx,dy,dd;
	printf ("nhap vao gia tri a b c d e f :");
	scanf ("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	dd = a*e-b*d;
	dx = e*c-b*f;
	dy = a*f-d*c;
	if (d!=0)
	 {
 		x = float (dx/dd);
 		y = float (dy/dd);
 		printf( "phuong trinh co 2 nghiem phan biet :\n%f\n%f",x,y);
	}
	if ((dx==0)&&(dy==0)&&(dd==0))
	printf ("phuong trinh vo so nghiem");
	if ((dx==0)&&(dy==0)&&(dd!=0))
	printf ("phuong trinh vo so nghiem");
	
	getch();

	
}