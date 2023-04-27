//Program to accept the temperatures in Fahrenheit and print it in Celcius and Kelvin

#include<stdio.h>

int main(){
    float temp_F, temp_C, temp_K;

    printf("Plese enter the temperature in degrees Fahrenheit\n");

    while(1){
        scanf("%f", &temp_F);

        temp_C = ((temp_F - 32)*5)/9;
        temp_K = temp_C + 273.15;
        
        if(temp_K >= 0){
        printf("%f in Fahrenheit is: %f Celius or %f K\n", temp_F, temp_C, temp_K);
        break;
        }
        else printf("Invalid temperature range, try again\n");
    }

    return 0;

}