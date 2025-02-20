
#include<stdio.h>
int main()
{
	int i,a[5];
	printf("Enter 5 numbers: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(a+i));
	}
	
return 0;
	}
