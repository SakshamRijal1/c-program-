
#include<stdio.h>
int main()
{
	int n,great,i;
	printf("Enter no. of array elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	great=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>great)
		{
			great=a[i];
		}
	}
	printf("The largest number is %d\n",great);
	if(great%2==0)
	{
		printf("It is even.");
	}
	else
	{
		printf("It is odd");
	}
	return 0;
}
