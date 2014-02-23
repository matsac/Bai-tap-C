#include<stdio.h>
#include<conio.h>
main()
{
	int i,ngay ,thang,nam,ngaya;
	printf("nhap vao ngay thang nam:");
	scanf("%d%d%d",&ngay,&thang,&nam);
	for (i=1 ; i<thang ; i++)
	switch(i)
	{
		case 1:
		case 3:
		case 5:
	    case 7 :
		case 8 :
		case 10: 
		case 12:
		ngay== 31 ;
		break;
		
		case  4 :
		case 6 :
		case 9:
		case 11 :
		ngay == 30 ;
		break;
		case 2 :
	    ngay= 28;
	    break;
		 
	}
	ngaya +=ngay;
	printf ("ngay thu %d cua nam %d ",ngaya,nam);
	getch();
	
		 
		
}
