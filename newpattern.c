#include<stdio.h>
main()
{
	int i,j,k;
	int n=1;
	for(i=1;i<=5;i++)
	{
		int a=1;
		for(j=i;j<=5;j++)
		{
			printf(" ");;
		}
		for(k=1;k<=n;k++)
		{
			
			printf("%d ",a);
			a=a+1;
		
		}
		n=n+2;
		
	printf("\n");
	}

}
