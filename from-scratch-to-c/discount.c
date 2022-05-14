#include <stdio.h>
#include <cs50.h>

// prototype custom functions:
float discount(float price, int percentage);

int main(void) 
{
    // prompt user for regular price:
    float regular = get_float("Input regular price: ");

    // prompt user for percentage off:
    int percent_off = get_int("Input discount percentage: ");

    // store return value from discount function:
    float sale_price = discount(regular, percent_off);

    // display sale price on console with 2 decimal places:
    printf("The sale price = $%.2f\n", sale_price);
}

// create custom discount function that returns the sale price:
float discount(float price, int percentage) 
{
    return price * (100 - percentage) / 100;
}