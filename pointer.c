#include<stdio.h>
int main()
{
	int a[5];
int *ptr=a,i;
	printf("Enter array elements \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	
	}
	for(i=0;i<5;i++)
	{
		printf("%d",*(ptr+i));
	
	
}}
