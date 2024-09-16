#include <stdio.h>

int main() {
    float income, tax_amount, net_income;

    printf("Enter your income: ");
    scanf("%f", &income);

    
    if (income <= 250000) {
        tax_amount = 0;
    } else if (income>250001&&income<= 500000) {
        tax_amount = (income) * 0.05;
    } else if (income>500001&&income <= 1000000) {
        tax_amount = (income) * 0.20;
    } else if(income>1000000){
	
        tax_amount = (income ) * 0.30;
    }

    
    net_income = income - tax_amount;

    printf("Total Income: %.2f\n", income);
    printf("Tax Amount: %.2f\n", tax_amount);
    printf("Net Income after Tax: %.2f\n", net_income);

    return 0;
}