//Program to accept n  numbers in an array and display smallest, largest and range
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *ptr, small, large, i;

    printf("Please enter how many elements in an array\n");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));
    printf("Please enter %d elements\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    small = ptr[0];
    large = ptr[0];

    //for finding the smallest element from an array
    for (i = 1; i < n; i++)
    {
        if (ptr[i] < small)
        {
            small = ptr[i];
        }
        
    }
    
    //for finding the largest element from an array
    for (i = 1; i < n; i++)
    {
        if (ptr[i] > large)
        {
            large = ptr[i];
        }
        
    }

    printf("The Smallest element is: %d and Largest element is: %d\n", small, large);
    printf("The range of elements entered is: %d\n", (large - small + 1));

    free(ptr);

    return 0;    


}