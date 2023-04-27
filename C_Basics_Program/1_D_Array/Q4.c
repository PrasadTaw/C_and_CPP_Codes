//Program to accept n numbers from the user and sort the array in descending order

#include<stdio.h>
#include<stdlib.h>

void sort(int*, int);
void swap(int*, int*);

int main(){
    int n, *ptr, i;

    printf("Please enter how many elements in the array\n");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    printf("Please enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    
    sort(ptr, n);

    printf("Array after sorting in descending order is:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", ptr[i]);
    }
    

    free(ptr);
    return 0;

}

void sort(int* p, int n){
    int i, j;

    for (i = 0; i < (n-1); i++)
    {
        for (j = 0; j < (n-1) - i; j++)
        {
            if (p[j] < p[j+1])
            {
                swap(&p[j], &p[j+1]);
            }
            
        }
        
    }
    
}

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}