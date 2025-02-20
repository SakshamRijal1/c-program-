
// C program to find the first capital letter in a string without using recursion

#include <stdio.h>

int main()
{
    char str[64];
    char cap;
    int i;

    printf("Enter string: ");
    scanf("%[^\n]s", str);

    while (str[i] != 0) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            cap = str[i];
            break;
        }
        i++;
    }

    if (cap == 0)
        printf("Capital letter is not found in the string\n");
    else
        printf("First Capital letter is: %c\n", cap);

    return 0;
}
