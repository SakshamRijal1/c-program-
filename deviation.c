
// C program to calculate the mean, variance, and standard deviation of real numbers

#include <stdio.h>
#include <math.h>

int main()
{
    float arr[5];

    float sum;
    float mean;
    float variance;
    float deviation;

    int i;
	printf("Enter five numbers: ");
    for (i = 0; i < 5; i++)
    {
    scanf("%f",&arr[i]);
    sum = sum + arr[i];	
	}
        

    mean = sum / 5;

    sum = 0;
    for (i = 0; i < 5; i++) {
        sum = sum + pow((arr[i] - mean), 2);
    }
    variance = sum / 5;

    deviation = sqrt(variance);

    printf("Mean of elements    : %.2f\n", mean);
    printf("variance of elements: %.2f\n", variance);
    printf("Standard deviation  : %.2f\n", deviation);

    return 0;
}

