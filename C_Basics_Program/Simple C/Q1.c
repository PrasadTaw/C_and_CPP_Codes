//Program to compute area and circumference of a circle

#include<stdio.h>
int main(){
    double r, area, circumf;
    printf("Please enter the radius of the circle\n");

    while(1){
        scanf("%lf", &r);   //getting user input
        if (r>=0)
        break;
        else{
            printf("Plesae enter a positive number\n");
        }

    }        

    area = 3.14*r*r;
    circumf = 2*3.14*r;

    printf("Area of the circle is: %lf\n", area);
    printf("The Circumference of the circle is: %lf\n", circumf);

    return 0;

}