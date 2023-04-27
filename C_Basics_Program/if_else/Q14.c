//Program to accept a character and invert the case

#include<stdio.h>

int main(){
    char ch;

    printf("Please enter a character. (lowercase or uppercase)\n");
    
    while (1)
    {
        scanf("%c", &ch);
        if ((ch >= 65 && ch<= 90) || (ch >= 97 && ch <= 122))
        {
            break;
        }
        else
        {
            printf("Please enter a valid character. (Acceptable values: a to z or A to Z)\n");
        }
        
    }

    if (ch >= 65 && ch <= 90)
    {
        ch = ch + 32;
    }
    else if (ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
    }

    printf("The inverted case of the entered character is: %c", ch);

    return 0;
    

}