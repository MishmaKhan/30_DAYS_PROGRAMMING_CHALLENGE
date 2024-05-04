//  Write a C program that uses pointers to swap the values of two variables.

#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1, num2;

    printf("Enter value of num1: ");
    scanf("%d", &num1);

    printf("Enter value of num2: ");
    scanf("%d", &num2);

    // Displaying numbers before swapping
    printf("Before Swapping: num1 is %d, num2 is %d\n", num1, num2);

    // Calling the user-defined function swap()
    swap(&num1, &num2);

    // Displaying numbers after swapping
    printf("After Swapping: num1 is %d, num2 is %d\n", num1, num2);

    return 0;
}
