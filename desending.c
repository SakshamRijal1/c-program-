
 #include<stdio.h>
 int main()
 {
 	int num[100],i,j,temp,n;
 	printf("How many numbers \n");
 	scanf("%d",&n);
 	printf("enter %d number \n",n);
 	for(i=0;i<n;i++){
	 
 	scanf("%d",&num[i]);}
 	
 	for(i=0;i<n;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if(num[i]<num[j])
 			{
 				temp=num[j];
 				num[j]=num[i];
 				num[i]=temp;
 				
			 }
		 }
	 }
	 printf("\n The descending order is :");
	 for (i=0;i<n;i++){
	 
	 printf("\t %d",num[i]);}
	 
 	
 }
