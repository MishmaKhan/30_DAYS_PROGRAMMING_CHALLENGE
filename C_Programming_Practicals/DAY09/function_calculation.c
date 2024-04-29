// - Write a C program that uses functions to perform a calculation (e.g., sum of two numbers)

#include <stdio.h>

// Function to find the sum of two integer numbers
int Sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Input two integer values
    printf("Enter two integer values: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the sum using the Sum function
    int result = Sum(num1, num2);

    // Display the result
    printf("Result: %d + %d = %d\n", num1, num2, result);

    return 0;
}
