//doc so co ba chu so //
#include<stdio.h>
#include<conio.h>
void main(){
int a,hangtram,hangchuc,donvi;
do{
printf("Nhap so co 3 chu so: ");
scanf("%d",&a);
if ((a<100) || (a>999))
{
printf("So khong nhu yeu cau! Nhap lai!\n");
}
}while((a<100) || (a>999));
hangtram=a/100;
hangchuc =(( a%100)/10);
donvi=a%10;
switch (hangtram)
{
case 1:
printf("Mot tram "); break;
case 2:
printf("Hai tram "); break;
case 3:
printf("Ba tram "); break;
case 4:
printf("Bon tram "); break;
case 5:
printf("Nam tram "); break;
case 6:
printf("Sau tram "); break;
case 7:
printf("Bay tram "); break;
case 8:
printf("Tam tram "); break;
case 9:
printf("Chin tram "); break;
}
switch (hangchuc)
{
case 0:
printf("le "); break;
case 1:
printf("muoi "); break;
case 2:
printf("hai muoi "); break;
case 3:
printf("ba muoi "); break;
case 4:
printf("bon muoi "); break;
case 5:
printf("nam muoi "); break;
case 6:
printf("sau muoi "); break;
case 7:
printf("bay muoi "); break;
case 8:
printf("tam muoi "); break;
case 9:
printf("chin muoi "); break;
}
switch (donvi)
{
case 0:
printf("muoi\n"); break;
case 1:
printf("mot\n"); break;
case 2:
printf("hai\n"); break;
case 3:
printf("ba\n"); break;
case 4:
printf("bon\n"); break;
case 5:
printf("lam\n"); break;
case 6:
printf("sau\n"); break;
case 7:
printf("bay\n"); break;
case 8:
printf("tam\n"); break;
case 9:
printf("chin\n"); break;
}
getch();
}