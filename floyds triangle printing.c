#include<stdio.h>
main()
{
	int a=10,i,j;
for(i=1;i<=5;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%d ",a);
		a=a+10;
	}
	
	printf("\n");
	
	}	
}
