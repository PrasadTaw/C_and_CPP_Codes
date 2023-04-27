//Program to check whether the entered character is Lowercase or Uppercase

#include<stdio.h>

int main(){
    char ch;

    printf("Please enter a character. (lowercase or uppercase)\n");
    
    while (1)
    {
        scanf("%c", &ch);
        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
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
        printf("The entered character %c is: Uppercase\n", ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("The entered character %c is: Lowercase\n", ch);
    }
    
    return 0;

}