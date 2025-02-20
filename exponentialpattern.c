#include<stdio.h>
#define n 5
main()
{
	int i=n,j,k;
	while(i>0)
	{
		j=0;
		while(j<i)
		{
			printf("e");
			j++;
		 }
		 printf("\n");
		 k=0;
		 while(k<(n-1))
		{
			printf("\t");
			k++;
		 }
		 i--; 
	}
}
