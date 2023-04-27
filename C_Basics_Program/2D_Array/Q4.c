//Program to perform the following operations on a square matrix

#include<stdio.h>
#include<stdlib.h>

int main(){
    int o, i, j, **a, temp = 0, trace = 0, ut = 0;

    printf("Please enter the order of the matrix\n");
    scanf("%d", &o);

    //Dynamically allocating memory for a square matrix

    a = (int**)malloc(o * sizeof(int*));
    for (i = 0; i < o; i++)
    {
        a[i] = (int*)malloc(o * sizeof(int));
    }

    //Getting elements from the user
    printf("Please enter the elements of %d x %d matrix\n", o, o);
    for (i = 0; i < o; i++)
    {
        for (j = 0; j < o; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    //Displaying the matrix
    printf("The entered matrix is:\n");
    for (i = 0; i < o; i++)
    {
        for (j = 0; j < o; j++)
        {
            printf("%d\t", a[i][j]);
            
        }
        printf("\n");
    }

    for (i = 0; i < o; i++)
    {
        for (j = 0; j < o; j++)
        {
            if (a[i][j] != a[j][i])
            {
                temp++;
            }
            
        }
        
    }
    if (!temp)
    {
        printf("The Matrix is Symmetric\n");
    }
    else
    {
        printf("The Matrix is NOT Symmetric\n");
    }

    //Diplaying Trace of the matrix

    for (i = 0; i < o; i++)
    {
        for (j = 0; j < o; j++)
        {
            if (i == j)
            {
                trace = trace + a[i][j];
            }
            
            
        }
        
    }
    printf("The Trace of the matrix is: %d\n", trace);

    //Upper triangular matrix checker
    for (i = 0; i < o; i++)
    {
        for (j = 0; j < o; j++)
        {
            if (i > j)
            {
                if (a[i][j] != 0)
                {
                    ut++;
                }
                
            }
            
            
        }
        
    }

    if (!ut)
    {
        printf("The matrix is an Upper Triangular Matrix\n");
    }
    else
    {
        printf("The matrix is NOT an Upper Triangular Matrix\n");
    }
    
    free(a);

    return 0;
    

}