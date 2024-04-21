//  Write a C program that takes a character as input and checks whether it's a vowel or consonant
#include <stdio.h>

int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // Evaluate to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    // Evaluate to 1 if variable c is an uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.\n", c);
    else
        printf("%c is a consonant.\n", c);

    return 0;
}
