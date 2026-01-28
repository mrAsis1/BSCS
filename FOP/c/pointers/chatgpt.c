#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    // Allocate memory
    arr = (int *) calloc(n, sizeof(int));

    // Check for allocation failure
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Print initial values
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    printf("\n");

    // Update array values
    for (int i = 0; i < n; i++) {
        *(arr + i) = i + 1;
    }

    // Print updated values
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}
