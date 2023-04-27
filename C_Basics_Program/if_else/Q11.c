//Program to accept a lowercase character from the user and print if it's a vowel or a consonant

#include<stdio.h>
#include<conio.h>

int main(){
    char ch;

    printf("Please enter a lowercase alphabet\n");

    while (1)
    {
        scanf(" %c", &ch);

        if (ch >= 'a' && ch <= 'z')
            break;
        else
        printf("Invalid character, Try again. Acceptable characters are from \'a\' to \'z\' \n");
    }
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The entered character %c is a VOWEL\n", ch);
    }
    else
    {
        printf("The entered character %c is a CONSONANT", ch);
    }
    
    return 0;
}