//Program to accept a character and an integer n, and print the next n characters

#include<stdio.h>

int main(){
    char ch;
    int n, count = 0;

    printf("Please enter a character and an integer value\n");
    scanf("%c %d", &ch, &n);

    printf("the entered character is: %c and the next %d characters are:\n", ch, n);

    do
    {
        printf("%c\t", (ch + count));
        count++;

    } while (count <= n);

    return 0;
    
}