#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=20;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d\t",i,j,i*j);
		}
		printf("\n");
	}
}
