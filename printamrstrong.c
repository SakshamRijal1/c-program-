#include<stdio.h>
main()
{
	int i,n,r,a,j;
printf("Enter the number");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ int d=0;
		a=i;
		j=i;
		while(j>0)
		{
			r=j%10;
			d=d+r*r*r;
			j=j/10;
		}
		if(d==a	)
		printf("%d",i);
	}
}
