#include<stdio.h>
main()
{
	int i,j,k;
	int n=1;
	for(i=1;i<=5;i++)
	{
		int a=1;
		int d=a+64;
		char ch=(char)d;
		
		for(j=i;j<=5;j++)
		{
			printf("  ");;
		}
		for(k=1;k<=n;k++)
		{
			
			printf("%c ",ch);
			a=a+1;
		
		}
		n=n+2;
		
	printf("\n");
	}

}
