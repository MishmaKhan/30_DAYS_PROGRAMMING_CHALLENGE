#include <stdio.h>
#define MAX 255

int main() {
    int arr[MAX] = {0};
    int n, i;

    do {
        printf("Enter number %d (enter -1 to finish): ", i + 1);
        scanf("%lf", &arr[i]);
        i++;
    } while (arr[i - 1] != -1 && i < MAX);

    // Find the largest element
    for (i = 1; i < n; ++i) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }

    printf("Largest element = %.2lf\n", arr[0]);
    return 0;
}
