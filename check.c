#include<stdio.h>
main()
{
	
	char c,ch;
	printf("Enter the choice");
	scanf("%c",&ch);
	fflush(stdin);
	printf("Enter the character");
	scanf("%c",&c);
	switch(ch){
		case '1':
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
printf("vowel");
else
printf("consonat");
break;

case '2':
if(c>=48&&c<=57)
printf("the digit");
else
printf("alphabet");		
break;		
		
	}
}
