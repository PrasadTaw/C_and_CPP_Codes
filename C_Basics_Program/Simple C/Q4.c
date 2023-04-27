//Program to compute net salary of an employee

#include<stdio.h>

int main(){

    double basic, net_sal;
    printf("Please enter the basic salary\n");

    while (1)
    {
        scanf("%lf", &basic);
        if(basic >= 0)
        break;
        else printf("Enter a valid positive salary\n");
    }

    net_sal = basic + (0.05 * basic) - (0.13 * basic);
    printf("The net salary after earnings and deductions is: %lf", net_sal);    
    
}