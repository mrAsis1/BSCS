#include <stdio.h>

// Function prototype with parameters for the operator and numbers
void total(char operator, int n1, int n2);

int main() {
    char operator;
    int n1, n2;

    printf("Please select an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to skip any whitespace characters

    printf("Please enter the 1st number: ");
    scanf("%d", &n1);

    printf("Please enter the 2nd number: ");
    scanf("%d", &n2);

    // Call the total function with the operator and numbers
    total(operator, n1, n2);

    return 0;
}

void total(char operator, int n1, int n2) {
    int result;
    
    switch (operator) {
        case '+':
            result = n1 + n2;
            printf("\nResult: %d\n", result);
            break;
        case '-':
            result = n1 - n2;
            printf("\nResult: %d\n", result);
            break;
        case '*':
            result = n1 * n2;
            printf("\nResult: %d\n", result);
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
                printf("\nResult: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }
}
