#include<stdio.h>
int main()
{
float sum[]={1.1,1.2,1.3};
int add[]={1,2,3};
int i;
for(i=0;i<3;i++)
{
	printf("\n %d is memory allocation of %.2f",&sum[i],sum[i]);
		printf("\n %d is memory allocation of %d",&add[i],add[i]);
		
	
}
return 0;

}
