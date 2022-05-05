// import standard input/output library
#include <stdio.h>
// import cs50 library
#include <cs50.h>

// create "Hello, World" program
int main(void)
{
    string answer = get_string("What's ya name mate?\n");
    printf("Hello, %s! If you're reading this it means I'm a bloody programmer.\n", answer);
}


