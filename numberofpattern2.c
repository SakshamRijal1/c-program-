#include<stdio.h>
main()
{

		
	int i,j,s;
	for(i=1;i<=5;i++)
	
	
	{int a=0,b=1;
	for(j=1;j<=i;j++)
		
		{if(j%2!=0)
			printf("%d",a);
			else
			printf("%d",b);
		
		}
		
		for(s=1;s<=10-2*i;s++)
		{
			printf(" ");
		}
		
		
		
		
		
		
		
		
		
		
		
		for(j=1;j<=i;j++)
		
		{if(j%2!=0)
			printf("%d",a);
			else
			printf("%d",b);
		
		}
		printf("\n");
	}
}
