//Program to accept two fractions and perform the operations

#include<stdio.h>

int main(){
    int n1, d1, n2, d2, op, res_n, res_d;

    printf("Please enter two fractions in the integer form as Numerator 1 - Denominator 1 & Numerator 2 - Denominator 2\n");
    scanf("%d %d %d %d", &n1, &d1, &n2, &d2);

    printf("Please select an option from below:\n");
    printf("1: Addition \t 2: Subtraction \t 3: Multiplication\n");

    scanf("%d", &op);

    switch (op)
    {
    case 1:
            res_n = (n1*d2) + (n2*d1);
            res_d = d1 * d2;

            printf("The Addition is: %d/%d i.e. %f\n", res_n, res_d, (float)res_n/res_d);

        break;

    case 2:
            res_n = (n1 * d2) - (n2 * d1);
            res_d = d1 * d2;
            printf("The Subtraction is: %d/%d i.e. %f\n", res_n, res_d, (float)res_n/res_d);
        break;

    case 3:
            res_n = n1 * n2;
            res_d = d1 * d2;
            printf("The Multiplication is: %d/%d i.e. %f\n", res_n, res_d, (float)res_n/res_d);
        break;
    
    default:
            printf("Invalid choice. Please enter 1, 2 or 3\n");
        break;
    }

    return 0;
}