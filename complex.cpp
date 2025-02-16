#include<stdio.h>
main()
{
	int a1,b1,a2,b2,a3,b3;
	printf("Enter the real parts of complex number and imaginary parts");
	scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
	a3=a1+a2;
	b3=b1+b2;
	printf("The addition of two complex is %d '+'%d i",a3,b3);
	
}
