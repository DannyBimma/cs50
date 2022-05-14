#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    // prompt the user for a number:
    int n = get_int("Input a number: ");

    // conditionally display msg to console stating if number is odd or even:
    if (n%2 == 0) 
    {
        printf("Your input is an even number +\n");
    } 
    else 
    {
        printf("Your input is an odd number -\n");
    }
}