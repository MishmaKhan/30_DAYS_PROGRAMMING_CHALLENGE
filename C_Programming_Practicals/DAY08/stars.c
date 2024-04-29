#include <stdio.h>

int main() {
    int rows = 5; // You can adjust the number of rows as needed

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Inner loop for printing stars in each row
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}


// OUTPUT :

// * 
// * * 
// * * * 
// * * * * 
// * * * * *