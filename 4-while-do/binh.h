void chuyencoso(int n, int a )
{	
	int du[100],i=0,j;
	while (n!=0)
		{
			i++;
			du[i] = n%a;
			n=n/a;   
		}
	for (j=i;j>0;j--)
	if (du[j]>9)
		switch (du[j])
		{
			case 10: printf ("A ");	break;
			case 11: printf ("B ");	break;
			case 12: printf ("C ");	break;
			case 13: printf ("D ");	break;
			case 14: printf ("E ");	break;
			case 15: printf ("F ");	break;
		}
	else	printf ("%d ",du[j]);	
	printf("\n");
}