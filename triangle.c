#include<stdio.h>
#include<math.h>
int main()
{
	int b,c,h,s,a;
	printf("Enter the sides of triangle");
	scanf("%d %d %d ",&b,&h,&c);
s=(b+c+h)/2;
	a=sqrt(s*(s-h)*(s-b)*(s-c));
	printf("the area of triang;e %d ",a);
	
}
