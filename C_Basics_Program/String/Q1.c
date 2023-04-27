/* Program which accepts a sentence from the user and alters it as follows: Every space is
replaced by *, case of all alphabets is reversed, digits are replaced by? */

#include<stdio.h>

int main(){
    char ch[1000];
    int i;

    printf("Please enter the string/ sentence\n");
    gets(ch);
    
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == ' ')
        {
            ch[i] = '*';
        }
        else if (ch[i] >= '0' && ch[i] <= '9')
        {
            ch[i] = '?';
        }
        else if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
        {
            if (ch[i] >= 'A' && ch[i] <= 'Z')
            {
                ch[i] = ch[i] + 32;
            }
            else if (ch[i] >= 'a' && ch[i] <= 'z')
            {
                ch[i] = ch[i] - 32;
            }
            
        }
        
    }
    
    printf("The sentence after modification is:\n");
    printf("%s", ch);

    return 0;
}