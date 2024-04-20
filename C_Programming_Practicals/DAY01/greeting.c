#include <stdio.h>

int main(void) {
    char name[15]; // Choose an arbitrary size for the name (e.g., 15 characters)
    
    printf("Let's do this! Please enter your name: ");
    scanf("%s", name); // Omit the '&' symbol for strings
    
    printf("Your name is %s\n", name);
    
    return 0;
}
