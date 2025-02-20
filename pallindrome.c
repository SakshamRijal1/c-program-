#include<stdio.h>
main()
{
	long n,num,rev=0;
	int digit;
	scanf("%ld",&num);
	n=num;
	do{
		digit=num%10;
		rev=rev*10+digit;
		num/=10;
	
		
	} while(num!=0);
	if(n==rev)
	printf("the number is a palindrome");
	else
	printf("the number is not a palindrome");
	}
