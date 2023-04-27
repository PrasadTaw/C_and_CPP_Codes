//Program to accept the dimensions of a cylinder and print the surface area and the volume

#include<stdio.h>

int main(){
    float const pi = 3.14;
    float radius, height, area, volume;

    printf("Please enter the radius and height for a cylinder\n");
    scanf("%f %f", &radius, &height);

    area = 2*pi*radius*(radius + height);
    volume = pi*radius*radius*height;

    printf("The area of the given cylinder is: %f\n", area);
    printf("The volume of the given cylinder is: %f\n", volume);

    return 0;
}