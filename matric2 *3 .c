#include<stdio.h>
int main()
{
	int matrix[2][3],i,j;

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter matrix[%d][%d]",i,j);
			scanf("%d",&matrix[i][j]);
			
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" matrix[%d][%d] is %d",i,j,matrix[i][j]);
	
}
printf("\n")
;}}
