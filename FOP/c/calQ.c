#include<stdio.h>

void total(char operator, int n1, int n2);

int main(){

    char operator;
    int n1, n2;
    printf("\n");
    printf("********************************\n");
    printf("basic calculator\n");
    printf("********************************\n");

    printf("\n");
    printf("pls enter the 1st number: ");
    scanf("%d",&n1);
    printf("********************************\n");

    printf("\n");
    printf("pls select operator (+,-,*,/): ");
    scanf(" %c",&operator);
    printf("********************************\n");
   
    printf("\n");
    printf("pls enter the 2nd number: ");
    scanf("%d",&n2);
    printf("********************************\n");

    total(operator, n1,n2);


    return 0;
}

void total(char operator, int n1, int n2){
      int result;
      switch (operator)
      {
      case '+':
        result = n1 + n2;
        printf("***************************\n");
        printf("Result: %d\n", result);
        printf("***************************\n");
        break;
      case '-':
        result = n1 - n2;
        printf("***************************\n*");
        printf("Result: %d\n", result);
        printf("***************************\n");
        break;
      case '*':
        result = n1 * n2;
        printf("****************************\n");
        printf("Result: %d\n", result);
        printf("****************************\n");
        break;
      case '/':
        if (n2 != 0){
          result = n1 / n2;
          printf("****************************\n");
          printf("Result: %d\n", result);
          printf("****************************\n");
        }else{
          printf("***************************\n");
          printf("error! you can't divide by 0");
          printf("***************************\n");
        }
        break;
      
      default:
      printf("**********************\n");
      printf("invalid operator");
      printf("**********************\n");
        break;
      }

}