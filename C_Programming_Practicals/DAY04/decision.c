// - Write a C program using if-else statements to guide a user through a simple decision-making process.

#include <stdio.h>

int main() {
    int age;

    // Prompt the user to enter their age
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Decision-making using if-else statements
    if (age >= 18) {
        printf("You are an adult. Enjoy your freedom!\n");
    } else {
        printf("You are a minor. Make the most of your youth!\n");
    }

    return 0;
}

