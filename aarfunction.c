#include<stdio.h>
void display(int a[]);
void read(int a[]);
void sort(int a[]);
int main()

{ int a[10],i,j;
	
	printf("\n enter ten numbers");
	read(a);
	display(a);
printf("\n The ascending order is :");
	sort(a);
	return 0;
}

	void read (int a[])
	{
		int i;
		for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}
	}
	void display(int a[])
	{
		int i,j,temp;
		for(i=0;i<9;i++)
		{
			for(j=i+1;j<10;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	void sort(int a[]){
	int i;
			for(i=0;i<10;i++)
		printf("%d",a[i]);}
	     
