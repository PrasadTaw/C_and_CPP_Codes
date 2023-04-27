//Program to accept 2 number and swap them: 1. with temp variable

#include<stdio.h>

void swap(float*, float*);

int main(){
    float a, b;
    printf("Please enter two numbers\n");
    scanf("%f %f", &a, &b);

    swap(&a, &b);

    printf("The numbers after swapping are: %f, %f", a, b);

    return 0;
}

void swap(float *aptr, float*bptr){
    float temp;

    temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;
}