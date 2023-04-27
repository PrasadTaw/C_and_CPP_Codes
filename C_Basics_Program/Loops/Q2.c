//Program to evaluate powers of given numbers

#include<stdio.h>

int main(){
    int x, n, temp, res =1;

    printf("Please enter a number x and its power n\n");
    scanf("%d %d", &x, &n);

    temp = n;
    while (n > 0)
    {
        res = res * x;
        n--;
    }

    printf("%d to the power %d is: %d", x, temp, res);
        
    return 0;
}