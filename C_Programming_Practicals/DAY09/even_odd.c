// Write a C program that includes a function to check if a number is even or odd.

#include <stdio.h>

// Function to check even or odd
int isEven(int num) {
    return !(num & 1);
}

int main() {
    int num;

    // Input number from the user
    printf("Enter any number: ");
    scanf("%d", &num);

    // If isEven() function returns 0, the number is even
    if (isEven(num)) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
