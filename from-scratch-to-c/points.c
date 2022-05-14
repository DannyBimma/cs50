#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    // store points threshold in constant variable:
    const int threshold = 2;

    // prompt user for points & store input in variable:
    int points = get_int("How many points did you lose? ");

    // conditionally log msg to console based on user's points:
    if (points < threshold) 
    {
        printf("If you keep this up you'll be a tech billionare someday 💵 !!\n");
    } 
    else if (points > threshold) 
    {
        printf("A few mistakes made are a few lessons learned... keep on coding 👨🏽‍💻 !!\n");
    } 
    else 
    {
        printf("Just a couple mistakes... but still on track to becoming a tech billionaire 💵 !!\n");
    }
}
