//Program to print the factors of a given number

#include<stdio.h>

int main(){
    int num, count = 1;

    printf("Please enter a positive integer value\n");
    scanf("%d", &num);

    printf("The factos are:\n");

    while (count <= num)
    {
        if ((num % count) == 0)
        {
            printf("%d\t", count);
        }
        
        count++;
    }

    return 0;
    
}