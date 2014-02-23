// while 2 //
#include <stdio.h>
#include <conio.h>
#include <math.h>
int gt(int k)
{
	int temp=1;
	if (k == 0) temp=1;
	else //return k*gt(k-1);
	for (int i=1; i<=k; i++) temp*=i;
	return temp;
}
main()
{
	float x,eps,i=0,s=0,a;
	printf ("\nnhap vao gia tri sin(%d) : ",x);
	scanf("%f",&x);
	printf ("\nnhap vao eps : ");
	scanf ("%f",&eps);

	while (a > eps )
	{
		i++;
 		a=(float)(pow(x,2i+1)/gt(2*i+1));
	 	s+=pow(-1,i)*a;
	 }
	printf ("\nsin(x)= %.2f ",s);	 
}
