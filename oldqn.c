
#include<stdio.h>
struct Barmachari
{
	char id[6];
	char name[20];
	struct date{
		int year,month,day;
	}d;
	long int salary;
};

void search_employee(int n,long int sal,struct Barmachari e[])
{
	int i,found=0;
	
	for(i=0;i<n;i++)
	{
	if(e[i].salary==sal)
	{
		printf("Name=%s\t ID=%s\t Date=%d/%d/%d\t Salary=%ld\n",
				e[i].name,e[i].id,e[i].d.year,e[i].d.month,e[i].d.day,e[i].salary);
				found++;
		}	
	}
	if(found==0)
	{
		printf("No employee found!");
	}
}
int main()
{
	int n,i;
	long int search_sal;
struct Barmachari e[100];
printf("Enter number of employees: ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("Enter details of employee %d",i+1);
	printf("id: ");
	scanf("%s",e[i].id);
	printf("name: ");
	scanf("%s",e[i].name);
	printf("Date of join: ");
	scanf("%d %d %d",&e[i].d.year,&e[i].d.month,&e[i].d.day);
	printf("salary: ");
	scanf("%ld",&e[i].salary);
	

	
}
	printf("Enter the salary to search: ");
	scanf("%ld",&search_sal);
	
	search_employee(n,search_sal,e);
	return 0;
	
}
