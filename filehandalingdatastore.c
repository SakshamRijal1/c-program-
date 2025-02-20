
#include<stdio.h>
int main()
{
	FILE *fptr;
	char name[30];
	int age;
	float height;
	
	printf("Enter name, age and height: ");
	scanf("%s %d %f",name,&age,&height);
	
	fptr=fopen("person.txt","w+");
	fprintf(fptr,"%s\t %d\t %f\n",name,age,height);
	
	rewind(fptr);
	while(fscanf(fptr,"%s %d %f",name,&age,&height)!=EOF)
	{
		printf("Name=%s Age=%d Height=%f",name,age,height);
	}
	return 0;
}
