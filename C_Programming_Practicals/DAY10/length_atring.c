// - Write a C program with a function that returns the length of a
//  string passed to it.
#include <stdio.h>
#include <string.h>

// Function to calculate the length of a string
size_t stringLength(const char* str) {
    return strlen(str);
}

int main() {
    char myString[] = "Hello, world!";
    size_t length = stringLength(myString);

    printf("Length of the string: %zu\n", length);

    return 0;
}
