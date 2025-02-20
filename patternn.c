#include<stdio.h>
main()

{
	int i,j;
	for(i=1;i<=5;i++)
	{int a=65;
		for(j=1;j<=i;j++)
		{
			
			printf("%c",a);
			a=a+1;
		}
		printf("\n");
	}
}
