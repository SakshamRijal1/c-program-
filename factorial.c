#include<stdio.h>
main()
{
	int fact=1,i,n;
	printf("Enter the value of number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of number is %d",fact);
}
