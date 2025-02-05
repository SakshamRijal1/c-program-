#include<stdio.h>
void f(int a[]);
int main()
{
	int a[5]={1,2,3,4,5},i,n;

	
		printf("\n Before using function:");
		for(i=0;i<5;i++)
		{
			printf("%d \t",a[i]);
			
		}
   f(a);
   printf("\n after using function:");
   for(i=0;i<5;i++)
   {
   	printf("%d \t",a[i]);
   	
   	
   }

return 0;	
}

void f(int a[])
{
	a[0]=10;
	a[1]=20;
	a[2]=30;
	a[3]=40;
	a[4]=50;
}
