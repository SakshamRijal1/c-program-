
#include<stdio.h>
#include<conio.h>
main()
{

float a,b,c,d,m,n,x1,x2,deno;
printf("Entee the vlaue of a,n,c,d,m,n");
scanf("%f %f %f %f%f %f",&a,&b,&c,&d,&m,&n);
deno=a*c-b*d;
if(deno==0)
printf("the denominator is zero");
else
x1=m*d-b*n/deno;
x2=a*m-c*n/deno;
printf("%f %f",x1,x2);
}
