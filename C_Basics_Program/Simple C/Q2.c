// Program to accept a single character from the user and display its ASCII value

#include<stdio.h>

int main(){
    char ch;
    printf("Please enter a single character\n");

    scanf("%c", &ch);
    printf("The ASCII value of the given character %c is: %u\n", ch, ch);

    return 0;

}