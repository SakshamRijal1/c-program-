#include<stdio.h>
int main()
{
	int l,h,min,i,a,b;
	printf("\n Enter two varisable for HCF:");
	scanf("%d %d",&a,&b);
	min=a<b?a:b;
	
	for(i=1;i<=min;i++)
	{
		if(a%i==0 && b%i==0)
		h=i;
		
	}
	printf("The hcf is:%d",h);
	
	l=(a*b)/h;
	printf("\n %d",l);
	
}
