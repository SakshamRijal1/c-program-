#include <stdio.h>

// Function to find the greatest number
int findGreatest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int num1, num2, num3, greatest;
    
    // Taking input from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calling function
    greatest = findGreatest(num1, num2, num3);

    // Displaying result
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
