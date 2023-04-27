//Program to accept the annual basic salary from the user and print the net income after taxes

#include<stdio.h>

int main(){
    double basic, net_income;

    printf("Please enter the annual basic salary\n");

    while (1)
    {
        scanf("%lf", &basic);
        if (basic >= 0)
        break;
        else
        {
            printf("Basic salary cannot be a negative number, please enter a valid positive number\n");
        }
    }
    
    if (basic < 150000)
    {
        printf("The taxes are exempt under this slab.\n");
        printf("The Annual Net Income is: %lf", basic);
    }
    else
    {
        if (basic <= 300000)
        {
            net_income = basic - (0.2*basic);
            printf("Tax rate under this slab is 20%%.\n");
            printf("The Annual Net Income is: %lf", net_income);
        }
        else
        {
            net_income = basic - (0.3*basic);
            printf("The tax rate under this slab is 30%%.\n");
            printf("The Annual Net Income is: %lf", net_income);
        }
        
        
    }
    
    return 0;
    
}