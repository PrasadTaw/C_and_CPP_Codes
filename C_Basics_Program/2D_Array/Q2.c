//Program to accept a matrix A of size mXn and store its transpose in matrix B. Display matrix B

#include<stdio.h>
#include<stdlib.h>

int main(){
    int row, col, i, j, **a, **b;

    printf("Please enter the preferred number of rows and columns\n");
    scanf("%d %d", &row, &col);

    //Dynamically allocating memory for Matrix A and B of user defined size

    a = (int**)malloc(row * sizeof(int*));

    for (i = 0; i < row; i++)
    {
        a[i] = (int*)malloc(col * sizeof(int));
    }

    b = (int**)malloc(col * sizeof(int*));

    for (i = 0; i < col; i++)
    {
        b[i] = (int*)malloc(row * sizeof(int));
    }

    printf("Please enter the %d x %d  elements of Matrix A\n", row, col);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    
    printf("The entered matrix A is:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //Copying Matrix A into Matrix B

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            b[j][i] = a[i][j];
        }
        
    }

    printf("The elements of Matrix B after transpose are:\n");

    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    free(a);
    free(b);

    return 0;
    
}