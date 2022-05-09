#include <stdio.h>
#include <cs50.h>

// declare/prototype custom functions:
float discount(float price);

int main(void) {
    // prompt user for regular price:
    float regular = get_float("Input regular price: ");

    // calculate 15% sale price based on regular price input:
    // float sale = regular * .85;

    // display sale price on console with 2 decimal places:
    printf("The sale price = $%.2f\n", discount(regular));
}

// create custom discount function that returns the sale price:
float discount(float price) {
    float sale = price * .85;
    return sale;
}