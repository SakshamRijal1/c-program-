#include<stdio.h>
#define m 3
#define n 3
int main()
{

 int a[m][n],b[m][n],i,j,c[m][n];
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
	 
 
 printf("\n enter a[%d][%d]",i,j);
 scanf("%d",&a[i][j]);
}}
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
	 
 
 printf("\n enter b[%d][%d]",i,j);
 scanf("%d",&b[i][j]);
}}
printf("Matrix a of m*n is:");
for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
	 
 
 printf("%d",a[i][j]);}
 printf("\n") ;}
 printf("\t Matrix b of m*n is:");
for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
	 
 
 printf("%d",b[i][j]);
}
printf("\n");
 }
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
	 
 c[i][j]=a[i][j]+b[i][j];
 
}}
printf("\n the sum of matrix is:");
for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		printf("%d",c[i][j]);
	 }
	 printf("\n");}
