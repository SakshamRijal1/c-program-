#include<stdio.h>
int addition (int a,int b)
{
	int sum;
	
	sum=a+b;
	return sum;}
main()

{int a,b,sum;
scanf("%d %d",&a,&b);
	sum=addition( a,b);
	printf("the sum is %d",sum);
}
	
