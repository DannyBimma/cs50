#include <stdio.h>

// declare/prototype custom functions:
void meow(int n);

int main(void) 
{
    // call meow function 3 times:
    meow(3);
}


// create a custom "meow" function for abstraction:
void meow(int n) 
{
    // disply "meow" on the console a number of times:
    for (int i = 0; i < n; i++) 
    {
        printf("🐱 Meow !\n");
    }
}