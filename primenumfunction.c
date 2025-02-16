#include<stdio.h>
int prime(int n)
{
int c=0,i;
for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
		c++;
	
	}
	if(c==2)
	return 1;
	else
	return 0;
}
}
main()
{
	int n;
	scanf("%d",&n);
	if(prime(n))
	printf("%d is a prime number",n);
	else
	printf("%d is not a prime number",n);
	
}
