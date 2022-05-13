#include <stdio.h>
#include <cs50.h>

int main(void) {
    // declare reps variable
    int reps;

    // prompt user to input positive num:
    do
    {
        reps = get_int("Input your 🙂-square size: ");
    }
    while (reps < 1);
   
    // print 🙂 to console reps times:
    for (int i = 0; i < reps; i++) {

        // print spaces for each row(dependant on reps):
          for (int k = i; k < (reps - 1); k++) {
            printf(" ");
        }

        // print columns:
        for (int j = 0; j <= i; j++) {

            printf("🙂");
        }
        // move to next row:
        printf("\n");
    }
}