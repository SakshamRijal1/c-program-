#include<stdio.h>
#include<conio.h>
main()
{float billam,units;
printf("Enter the electricity units");
scanf("%f",&units);
if(units<=20)
billam=20;
else if (units>20&&units<=120)
billam=80+7.30*(units-20);
else
billam=9*units;
printf("the bill amount is %f",billam);
}
