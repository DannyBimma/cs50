#include <stdio.h>
#include <cs50.h>

int main(void) {
    // declare reps variable
    int reps;

    // prompt user to input amount:
    do
    {
        reps = get_int("Input your 🙂-square size: ");
    }
    while (reps < 1);
   
    // print 🙂s on the console a number of times (in a row):
    for (int i = 0; i < reps; i++) {

        // print columns:
        for (int j = 0; j < reps; j++) {
            printf("🙂 ");
        }
        // next row:
        printf("\n");
    }
}