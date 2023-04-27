//Program to accept the three angles of a triangle and determine if it's a valid triangle

#include<stdio.h>

int main(){
    int angle[3], isTriangle;

    printf("Please enter the three angles of a triangle in degrees\n");

    int i;
    for ( i = 0; i < 3; i++)
    {
        while (1)
        {
            scanf("%d", &angle[i]);
            if (angle[i] > 0 && angle[i] < 180)
            {
                break;
            }
            else
            {
                printf("Inavalid input, try again. (Angle cannot be zero, 180 or negative)\n");
            }
            
        }
                
    }
        
    isTriangle = angle[0] + angle[1] + angle[2];

    if (isTriangle == 180)
    {
        printf("The given triangle IS a valid triangle\n");
    }
    else
    {
        printf("The given triangle is NOT a valid triangle\n");
    }
    
    return 0;
}