//Program to accept an integer number and check if it is divisible by 5 and 7

#include<stdio.h>

int main(){
    long num;

    printf("Please enter an integer number\n");
    scanf("%ld", &num);

    if(num % 5 == 0){
        printf("The entered number %ld IS divisible by 5 ", num);
        
    }
    else {
        printf("The entered number %ld IS NOT divisible by 5 ", num);
    }

    printf("& ");

    if (num % 7 == 0)
    {
        printf("IS divisible by 7\n");
    }
    else
    {
        printf("IS NOT divisible by 7\n");
    }

    return 0;
    
}