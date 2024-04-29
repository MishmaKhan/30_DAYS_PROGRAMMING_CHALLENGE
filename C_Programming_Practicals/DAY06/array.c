#include <stdio.h>
#define MAX 255

int main() {
    int arr[MAX] = {0};
    int idx = 0;

    printf("Enter elements (enter -1 to finish):\n");
    scanf("%d", &arr[idx]);

    while (arr[idx] != -1 && idx < MAX) {
        printf("Enter elements (enter -1 to finish):\n");
        scanf("%d", &arr[idx]);
        idx++;
    }

    // Display the array
    printf("Array elements:\n");
    for (int i = 0; i < idx; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
