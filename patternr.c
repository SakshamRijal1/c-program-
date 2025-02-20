#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{int a=1;
		;
		if(i%2!=0)
		{
			for(j=1;j<=i;j++)
			
			{printf("%d",j);
			}
			printf("\n");
			
		}
		else
		{
			for(j=1;j<=i;j++)
			{
				int d=a +64;
		char ch=(char)d;
				printf("%c",ch);
				a=a+1;
			}
			printf("\n");
		}
		
	}
	
	
}
