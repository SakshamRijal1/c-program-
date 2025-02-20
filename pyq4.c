
#include<stdio.h>
int reverse(int x){
	int rev=0,r;
	
	while(x!=0)
	{
		r=x%10;
		rev=10*rev+r;
		x=x/10;
	}
	return rev;
}
int main()
{
	int n,rev;
	printf("Enter a number: ");
	scanf("%d",&n);
	rev=reverse(n);
	
	printf("reverse of %d is %d",n,rev);
	return 0;
}
