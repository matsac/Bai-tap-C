// tinh gia tri cua bieu thuc //
#include <conio.h>
#include <stdio.h>
#include <math.h>
#define  a 1.25
main()
{
	float x;
	printf("nhap vao gia tri x ");
	scanf("%f",&x);
	printf("gia tri cua bieu thuc la% f  :",float(exp(a+sin(x)*sin(x)-x)));
	getch();
		
}