//Program to calculate the factorial

#include<stdio.h>

int main(){
    int n, i, fact = 1;

    printf("Please enter an integer number\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("The Factorial of %d is: %d\n", n, fact);

    return 0;
    

}