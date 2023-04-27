//Menu driven program to accept user choice and perform relevant operations

#include<stdio.h>

void circle();
void triangle();
void rect();

int main(){
    int op;

    while (1)
    {
        printf("1: Area of a Circle\n2: Area of a Rectangle\n3: Area of a Traingle\n4: Exit\n");
        printf("Please enter your choice (1 - 4)\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
                circle();
            break;
        case 2:
                rect();
            break;
        case 3:
                triangle();
            break;
        case 4:
                return 0;
        default:
                printf("Invalid input, please try again\n");
            break;
        }
    }
    return 0;
    
}

void circle(){
    int r;
    float area;

    printf("Please enter the radius of a circle\n");
    scanf("%d", &r);

    area = 3.14 * r * r;

    printf("The Area of the given circle is: %f\n\n", area);
}

void rect(){
    int l, b, area;

    printf("Please enter the length and breadth\n");
    scanf("%d %d", &l, &b);

    area = l * b;

    printf("The Area of the given rectangle is: %d\n\n", area);

}

void triangle(){
    int b, h;
    float area;

    printf("Please enter the base and height of a triangle\n");
    scanf("%d %d", &b, &h);

    area = 0.5 * b * h;

    printf("The Area of the given triangle is: %f\n\n", area);
}