#include<stdio.h>

main()
{
	int a,b,c;
	printf("Enter the value of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	printf("%d is largest",a);
	else if (c<b&&a<b)
	printf("%d is largest",b);
	else
	printf("%d is largest",c);
	
	
	
	
	
}
