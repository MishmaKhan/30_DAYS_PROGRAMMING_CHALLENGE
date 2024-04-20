// 1.Write a C program to calculate the sum and average of two numbers entered by the user
#include <stdio.h>
int main() {
    int a, b, sum;
    float avg;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    sum = a + b;
    avg = (float)(a + b) / 2;

    printf("\nSum of %d and %d is = %d", a, b, sum);
    printf("\nAverage of %d and %d is = %.2f", a, b, avg);

    return 0;
}
