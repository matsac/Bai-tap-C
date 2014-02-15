#include<stdio.h>
#include<conio.h>
void main()
{
int ngay,t[13],nam,nhuan,tongngay,i,songay,sonam,j,nnam,kq;


t[1]=t[3]=t[5]=t[7]=t[8]=t[12]=t[10]=31;
t[2]=28;
t[4]=t[6]=t[9]=t[11]=30;
songay=0;
printf("Nam:20"); 
scanf("%d",&nam); 
nhuan=nam%4;
sonam=nam/4;
if(nam>9||nam<0) 
printf("loi");
else
{
if(nhuan==2)
{
printf("\nDay la nam nhuan.\n");
t[2]+=1; 
printf("\nThang:"); 
scanf("%d",&i);
if(i>12||i<1) 
printf("\nLoi");
else
{
printf("\nNgay:"); 
scanf("%d",&ngay);
if(ngay<0||ngay>t[i]) 
printf("Loi. So ngay vuot qua hoac khong chinh xac");
else
{
printf("\nNgay %d thang %d nam 200%d\n\n",ngay,i,nam);
for(j=1;j<i;j++) 
songay+=t[j];
}
nnam=nam*365+sonam; 
kq= nnam+(songay+ngay); 
kq=kq%7; 
switch(kq) 
{
case 0:printf("Chu nhat.");
break;
case 1:printf("Thu hai.");
break;
case 2:printf("Thu ba.");
break;
case 3:printf("Thu tu.");
break;
case 4:printf("Thu nam.");
break;
case 5:printf("Thu sau.");
break;
case 6:printf("Thu bay.");
break;
default:printf("Loi khong the xac dinh");
}
}
}
}

getch();
}