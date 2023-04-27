//Program to accept two numbers and perform required operations

#include<stdio.h>

int main(){
    int x, y, op, temp, tmp;

    printf("Please enter the two integer numbers x and y and choice of operation:\n");
    scanf("%d %d", &x, &y);
    printf("\t 1: Equality check.\n\t 2: Less than checker.\n\t 3: Quotient and Remainder.\n\t 4: In Range check.\n\t 5: Swap.\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1: if (x == y)
    {
        printf("x and y are equal\n");
    }
    else
    {
        printf("x and y are Not equal\n");
    }
    
        break;

    case 2: if (x < y)
    {
        printf("x IS less than y\n");
    }
    else
    {
        printf("x is NOT less than y\n");
    }
        break;

    case 3: printf("The Quotient is: %d and Remainder is: %d\n", x/y, x%y);
        break;

    case 4: 
            printf("Please enter an interger value to check if it is within range\n");
            scanf("%d", &temp);

            if (temp >= x && temp <= y)
            {
                printf("The number %d lies within the range\n", temp);
            }
            else
            {
                printf("The number %d lies out of the range\n", temp);
            }

            break;
            
    case 5: 
            tmp = x;
            x = y;
            y = tmp;

            printf("The numbers after swapping are: %d and %d\n", x, y);

            break;
    
    default:
            printf("Invalid input. Please select option 1 to 4\n");
        break;
    }

    return 0;
}