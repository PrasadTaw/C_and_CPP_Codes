//Program to write all prime numbers between 1 to n

#include<stdio.h>

int isPrime(int);

int main(){
    int n, i;

    printf("Please enter a positive number to find the prime numbers within range\n");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
        }
        
    }
    
    return 0;

}

int isPrime(int num){
    int i, count = 0;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
        
    }
    return !count;

}