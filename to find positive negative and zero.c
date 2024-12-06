#include<stdio.h>
int main()
{
  int a;
printf("enter the value \n");
scanf("%d",&a);
if(a>0)
{ printf("entered number (i.e %d)is positive",a);
}else if (a<0)
{
printf("entered number (i.e %d)is negative",a);
}else printf("you entered the value zero");
return 0;
}
