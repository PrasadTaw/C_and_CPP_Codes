//Program to accept an integer and and print if it is even or odd

#include<stdio.h>

int main(){
    int num;

    printf("Please enter an integer number\n");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("The entered number %d is EVEN", num);
    }
    else{
        printf("The entered number %d is ODD", num);
    }

    return 0;
}