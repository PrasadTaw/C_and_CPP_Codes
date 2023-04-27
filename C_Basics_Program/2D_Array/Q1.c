/*program to accept, display and print the sum of elements of each row and
sum of elements of each column of a matrix */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int row, col, **ptr, i, j, sum_r, sum_c;

    printf("Please enter the preferred number of rows and columns\n");
    scanf("%d %d", &row, &col);

    ptr = (int**)malloc(row * sizeof(int*));

    for (i = 0; i < row; i++)
    {
        ptr[i] = (int*)malloc(col * sizeof(int));
    }
    
    printf("Please enter the %d x %d matrix element\n", row, col);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &ptr[i][j]);
        }
        
    }
    
    printf("The entered matrix is:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", ptr[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < row; i++)
    {
        sum_r = 0;
        for (j = 0; j < col; j++)
        {
            sum_r = sum_r + ptr[i][j];
        }
        printf("The sum elements in row %d is: %d\n", i + 1, sum_r);
    }

    for (j = 0; j < col; j++)
    {
        sum_c = 0;
        for (i = 0; i < row; i++)
        {
            sum_c = sum_c + ptr[i][j];
        }
        printf("The sum of elements in column %d is: %d\n", j + 1, sum_c);
    }
    
    
    free(ptr);

    return 0;
    
}
