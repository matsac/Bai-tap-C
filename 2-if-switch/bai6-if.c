#include<stdio.h>
#include <conio.h>
main()
{
	int nam,thang;
	printf ("nhap vao thang nam :");
	scanf ("%d%d",&thang,&nam);
	if (thang == 2 )
		{
		if ((nam%400==0)||((nam%4==0)&&(nam%100!=0)))
        printf("thang %d nam %d co 29 ngay ",thang,nam);
        else  printf ("thang %d nam %d co 28 ngay ",thang,nam);
		}
	 else if (thang == 1||thang == 3||thang == 5||thang == 7||thang == 8||thang == 10||thang== 12)
     printf ("thang  %d nam %d co 31 ngay ",thang,nam);
     else if (thang==4||thang==6||thang==9||thang==11)
     printf ("thang %d nam %d co 30 ngay ",thang,nam);
     getch();
     return 0 ;
  }