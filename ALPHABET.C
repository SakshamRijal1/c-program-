#include<stdio.h>
#include<string.h>
int main()
{
	char alpha;
	printf(" \n enter an alphabet:");
	scanf("%c",&alpha);
	if(alpha>='a' && alpha <='z' || alpha>='A' && alpha<='Z')
	{
		switch(alpha)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				printf("\n %c is a vowel",alpha);
				break;
			
		
		default:
			printf("%c is consonent ",alpha);}
			
	}
	else {
		printf("%c is not an alphabet",alpha);
	}
	return 0;
}
