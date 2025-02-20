
#include<stdio.h>
int checkprime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	FILE *f1,*f2;
	int n1,n2,i,n;
	printf("Enter two numbers: ");
	scanf("%d %d",&n1,&n2);
	
	f1=fopen("source.txt","w");
	
	for(i=n1;i<=n2;i++)
	{
		if(checkprime(i)==1)
		{
			fprintf(f1,"%d\n",i);
		}
	}
	fclose(f1);
	
	f1=fopen("source.txt","r");
	f2=fopen("destination.txt","w");
	
	printf("Copying file source to destination\n");
	while(fscanf(f1,"%d",&n)!=EOF)
	{
		fprintf(f2,"%d\n",n);
	}
	fclose(f1);
	fclose(f2);
	
	f2=fopen("destination.txt","r");
	printf("The data stored in destination files are:\n ");
	
	while(fscanf(f2,"%d",&n)!=EOF)
	{
		printf("%d\n",n);
	}
	
	return 0;
}
