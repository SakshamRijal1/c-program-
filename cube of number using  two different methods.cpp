#include<stdio.h>
#include<math.h>
main()
{
	int n,c,t;
	printf("Enter the number ");
	scanf("%d",&n);
	c=n*n*n;
	t=pow(n,3);
	printf("the cube after using two methods are %d %d ",c,t);
