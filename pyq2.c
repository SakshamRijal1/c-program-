
#include<stdio.h>
struct BOOK{
	char name[20];
	float price;
};

void maxPrice(struct BOOK bk[])
{
	int i,j;
	struct BOOK temp;
	
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(bk[i].price<bk[j].price)
			{
			temp=bk[i];
			bk[i]=bk[j];
			bk[j]=temp;	
			}
		}
	}
	printf("the book with maximum price is\n");
	printf("Book name=%s\t Price=%f",bk[0].name,bk[0].price);
	
	
}

int main()
{
	struct BOOK b[4];
	int i;
	
	for(i=0;i<4;i++)
	{
		printf("Enter details of book %d\n",i+1);
		printf("Book name: ");
		scanf("%s",b[i].name);
		printf("Book price: ");
		scanf("%f",&b[i].price);
		
	}
	
	maxPrice(b);
	
}
