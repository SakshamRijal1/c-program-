#include<stdio.h>
int main()
{
	int a[5]={3,4,5,6,8},i,large;
	printf("Array elements are :\n ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
		for(i=0;i<5;i++)
		{
			if(a[i]>a[i+1])
			{
			   large=a[i];
		}}
		if(large%2==0)
		{
			printf("\n Lrgest number is even");
			
		}
		else 
		printf("\n largest number is odd");
		return 0;
			   
	
	
}
