//// AZG 6th financial update practice


#include <stdio.h>


float income, rent, utilities, groceries, transportation;
float rent_percent, utilities_percent, groceries_percent, transportation_percent;
float savings, savings_percent, spending_money;


int collect_user_input(int ) {

    printf("What is your monthly income: ");
    scanf("%f", &income);
return
}


int calculate_percentages(float income, float bill) {
    int percent = (bill/ income) * 100
    return percent;
}

    


int main(void) {


   
    collect_user_input();
    calculate_percentages();


    savings_percent = 10.0;
    savings = (savings_percent / 100) * income;
    spending_money = income - (rent + utilities + groceries + transportation + savings);
    printf("Your rent is $%.2f and that is %.0f%% of your income.\n", rent, rent_percent);
    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, utilities_percent);
    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n", groceries, groceries_percent);
    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", transportation, transportation_percent);
    printf("You should save $%.2f a month, that is %.0f%% of your income.\n", savings, savings_percent);
    printf("You have $%.2f of spending money each month!\n", spending_money);


    return 0;
}