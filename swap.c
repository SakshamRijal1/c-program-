#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a=5,b=6;
	printf("the value of a & b is %d & %d",a,b);
	swap(&a,&b);
	printf("\n the value after swap in call by refrence is %d & %d ",a,b);
return 0;		
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("the value after swap is %d &%d",*a,*b);
}
