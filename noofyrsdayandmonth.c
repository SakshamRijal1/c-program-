#include<stdio.h>
main()
{
	int d,m,y,n;
	printf("Enter the number of days");
	scanf("%d ",&n);
	y=n/365;
	m=(n-y*365)/30;
	d=n-y*365-m*30;
	printf("The no of years \t months\tdays is %d\n  %d\n %d\n",y,m,d);
}
