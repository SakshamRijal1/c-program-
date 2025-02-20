#include<stdio.h>
int main()
{
	int i,l1=0,l2=0;
	char str1[20],str2[20],con[40];
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);
	
	for(i=0;str1[i]!='\0';i++)
	{
		l1++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		l2++;
	}
	
	for(i=0;i<l1;i++)
	{
		con[i]=str1[i];
		
		}
		
		for(i=l1;i<(l1+l2);i++)
		{
			con[i]=str2[i-l1];
			}	
			
			con[l1+l2]='\0';
			
			printf("The concatenated string is %s",con);
			return 0;
}
