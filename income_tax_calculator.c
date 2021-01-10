/*calculate the income tax paid by an employee as per the rule :
2.5L - 5.0L = 5%
5.0L - 10L  = 20%
above 10L = 30%

no tax for income below 2.5L
*/
#include<stdio.h>

int main(){
    float tax = 0, income;
    printf("Enter your income \n");
    scanf("%f", &income);

    if(income>=250000 && income<=500000){
        tax = tax+ 0.05*(income - 250000);
    }
    if(income>=500000 && income<=1000000){
        tax = tax+ 0.20*(income - 500000);
    }
    if(income>=1000000){
        tax = tax+ 0.30*(income - 1000000);
    }

    printf("The tax you have to pay is RS. %f \n", tax);

    return 0;
}