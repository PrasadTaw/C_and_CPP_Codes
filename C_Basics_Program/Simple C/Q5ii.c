//Program to swap the given two numbers without a third variable

#include<stdio.h>

void swap(float*, float*);

int main(){
    float a, b;

    printf("Please enter the two numbers to swap\n");
    scanf("%f %f", &a, &b);
    
    swap(&a, &b);

    printf("The swapped numbers are: %f and %f\n", a, b);
    return 0;

}

void swap(float *aptr, float *bptr){
    *aptr = *aptr + *bptr;
    *bptr = *aptr - *bptr;
    *aptr = *aptr - *bptr;
}