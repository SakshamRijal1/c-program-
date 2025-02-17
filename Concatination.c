#include<stdio.h>
int main()
{
    char char1[50];
    char char2[50];
    int i=0,j=0;
    
    printf("Enter a first string:\n");
    scanf("%[^\n]", char1);
    
    printf("Enter a Second string:\n");
    scanf("%s", char2);
    while (char1[i]!='\0')
    {
    	i++;
	}
	while (char2[j]!='\0')
	{
		char1[i]=char2[j];
		i++;
		j++;
	}
	char1[i]='\0';
	printf("the concatinate is %s",char1);
	return 0;
    
    
    
}
