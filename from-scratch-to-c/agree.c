#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    // prompt user to accept a condition:
    char acceptance = get_char("Do you accept the responsibility of being a tech billionaire?\nInput (y) to accept or (n) to decline: ");

    // conditionally display msg to console based on user input:
    if (acceptance == 'y' || acceptance == 'Y') 
    {
        printf("Fate secured, now go forth and create a new social media experience for the world 🌐 !!\n");
    } 
    else if (acceptance == 'n' || acceptance == 'N') 
    {
        printf("With great power comes great responsibility, look inward 👀 !!\n");
    } 
    else 
    {
        printf("Invalid response, (n) or (y) 🚫 !! \n");
    }
}