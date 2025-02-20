
//C program to print all printable characters using the isprint() function
#include <stdio.h>
#include <ctype.h>
int main()
{
    int i;
    printf("Printable characters\n");
    for (i = 0; i <= 255; i++)
    {
        if (isprint(i))
        {
            printf("%c\n", i);
        }
    }
    return 0;
}
