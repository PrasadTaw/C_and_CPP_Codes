//Program to accept positive numbers continuously and print the sum

#include<stdio.h>

int main(){
    int n = 0, sum = 0;

    printf("Please enter a positive number\n");

    while (n >= 0)
    {
        scanf("%d", &n);

        sum = sum + n;
        printf("The Sum is: %d\n", sum);
    }

    printf("Entered a negative number, loop now terminated\n");
    
    return 0;
}