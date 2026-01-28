#include <stdio.h>
void dispArr(int row, int column, int [row][column]);
void findLexicographicallyGreatestPermutation(int[], int);
int main()
{
    int arr[3][5] = {{1, 2, 3, 4, 5},
                     {4, 6, 1, 3, 2},
                     {4, 8, 7, 6, 1}};

    int row = sizeof(arr)/ sizeof(arr[0]);
    int column = sizeof(arr[0]) / sizeof(int);
    dispArr(row, column, arr);
    for(int i = 0; i < row; i++){
        findLexicographicallyGreatestPermutation(arr[i], column);
    }
    //lexicographic(row, column, arr);
    dispArr(row, column, arr);
}

void dispArr(int row, int column, int arr[row][column]){
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
            printf("%d, ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}



void findLexicographicallyGreatestPermutation(int arr[], int column) {
    int i = column - 2;

    // Step 1: Find the pivot (first element from the end that is smaller than its next element)
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    if (i >= 0) {
        // Step 2: Find the smallest element to the right of the pivot that is larger than the pivot
        int j = column - 1;
        while (arr[j] <= arr[i]) {
            j--;
        }

        // Step 3: Swap the pivot with this element
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Step 4: Reverse the part of the array to the right of the pivot
    int left = i + 1, right = column - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

