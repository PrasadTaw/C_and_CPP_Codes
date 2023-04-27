//Program to accept an integer number and print it in words

#include<stdio.h>

int main(){
    int n;

    printf("Please enter a number from 0 - 9\n");
    scanf("%d", &n);

    switch (n)
    {
    case 0:
            printf("The entered number %d in words is: Zero\n", n);
        break;
    case 1:
            printf("The entered number %d in words is: One\n", n);
        break;

    case 2:
            printf("The entered number %d in words is: Two\n", n);
        break;
    case 3:
            printf("The entered number %d in words is: Three\n", n);
        break;
    case 4:
            printf("The entered number %d in words is: Four\n", n);
        break;
    case 5:
            printf("The entered number %d in words is: Five\n", n);
        break;
    case 6:
            printf("The entered number %d in words is: Six\n", n);
        break;
    case 7:
            printf("The entered number %d in words is: Seven\n", n);
        break;
    case 8:
            printf("The entered number %d in words is: Eight\n", n);
        break;
    case 9:
            printf("The entered number %d in words is: Nine\n", n);
        break;

    default: printf("Invalid input. Try numbers from 0 - 9 only\n");
        break;
    }

    return 0;

}