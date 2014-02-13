// tim gia tri mã min trung binh cong //
#include <conio.h>
#include <stdio.h>
#include <math.h>
main()
{
	float a,b,c,max,min;
	float tbc;
	printf ("\n nhap vao gia tri cua a,b,c:\n");
	scanf("%f%f%f",&a,&b,&c);
    max = a ;
    min = a;
    if (b>max)
      max=b ;
      else 
         min = b ;
    
    if (c>max)
   	max =c ;
    else 
    min =c ;
    printf("So lon nhat la %.2f",max);
    printf ("\n So be nhat la %.2f:",min);
    tbc= float (a+b+c)/3;
    printf("\nTrung binh cong cua 3 chu so la :%.2f ", tbc);
	getch();
}