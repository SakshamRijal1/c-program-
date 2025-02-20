
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f' || ch == '\r')
    {
        printf("%c is a whitespace character.\n", ch);
    }
    else
    {
        printf("%c is not a whitespace character.\n", ch);
    }
    return 0;
}
