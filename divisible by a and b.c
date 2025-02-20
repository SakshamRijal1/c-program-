#include<stdio.h>
main()
{
	int n,a,b;
	printf("Enter the value of n,a,b");
	scanf("%d %d %d ",&n,&a,&b);
	if(n%a==0&&n%b==0)
	printf("%d is divisible by %d and %d",n,a,b);
}
