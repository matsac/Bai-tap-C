//giai phuong trinh bac nhat 1 an//
#include <conio.h>
#include<stdio.h>
#include<math.h>
main()
{
	float  a,b,c;
	
	printf("nhap vao gia tri a b c ");
	scanf ("%f%f%f",&a,&b,&c);
	if (a!=0)
	printf("gia tri cua x la %f",float ((c-b)/a));
	
	if(a==0&&((b-c)!=0))

	printf("phuong trinh vo nghiem!");
	if (a==0 && ((b-c)==0))
	printf("phuong trinh vo so nghiem ");
	
	getch();
	
	
}