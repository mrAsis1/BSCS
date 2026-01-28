#include <stdio.h>
#include <stdlib.h>

int* i2B2(int num, int* s);
int isPInt(int);
int isPIntPtr(int* a, int s);
void dispB(int* b, int s);

int main() {
    int rangeStart = 1;
    int rangeEnd = 1000;

    for (int num = rangeStart; num <= rangeEnd; num++) {
        int s = 0;
        int* b2num = i2B2(num, &s);

        if (isPInt(num) && isPIntPtr(b2num, s)) {
            printf("%d:\n", num);
            dispB(b2num, s);
            printf("\n");
        }

        // Free allocated memory
        free(b2num);
    }
    return 0;
}

void dispB(int* b, int s) {
    for (int i = 0; i < s; i++) {
        printf("%p : %d\n", (void*)(b + i), *(b + i));
    }
}

int* i2B2(int num, int* s) {
    int temp = num;
    while (temp > 0) {
        temp = temp / 2;
        (*s)++;
    }

    int* b = (int*)calloc(*s, sizeof(int));
    temp = num;
    for (int i = *s - 1; i >= 0; i--) {
        b[i] = temp % 2;
        temp = temp / 2;
    }
    return b;
}

int isPInt(int num) {
    int temp = num, r = 0;
    while (temp > 0) {
        r = r * 10 + temp % 10;
        temp = temp / 10;
    }
    return r == num;
}

int isPIntPtr(int* arr, int s) {
    for (int i = 0; i < s / 2; i++) {
        if (arr[i] != arr[s - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
