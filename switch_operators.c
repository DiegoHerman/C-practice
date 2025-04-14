#include <stdio.h>

int main() {
    int num1,num2;
    char operator;

    printf("Type first number: ");
    scanf("%d",&num1);
    printf("Type second number: ");
    scanf("%d",&num2);
    printf("Choose the operation: ");
    scanf(" %c",&operator);

    switch (operator) {
        case '+':
            printf("%d+%d=%d",num1,num2,num1+num2);
            break;
        case '-':
            printf("%d-%d=%d",num1,num2,num1-num2);
            break;
        case '*':
            printf("%d*%d=%d",num1,num2,num1*num2);
            break;
        case '/':
            printf("%d/%d=%d",num1,num2,num1/num2);
            break;
        default:
            printf("Please choose an operation");
            break;
    }

    return 0;

}