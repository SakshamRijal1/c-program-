#include<stdio.h>
int rev(int);
int main()
{
  int a,rev;
  printf("Enter a number \n")	;
  scanf("%d",&a);
  rev=rev(a);
  printf("The reverse number is %d",rev);
}
int rev(int a)
{
	int revesrsed=0;
	while(a!=0)
	{
		revesrsed=revesrsed*10+(a%10);
		a=a/10;
	}
	return revesrsed;
}
