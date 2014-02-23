//viet chuong trinh kiem tra 3 so co tao thanh tam giac ko//
#include<conio.h>
#include<stdio.h>
#include <math.h>
main()
{
	float a,b,c ;
	printf ("nhap vao 3 canh tam giac :");
	scanf ("%f%f%f",&a,&b,&c);
	if (a+b>c,b+c>a,a+c>b)
	{
    printf ("tao thanh tam giac");
    if (a=b=c)
    printf ("tao thanh tam giac deu");
    else 
    if ((a*a + b*b == c*c)||(a*a + c*c == b*b)||(a*a = b*b + c*c))
    printf ("tao thanh tam giac vuong ");
    else 
    if (a==b&&a!=c )
    printf ("tao thanh tam giac can");
    else 
    if ((a*a+b*b == c*c)&&(a=b)||(a*a+c*c == b*b)&&(a=c)||(a*a = b*b+c*c)&&(b=c))
    printf ("tao thanh tam giac vuong can ");
	}
	else 
	printf ("khong tao thanh tam giac ");
    getch();
    
	    
}