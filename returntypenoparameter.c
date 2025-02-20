#include<stdio.h>
int  addition()
{
	int a,b,sum;
	scanf("%d %d",&a,&b);
	sum=a+b;
	return sum;
}
main()
{ int sum;
	sum=addition();
	printf("the sum is %d",sum);
	
}
