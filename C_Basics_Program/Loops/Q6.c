//Program to calculate GCD of the given two positive numbers

#include<stdio.h>

int main(){
    int num1, num2, i, GCD;

    printf("Please enter any two positive integers\n");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            GCD = i;
        }
        
    }

    printf("The GCD of %d and %d is: %d\n", num1, num2, GCD);
    
}