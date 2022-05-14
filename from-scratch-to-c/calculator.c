#include <stdio.h>
#include <cs50.h>

// create a simple calculator app with user inputs:
int main(void) 
{
    // prompt user for inputs & store to variables:
    long x = get_long("x: ");
    long y = get_long("y: ");

    // display sum of x & y on console:
    printf("%li\n", x + y);
}