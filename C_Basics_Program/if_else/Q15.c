//Program to accept three numbers and determine the minimum and maximum.

#include<stdio.h>

int main(){
    int a, b, c, min, max;

    printf("Please enter 3 integer numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    min = a;

    if (b >= max)
    {
        if (b >= c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
        
    }
    else if (c >= max)
    {
        max = c;
    }

    if (b <= min)
    {
        if (b <= c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
        
    }
    else if (c <= min)
    {
        min = c;
    }    
    
    printf("Amongst %d, %d, and %d, Maximum is: %d & Minimum is: %d\n", a, b, c, max, min);

    return 0;


}