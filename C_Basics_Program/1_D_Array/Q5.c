//Program to accept a decimal number and convert it to binary

#include<stdio.h>

void decToBin(int);

int main(){
    int num;

    printf("Please enter a positive decimal number\n");
    scanf("%d", &num);

    decToBin(num);

    return 0;

}

void decToBin(int n){
    int arr[64], j, i;

    for (i = 0; n > 0; i++)
    {
        arr[i] = n % 2;
        n = n / 2;
    }
    
    printf("The Binary equivalent is: ");
    for (j = i-1; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }
    
}