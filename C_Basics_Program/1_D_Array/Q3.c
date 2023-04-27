//Program to accept an integer array and num and count the occurences of num in the given array

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *ptr, num, i, match = 0;

    printf("Please enter how many elements in an array\n");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));
    printf("Please enter %d elements\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Please enter a number\n");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (ptr[i] == num)
        {
            match++;
        }
        
    }
    
    if (match)
    {
        printf("The number %d is present: %d times in the given array\n", num, match);
    }
    else
    {
        printf("The number %d is missing from the entered array\n", num);
    }
    
    free(ptr);
    return 0;
}