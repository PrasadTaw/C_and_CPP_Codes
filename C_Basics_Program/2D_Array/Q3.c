/* Program to add and multiply two matrices. Perform necessary checks before adding and
multiplying the matrices */

#include<stdio.h>
#include<stdlib.h>

void add();
void mul();

int main(){
    int op;

    printf("Please enter your choice as per below:\n");
    printf("1. Addition of two Matrices\n2. Multiplication of two Matrices\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
            add();
        break;
    case 2:
            mul();
        break;

    default:
            printf("Invalid Input\n");
        break;
    }

    return 0;

}

void mul(){
    int **a, **b, **mul, r1, c1, r2, c2, i, j, k;

    while (1)
    {
        printf("For multiplication, please enter number of rows and column of first matrix\n");
        scanf("%d %d", &r1, &c1);

        printf("Please enter number of rows and column of second matrix\n");
        scanf("%d %d", &r2, &c2);

        if (c1 == r2)
        {
            break;
        }
        else
        {
            printf("First matrix number of columns must be equal to second matrix number of rows\n");
            printf("Try again\n");
        }
    }

    //Dynamically allocating memory for Matrix A, B and Mul

    a = (int**)malloc(r1 * sizeof(int*));
    b = (int**)malloc(r2 * sizeof(int*));
    mul = (int**)malloc(r1 * sizeof(int*));

    //Matrix A
    for (i = 0; i < r1; i++)
    {
        a[i] = (int*)malloc(c1 * sizeof(int));
    }

    //Matrix B
    for (i = 0; i < r2; i++)
    {
        b[i] = (int*)malloc(c2 * sizeof(int));
    }

    //Matrix Mul
    for (i = 0; i < r1; i++)
    {
        mul[i] = (int*)malloc(c2 * sizeof(int));
    }
    
    //Getting elements
    printf("Please enter the %d x %d  elements of Matrix A\n", r1, c1);

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    printf("Please enter the %d x %d  elements of Matrix B\n", r2, c2);
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }

    //Initializing Mul matrix to zero
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            mul[i][j] = 0;
        }
        
    }

    //Multiplication
    for (i = 0; i < r1; i++)
    {
        
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                mul[i][j] = mul[i][j] + a[i][k]*b[k][j];
            }
            
        }
        
    }

    //Result
    printf("The Multiplication of the two matrix is:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    
    free(a);
    free(b);
    free(mul);
}

void add(){
    int **a, **b, **add, r1, c1, r2, c2, i, j;

    while (1)
    {
        printf("For addition, please enter number of rows and column of first matrix\n");
        scanf("%d %d", &r1, &c1);

        printf("Please enter number of rows and column of second matrix\n");
        scanf("%d %d", &r2, &c2);

        if (r1 == r2 && c1 == c2)
        {
            break;
        }
        else
        {
            printf("Order of first matrix must be exactly equal to second matrix\n");
            printf("Try again\n");
        }
    }

    //Dynamically allocating memory for Matrix A, B and Sum

    a = (int**)malloc(r1 * sizeof(int*));
    b = (int**)malloc(r2 * sizeof(int*));
    add = (int**)malloc(r1 * sizeof(int*));

    //Matrix A
    for (i = 0; i < r1; i++)
    {
        a[i] = (int*)malloc(c1 * sizeof(int));
    }

    //Matrix B
    for (i = 0; i < r2; i++)
    {
        b[i] = (int*)malloc(c2 * sizeof(int));
    }

    //Matrix Add
    for (i = 0; i < r1; i++)
    {
        add[i] = (int*)malloc(c1 * sizeof(int));
    }

    //Getting elements
    printf("Please enter the %d x %d  elements of Matrix A\n", r1, c1);

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    printf("Please enter the %d x %d  elements of Matrix B\n", r2, c2);
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }

    //Addition
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
        }
                
    }
    
    //Result
    printf("The Result of addition of two matrix is:\n");
    
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }

    free(a);
    free(b);
    free(add);

}