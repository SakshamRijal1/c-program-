#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the year upto to know about leap year");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%4==0)
		{
			if(i%100!=0||i%400==0)
			printf("%d is leap year\n",i);
		}
	}
}
