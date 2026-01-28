#include <stdio.h>

#define ROWS 3
#define COLS 5

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the next lexicographic permutation of a row
int nextPermutation(int* row, int n) {
    int k = -1, l = -1;

    // Step 1: Find the largest index k such that row[k] < row[k + 1]
    for (int i = n - 2; i >= 0; i--) {
        if (row[i] < row[i + 1]) {
            k = i;
            break;
        }
    }

    // If no such index exists, the row is already the last permutation
    if (k == -1) {
        return 0; // No next permutation
    }

    // Step 2: Find the largest index l greater than k such that row[k] < row[l]
    for (int i = n - 1; i > k; i--) {
        if (row[i] > row[k]) {
            l = i;
            break;
        }
    }

    // Step 3: Swap row[k] and row[l]
    swap(&row[k], &row[l]);

    // Step 4: Reverse the sequence from row[k + 1] to the end
    int start = k + 1, end = n - 1;
    while (start < end) {
        swap(&row[start], &row[end]);
        start++;
        end--;
    }

    return 1; // Successfully generated the next permutation
}

// Function to print the 2D array
void printArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    // Print the original 2D array
    printf("Original 2D Array:\n");
    printArray(arr);

    // For each row, apply the next lexicographic permutation
    for (int i = 0; i < ROWS; i++) {
        nextPermutation(arr[i], COLS);
    }

    // Print the modified 2D array after permutations
    printf("\n2D Array after Next Lexicographic Permutation of each row:\n");
    printArray(arr);

    return 0;
}
