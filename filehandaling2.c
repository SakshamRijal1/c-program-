
#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	printf("Enter set of characters: ");

	fp=fopen("filec.txt","w");
		while(ch!='\n')
		{
			
		
	ch=getchar();
	fputc(ch,fp);
}
	fclose(fp);
}
