//Program to accept two integers and perform mathematical operations using switch case

#include<stdio.h>

int main(){

    int num1, num2;
    char ch;

    printf("Please enter any two integers to perform mathematical operations\n");
    scanf("%d %d", &num1, &num2);
    printf("Please choose an operation:\n");
    printf(" * : Multiplication\n / : Division\n + : Addition\n - : Subtraction\n");

    scanf(" %c", &ch);

    switch (ch)
    {
    case '*':   printf("The Multiplication of %d and %d is: %d\n", num1, num2, num1*num2 );
        break;

    case '/':   printf("The Division of %d and %d is: %f\n", num1, num2, ((float)num1/num2));
        break;

    case '+':   printf("The Addition of %d and %d is: %d\n", num1, num2, num1+num2 );
        break;

    case '-':   printf("The Subtraction of %d and %d is: %d\n", num1, num2, num1-num2 );
        break;
    
    default:    printf("Invalid operation. Try * , / , + , - only\n");
        break;
    }

    return 0;
}