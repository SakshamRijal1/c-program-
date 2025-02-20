#include<stdio.h>
main()
{
	int a=20,*p,**q;
	p=&a;
	q=&p;
	printf("%d %d %d %d",&a,p,q,*q);
	printf("%d %d %d",a,*p,**q);
}
