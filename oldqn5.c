
#include<stdio.h>
int findsum(int n)
{
	int sum=0;
	if(n/10==0)
	{
		return n;
	}
	else
	{
		return (n%10)+findsum(n/10);
	}
}
int main()
{
	int n,sum;
	printf("Enter a number: ");
	scanf("%d",&n);
	sum=findsum(n);
	
	while(sum>=10)
	{
		sum=findsum(sum);
	}
	printf("The final sum is %d",sum);
	return 0;
}
