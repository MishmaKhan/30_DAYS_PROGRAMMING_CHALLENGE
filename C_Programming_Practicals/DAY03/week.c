// Create a C program that defines constants for the number of days in a week and uses it to display  each day's name
#include <stdio.h>

// Enumeration for days of the week
enum DaysOfWeek {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    // Display the day names
    printf("Days of the week:\n");
    printf("Sunday: %d\n", Sunday);
    printf("Monday: %d\n", Monday);
    printf("Tuesday: %d\n", Tuesday);
    printf("Wednesday: %d\n", Wednesday);
    printf("Thursday: %d\n", Thursday);
    printf("Friday: %d\n", Friday);
    printf("Saturday: %d\n", Saturday);

    return 0;
}

