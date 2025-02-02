 //to enter marks of 10 student and print therie avg marks using array
 #include<stdio.h>
 int main()
 {
 	int num[100],i,j,temp,n;
 	printf("How many numbers \n");
 	scanf("%d",&n);
 	printf("enter %d number \n",n);
 	for(i=0;i<n;i++){
	 
 	scanf("%d",&num[i]);}
 	
 	
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if(num[i]>num[j])
 			{
 				temp=num[i];
 				num[i]=num[j];
 				num[j]=temp;
 				
			 }
		 }
	 }
	 printf("\n The ascending order is :");
	 for (i=0;i<n;i++){
	 
	 printf("\t %d",num[i]);}
	 
 	
 }
