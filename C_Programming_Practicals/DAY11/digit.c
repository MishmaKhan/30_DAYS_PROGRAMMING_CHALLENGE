//  Write a C program that calculates the number of digits in an integer
//  entered by the user

#include <stdio.h>

int main() {
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    // Iterate until n becomes 0
    // Remove the last digit from n in each iteration
    // Increase the count by 1 in each iteration
    do {
        n /= 10;
        ++count;
    } while (n != 0);

    printf("Number of digits: %d\n", count);

    return 0;
}
