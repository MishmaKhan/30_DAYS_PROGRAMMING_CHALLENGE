// - Write a C program that outputs whether an input number is a prime number.

#include <stdio.h>

int main() {
    int number, i, flag = 0;

    // Prompt the user to enter a positive integer
    printf("Please enter a positive integer: ");
    scanf("%d", &number);

    // 0 and 1 are not prime numbers
    if (number == 0 || number == 1) {
        flag = 1; // Set flag to 1 for non-prime numbers
    } else {
        // Check divisibility from 2 to n/2
        for (i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                flag = 1; // Set flag to 1 for non-prime numbers
                break; // Exit the loop if divisible
            }
        }
    }

    // Display the result
    if (flag == 0) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
