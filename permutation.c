#include<stdio.h>
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	
	}
	return f;

}
main()
{
	
	int n,r,per ;
	scanf("%d %d",&n,&r);
	per=fact(n)/fact(n-r);
	printf("the permutation is %d",per);
	
	
}
