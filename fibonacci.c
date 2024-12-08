#include<stdio.h>
int main()
{
	int n,i, next,first=0,second=1;
	printf("enter how many trms do you want to run \n");
	scanf("%d",&n);
	printf("fibonacci series of %d no of terms is:\n",n);
	for (i=0;i<n;i++)
	{
	
	if(i<=1)
	
		next=i;
	
		

	else 
	{
	
	
	next=first +second;
	first=second;
	second=next;
}
	printf("%d",next);
	
}


return 0;

}
