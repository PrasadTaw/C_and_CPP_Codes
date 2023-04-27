//Program to accept the radius and perform area, volume and surface area operations

#include<stdio.h>

int main(){
    float r;
    int op;

    printf("Please enter the radius\n");
    scanf("%f", &r);

    printf("Please select an option from the menu below:\n");
    printf("1. Area of a circle.\n 2. Circumference of a circle.\n 3. Volume of Sphere.\n");

    scanf("%d", &op);

    switch (op)
    {
    case 1:
            printf("Area of the circle is: %f\n", 3.14*r*r);
            break;

    case 2:
            printf("Circumference of the circle is: %f\n", 2*3.14*r);
            break;

    case 3:
            printf("The Volume of the sphere is: %f\n", (4*3.14*r*r*r)/3);
            break;
    
    default:
            printf("Please enter a valid choice: 1 - 3\n");
        break;
    }

    return 0;
}