//Program to accept n numbers and key and to print if the key is present in the entered list

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *ptr, key, i, match = 0;

    printf("Please enter how many elements in an array\n");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));
    printf("Please enter %d elements\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Please enter the key\n");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (ptr[i] == key)
        {
            match++;
        }
        
    }
    
    if (match)
    {
        printf("The key is present in the entered array\n");
    }
    else
    {
        printf("The key is missing from the entered array\n");
    }
    
    free(ptr);
    return 0;

}