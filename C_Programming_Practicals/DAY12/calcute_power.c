// Write a C program to calculate the power of a number using
//  recursion

#include <stdio.h>

// Function to calculate the power using recursion
long long power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    long long result;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent (positive integer): ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%d^%d = %lld\n", base, exponent, result);

    return 0;
}
