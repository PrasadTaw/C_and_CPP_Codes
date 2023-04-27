//Program to accept 5 subject marks and compute total and percentage

#include<stdio.h>

int total(int[]);
void percentage(int[]);

int main(){
    int sub[5], i;
    printf("Please enter the marks (out of 100) of 5 subjects\n");

    for (i = 0; i < 5; i++)             //Getting valid input from the user
    {
        while(1){
            
            scanf("%d", &sub[i]);
            if(sub[i]>=0 && sub[i]<=100)
            break;
            else printf("Please enter valid marks (0 - 100)\n");
        }
    }

    
    percentage(sub);

    return 0;
}

int total(int s[]){
    int total = 0, i;
    for (i = 0; i < 5; i++)
    {
        total = total + s[i];
    }
    
    printf("The Total marks obtained are: %d\n", total);
    return total;

}

void percentage(int s[]){

    printf("The Percentage obtained are: %f\n", ((float)total(s)/5));

}

