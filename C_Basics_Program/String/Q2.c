//Program that accepts n strings and displays the longest string. Use array of strings

#include<stdio.h>
#include<string.h>

int main(){
    char str[50][50], *longest = NULL;
    int i, n, len, max;

    printf("Please enter the number of strings to be entered\n");
    scanf("%d", &n);

    printf("Please enter %d strings\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    longest = str[0];
    max = strlen(str[0]);

    for (i = 1; i < n; i++)
    {
        len = strlen(str[i]);
        if (len > max)
        {
            max = len;
            longest = str[i];
        }
        

    }
    
    printf("The longest string is:\n");
    printf("%s", longest);

    return 0;

    
}