// - Write a C program that calculates and prints the factorial of a number entered by the user


#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Show an error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}

